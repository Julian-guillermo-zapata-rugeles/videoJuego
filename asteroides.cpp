#include "asteroides.h"

asteroides::asteroides()
{
    srand(time(0));
    signed short int dimension = 20+ rand()% 100 ;
    this->setRect(0,0,dimension,dimension);
    setPos(1+rand()%1200,-1500);
    sonido->stop();
    sonido->setMedia(QUrl("qrc:/multimedia/suspenso1.mp3"));
    sonido->play();
    qDebug()<<"asteroide generado ";
    //QTimer *timer = new QTimer();
    //connect(timer,SIGNAL(timeout()),this,SLOT(moverAsteroide()));
    //timer->start(30);
}


bool asteroides::moverAsteroide()
{
    setPos(x(),y()+5);
    if(pos().y() > 560 ){
        qDebug() << "asteroide eliminado";
        sonido->stop();
        sonido->setMedia(QUrl("qrc:/multimedia/explosion1.mp3"));
        sonido->play();
        return true;
    }
    else{
        return false;
    }
}
