#ifndef ENEMIGO_H
#define ENEMIGO_H

#include <QObject>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <proyectil.h>
#include <QTimer>

class enemigo : public QObject , public QGraphicsRectItem
{
    Q_OBJECT
private:
    QTimer *timer = new QTimer();
public:
    enemigo();
public slots:
    void disparar();
};

#endif // ENEMIGO_H
