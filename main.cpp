#include "PointCloudVisualizer.h"
//#include <QtWidgets/QApplication>
#include <QApplication>
#include<QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PointCloudVisualizer w;
    w.show();
    qDebug()<<"========";
    return a.exec();
}
