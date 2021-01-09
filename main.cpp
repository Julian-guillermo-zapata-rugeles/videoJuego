#include <QApplication>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <personaje.h>
#include <QKeyEvent>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // creación de la escena //
    QGraphicsScene * scene  = new QGraphicsScene(0,0,1000,500);
    // Item para escena //
    personaje * personajePrincipal = new personaje(100,100,20,20);

    // anexo a escena //
    scene->addItem(personajePrincipal);
    // ejecutar ventana //
    QGraphicsView * vista = new QGraphicsView(scene);
    vista->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    vista->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    vista->show();

    return a.exec();
}
