#include "personaje.h"

personaje::personaje(short int x , short int y , short int ancho , short int alto){
    this->setRect(x,y,ancho,alto);
}

void personaje::keyPressEvent(QKeyEvent *event)
{
}
