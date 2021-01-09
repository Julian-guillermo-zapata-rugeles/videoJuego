#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <QGraphicsRectItem>
#include <QKeyEvent>
#include <QObject>

class personaje : public QGraphicsRectItem , public QObject
{

public:
    personaje();

    void keyPressEvent(QKeyEvent *event);
};

#endif // PERSONAJE_H
