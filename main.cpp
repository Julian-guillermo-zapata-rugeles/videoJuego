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
    personaje * personajePrincipal = new personaje(0,100,20,20);

    // anexo a escena //
    scene->addItem(personajePrincipal);
    // ejecutar ventana //

    QGraphicsView * vista = new QGraphicsView(scene);
    vista->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    vista->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    vista->show();

    return a.exec();
}
