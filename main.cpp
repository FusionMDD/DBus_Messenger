#include "mainwindow.h"
#include <QApplication>
#include <QtDBus/QDBusConnection>
#include "test_adap.h"
#include"test_interface.h"
#include"form.h"



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Form p;
    new MainWindowAdaptor(&w);
    QDBusConnection connection = QDBusConnection::sessionBus();
    connection.registerObject("/testObject", &w);
    connection.registerService("org.outtext.test");
    w.show();
    p.show();




    return a.exec();
}
