#ifndef ASTEROIDES_H
#define ASTEROIDES_H

#include <QObject>
#include <QTimer>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QDebug>
#include <random>

class asteroides :public QObject , public QGraphicsRectItem
{
    Q_OBJECT

public:
    asteroides();

public slots:
    void moverAsteroide();
};

#endif // ASTEROIDES_H
