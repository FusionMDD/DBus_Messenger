#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include"test_interface.h"



namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = 0);
    ~Form();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Form *ui;
    local::MainWindow *m_window;

};

#endif // FORM_H
