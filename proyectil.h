#ifndef PROYECTIL_H
#define PROYECTIL_H

#include <QObject>
#include <QTimer>
#include <QGraphicsRectItem>

class proyectil : public QGraphicsRectItem , public QObject
{
    Q_OBJECT
private:
    // direccion True  para derecha
    // direccion False para izquierda

    bool direccion;
public:
    proyectil();

public slots:
};

#endif // PROYECTIL_H
