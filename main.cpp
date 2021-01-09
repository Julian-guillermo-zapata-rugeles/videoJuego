#include <QApplication>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsRectItem>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // creación de la escena //
    QGraphicsScene * scene  = new QGraphicsScene(0,0,1000,600);
    // Item para escena //
    QGraphicsRectItem * personaje = new QGraphicsRectItem(0,0,10,10);

    // anexo a escena //
    scene->addItem(personaje);

    // ejecutar ventana //
    QGraphicsView * vista = new QGraphicsView(scene);
    vista->show();

    return a.exec();
}
