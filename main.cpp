#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w,w2;
    w.move(200,200);
    w2.move(1000,200);
    w.show();
    w2.show();
    return a.exec();
}
