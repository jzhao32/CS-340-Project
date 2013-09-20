#include "plane.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    plane w;
    w.show();

    return a.exec();
}
