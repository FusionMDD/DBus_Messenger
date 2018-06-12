/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -a test_adap mainwindow.xml
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef TEST_ADAP_H
#define TEST_ADAP_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface local.MainWindow
 */
class MainWindowAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "local.MainWindow")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"local.MainWindow\">\n"
"    <method name=\"test\">\n"
"      <arg direction=\"out\" type=\"i\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"str\"/>\n"
"    </method>\n"
"    <method name=\"test\">\n"
"      <arg direction=\"out\" type=\"i\"/>\n"
"    </method>\n"
"  </interface>\n"
        "")
public:
    MainWindowAdaptor(QObject *parent);
    virtual ~MainWindowAdaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    int test();
    int test(const QString &str);
Q_SIGNALS: // SIGNALS
};

#endif
