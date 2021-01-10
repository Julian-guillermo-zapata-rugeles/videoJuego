#include "enemigo.h"

enemigo::enemigo()
{
    this->setRect(0,0,30,30);
    setPos(1000,560);
    timer->start(5000);
    connect(timer,SIGNAL(timeout()),this,SLOT(disparar()));
}

void enemigo::disparar()
{
    proyectil *disparo = new proyectil(false);
    scene()->addItem(disparo);
    disparo->setPos(this->x(),this->y());
}
