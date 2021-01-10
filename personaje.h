#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <QGraphicsRectItem>
#include <QKeyEvent>
#include <QObject>
#include <QMediaPlayer>

class personaje : public QGraphicsRectItem , public QObject
{

private:
    QMediaPlayer *sonido = new QMediaPlayer();
public:
    personaje();

    void keyPressEvent(QKeyEvent *event);
};

#endif // PERSONAJE_H
