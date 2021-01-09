#include <QApplication>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <personaje.h> // propia
#include <QKeyEvent>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // creación de la escena //
    QGraphicsScene * scene  = new QGraphicsScene();
    // Item para escena //
    personaje * personajePrincipal = new personaje();

    // anexo a escena //
    scene->addItem(personajePrincipal);
    // ejecutar ventana //

    QGraphicsView * vista = new QGraphicsView(scene);
    vista->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    vista->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    vista->show();
    vista->setFixedSize(1300,600);
    vista->setSceneRect(0,0,1300,600);

    return a.exec();
}
