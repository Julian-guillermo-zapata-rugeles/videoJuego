#ifndef PROYECTIL_H
#define PROYECTIL_H

#include <QObject>
#include <QTimer>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QDebug>
#include <QMediaPlayer>

class proyectil : public QObject , public QGraphicsRectItem
{
    Q_OBJECT
private:
    // direccion True  para derecha
    // direccion False para izquierda
    bool direccion;

public:
    proyectil(bool dir);

public slots:
    void moverProyectil();
};

#endif // PROYECTIL_H
