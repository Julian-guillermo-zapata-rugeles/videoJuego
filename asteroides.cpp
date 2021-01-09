#include "asteroides.h"

asteroides::asteroides()
{
    srand(time(0));
    signed short int dimension = 1+ rand()% 200 ;
    this->setRect(0,0,dimension,dimension);
    setPos(1+rand()%1200,-500);
    QTimer *timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(moverAsteroide()));
    timer->start(30);
}

void asteroides::moverAsteroide()
{
    setPos(x(),y()+5);
    if(pos().y() > 560 ){
        scene()->removeItem(this);
        delete this;
        qDebug() << "asteroide eliminado";
    }
}
