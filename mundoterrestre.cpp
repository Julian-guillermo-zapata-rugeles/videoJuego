#include "mundoterrestre.h"

mundoTerrestre::mundoTerrestre()
{
    // creacion y anexo de personajes  //
    scene->addItem(personajePrincipal);
    scene->addItem(enemy);
    connect(generadorAsteroides,SIGNAL(timeout()),this,SLOT(generador()));
    connect(ticks,SIGNAL(timeout()),this,SLOT(ticksManager()));


    generadorAsteroides->start(30000);
    ticks->start(30);
}

void mundoTerrestre::iniciarMundo()
{
    vista->setScene(scene);
    vista->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    vista->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    vista->show();
    vista->setFixedSize(1300,600);
    vista->setSceneRect(0,0,1300,600);

}

void mundoTerrestre::generador()
{
    v_asteroides.push_back(new asteroides());
    scene->addItem(v_asteroides.last());

}

void mundoTerrestre::ticksManager()
{
    for(auto& it:v_asteroides){
        if(it->moverAsteroide()){
            scene->removeItem(it);
            v_asteroides.erase(std::remove(v_asteroides.begin(),v_asteroides.end(),it),v_asteroides.end());
        }
    }
}
