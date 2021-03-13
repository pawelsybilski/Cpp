#include "mainwindow.h"
#include <QGraphicsSvgItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include "ui_mainwindow.h"
#include "source_of_constant_voltage.h"
#include "non_linear_resistor.h"
#include "document.h"
#include "element.h"
#include "QFile"
#include <sstream>
#include "delete_dialog.h"
#include "mytypes.h"
#include "modify_dialog.h"
#include "QFileDialog"
#include "iostream"
#include "exceptions.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);

Non_linear_resistor::id_=Document::document_.registerElement(Non_linear_resistor::create_non_linear_resistor);
Source_of_constant_voltage::id_=Document::document_.registerElement(Source_of_constant_voltage::create_source_of_constant_voltage);
}


MainWindow::~MainWindow()
{

    delete ui;
}
int MainWindow :: counter=0;
void MainWindow::on_pushButton_clicked()
{
counter++;
Element * wsk = new Source_of_constant_voltage;
wsk->set_parameters(ui->spinBox->value(),ui->spinBox_2->value(),ui->spinBox_3->value());
Document::document_.add_element(wsk);

MainWindow::display();
}

void MainWindow::on_pushButton_2_clicked()
{
counter++;
Element * wsk = new Non_linear_resistor;

        wsk->set_parameters(ui->spinBox->value(),ui->spinBox_2->value(),ui->spinBox_3->value());
    Document::document_.add_element(wsk);

    MainWindow::display();

}


void MainWindow::on_actionModify_element_triggered()
{

    Modify modify;
    modify.setModal(true);
    modify.show();
    modify.exec();
    MainWindow::display();

}

void MainWindow::on_actionDelete_element_triggered()
{
    Dialog dial;
    dial.show();
    dial.setModal(true);
    dial.exec();
    MainWindow::display();
}


void MainWindow::display()
{
    Document::document_.save_svg();
    QGraphicsScene *scene = new QGraphicsScene();
            scene->addItem(new QGraphicsSvgItem("plik.html"));
            ui->graphicsView->setScene(scene);
            ui->graphicsView->show();

}

void MainWindow::on_actionSaveElementsTo_triggered()
{    try{
    QString file_name = QFileDialog :: getOpenFileName(this, "Save to html file", "/");

    if(file_name.isEmpty())
    {
        QString wyjatek = "Nie wybrano pliku do zapisu";
                throw wyjatek;
    }
    else
    Document::document_.save_for_reading(file_name.toStdString());
     }
     catch(QString w)
     {
         Exceptions::str=w;
         Exceptions excep;
         excep.setModal(true);
         excep.show();
         excep.exec();
     }
}

void MainWindow::on_actionRead_elements_from_triggered()
{
    try{
    QString file_name = QFileDialog :: getOpenFileName(this, "Open a file", "/");
        if(file_name.isEmpty())
        {
            QString wyjatek = "Nie wybrano pliku do odczytu";
                    throw wyjatek;
        }
        else
        Document::document_.read_from_file(file_name.toStdString());
}
    catch(QString w)
    {
        Exceptions::str=w;
        Exceptions excep;
        excep.setModal(true);
        excep.show();
        excep.exec();
    }
        MainWindow::display();
}

void MainWindow::on_pushButton_3_clicked()
{

}
