#include "openglwindow.h"
#include "trianglewindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSurfaceFormat format;
    format.setSamples(16);

    TriangleWindow window;
    window.setFormat(format);
    window.resize(640,480);
    window.show();
    window.setAnimating(true);

    return a.exec();
}
