#ifndef MUNDOTERRESTRE_H
#define MUNDOTERRESTRE_H

#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <personaje.h> // propia
#include <QKeyEvent>
#include <QDebug>
#include <asteroides.h> // propia
class mundoTerrestre : public QObject , public QGraphicsRectItem
{
    Q_OBJECT
public:
    mundoTerrestre();
    void iniciarMundo();
 private:
    QGraphicsScene * scene  = new QGraphicsScene();
    personaje * personajePrincipal = new personaje();
    QGraphicsView * vista = new QGraphicsView(scene);
    QTimer *ticks = new QTimer();


public slots:
  void eventos();
};

#endif // MUNDOTERRESTRE_H
