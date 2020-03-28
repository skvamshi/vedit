#include "vedit.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Vedit w;
    w.show();
    return a.exec();
}
