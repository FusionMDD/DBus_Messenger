#include "form.h"
#include "ui_form.h"
#include "test_interface.h"
#include<QtDBus/QDBusConnection>

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
m_window = new local::MainWindow("org.outtext.test", "/testObject", QDBusConnection::sessionBus(), this);

}

Form::~Form()
{
    delete ui;
}

void Form::on_pushButton_clicked()
{
m_window->test(ui->lineEdit->text());
}
