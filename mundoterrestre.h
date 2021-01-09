#ifndef MUNDOTERRESTRE_H
#define MUNDOTERRESTRE_H

#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <personaje.h> // propia
#include <QKeyEvent>
#include <QDebug>

class mundoTerrestre : public QObject , public QGraphicsRectItem
{
    Q_OBJECT
public:
    mundoTerrestre();
    void iniciarMundo();
 public:
    QGraphicsScene * scene  = new QGraphicsScene();
    personaje * personajePrincipal = new personaje();
    QGraphicsView * vista = new QGraphicsView(scene);
};

#endif // MUNDOTERRESTRE_H
