#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "document.h"
#include <iostream>
#include "source_of_constant_voltage.h"
#include "non_linear_resistor.h"
#include "delete_dialog.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
void display();

    static int counter;
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_actionModify_element_triggered();

    void on_actionDelete_element_triggered();

    void on_actionSaveElementsTo_triggered();

    void on_actionRead_elements_from_triggered();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
