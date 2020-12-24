#include "jossviewer.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    JossViewer w;
    w.show();
    return a.exec();
}
