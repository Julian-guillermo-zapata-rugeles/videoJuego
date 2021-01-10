#ifndef MUNDOTERRESTRE_H
#define MUNDOTERRESTRE_H

#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <personaje.h> // propia
#include <QKeyEvent>
#include <QDebug>
#include <QTimer>
#include <asteroides.h> // propia
#include <enemigo.h> // propia


class mundoTerrestre : public QObject , public QGraphicsRectItem
{
    Q_OBJECT
public:
    mundoTerrestre();
    void iniciarMundo();
 private:
    QGraphicsScene * scene  = new QGraphicsScene();
    personaje * personajePrincipal = new personaje();
    enemigo *enemy = new enemigo();
    QGraphicsView * vista = new QGraphicsView(scene);
    QTimer *ticks = new QTimer();
    QTimer *generadorAsteroides = new QTimer();
    QVector <asteroides *> v_asteroides;


public slots:
  void generador();
  void ticksManager();
};

#endif // MUNDOTERRESTRE_H
