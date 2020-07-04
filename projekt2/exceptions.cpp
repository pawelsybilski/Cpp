#include "exceptions.h"
#include "ui_exceptions.h"
#include "mainwindow.h"

Exceptions::Exceptions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Exceptions)
{
    ui->setupUi(this);
   ui->label->setText( str);

}

Exceptions::~Exceptions()
{
    delete ui;
}
QString Exceptions::str="0";


void Exceptions::on_pushButton_clicked()
{
    close();
}
