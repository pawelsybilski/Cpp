/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSaveElementsTo;
    QAction *actionSave_svg_code;
    QAction *actionRead_elements_from;
    QAction *actionSave_svg_code_2;
    QAction *actionModify_element;
    QAction *actionDelete_element;
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QSpinBox *spinBox;
    QLabel *label_2;
    QSpinBox *spinBox_2;
    QLabel *label_3;
    QSpinBox *spinBox_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QGraphicsView *graphicsView;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(974, 634);
        actionSaveElementsTo = new QAction(MainWindow);
        actionSaveElementsTo->setObjectName(QStringLiteral("actionSaveElementsTo"));
        actionSave_svg_code = new QAction(MainWindow);
        actionSave_svg_code->setObjectName(QStringLiteral("actionSave_svg_code"));
        actionRead_elements_from = new QAction(MainWindow);
        actionRead_elements_from->setObjectName(QStringLiteral("actionRead_elements_from"));
        actionSave_svg_code_2 = new QAction(MainWindow);
        actionSave_svg_code_2->setObjectName(QStringLiteral("actionSave_svg_code_2"));
        actionModify_element = new QAction(MainWindow);
        actionModify_element->setObjectName(QStringLiteral("actionModify_element"));
        actionDelete_element = new QAction(MainWindow);
        actionDelete_element->setObjectName(QStringLiteral("actionDelete_element"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 111, 261));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        spinBox = new QSpinBox(layoutWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMinimum(1);
        spinBox->setMaximum(255);
        spinBox->setSingleStep(10);

        verticalLayout_2->addWidget(spinBox);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        spinBox_2 = new QSpinBox(layoutWidget);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setMinimum(100);
        spinBox_2->setMaximum(4500);
        spinBox_2->setSingleStep(100);

        verticalLayout_2->addWidget(spinBox_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        spinBox_3 = new QSpinBox(layoutWidget);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));
        spinBox_3->setMinimum(100);
        spinBox_3->setMaximum(4500);
        spinBox_3->setSingleStep(100);

        verticalLayout_2->addWidget(spinBox_3);


        verticalLayout_4->addLayout(verticalLayout_2);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_4->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout_4->addWidget(pushButton_2);

        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(110, -10, 861, 571));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 974, 26));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuFile->addAction(actionSaveElementsTo);
        menuFile->addAction(actionRead_elements_from);
        menuEdit->addAction(actionModify_element);
        menuEdit->addAction(actionDelete_element);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionSaveElementsTo->setText(QApplication::translate("MainWindow", "save elements to...", Q_NULLPTR));
        actionSave_svg_code->setText(QApplication::translate("MainWindow", "save svg code", Q_NULLPTR));
        actionRead_elements_from->setText(QApplication::translate("MainWindow", "read elements from...", Q_NULLPTR));
        actionSave_svg_code_2->setText(QApplication::translate("MainWindow", "save svg code", Q_NULLPTR));
        actionModify_element->setText(QApplication::translate("MainWindow", "modify element", Q_NULLPTR));
        actionDelete_element->setText(QApplication::translate("MainWindow", "delete element", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "colour of element", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "coordinates x", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "coordinates y", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "add Source", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "add Resistor", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "file", Q_NULLPTR));
        menuEdit->setTitle(QApplication::translate("MainWindow", "edit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
