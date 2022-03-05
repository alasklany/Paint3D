#include "mainwindow.h"
#include <qsurfaceformat.h>
#include <QVTKOpenGLNativeWidget.h>
#include <QApplication>
#include <qfile.h>
#include <qsplashscreen.h>
#include <qtimer.h>
int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    QSplashScreen* splash = new QSplashScreen;

    splash->setPixmap(QPixmap(":/res/img/cube.png"));

    splash->show();

    MainWindow w;
    QTimer::singleShot(500, splash, SLOT(close()));

    QTimer::singleShot(500, &w, SLOT(show()));

    return a.exec();
}
