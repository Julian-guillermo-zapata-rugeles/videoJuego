#include "personaje.h"

personaje::personaje(short int x , short int y , short int ancho , short int alto){
    this->setRect(x,y,ancho,alto);
    this->setFlag(QGraphicsItem::ItemIsFocusable);
    this->setFocus();
}

void personaje::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_A){
        setPos(x()-5,y());
    }
    if(event->key() == Qt::Key_D){
        setPos(x()+5,y());
    }
    if(event->key() == Qt::Key_W){
        setPos(x(),y()-5);
    }
}
