/********************************************************************************
** Form generated from reading UI file 'exceptions.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXCEPTIONS_H
#define UI_EXCEPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Exceptions
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *Exceptions)
    {
        if (Exceptions->objectName().isEmpty())
            Exceptions->setObjectName(QStringLiteral("Exceptions"));
        Exceptions->resize(399, 170);
        label = new QLabel(Exceptions);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 60, 291, 16));
        pushButton = new QPushButton(Exceptions);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 120, 93, 28));

        retranslateUi(Exceptions);

        QMetaObject::connectSlotsByName(Exceptions);
    } // setupUi

    void retranslateUi(QDialog *Exceptions)
    {
        Exceptions->setWindowTitle(QApplication::translate("Exceptions", "Dialog", Q_NULLPTR));
        label->setText(QString());
        pushButton->setText(QApplication::translate("Exceptions", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Exceptions: public Ui_Exceptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXCEPTIONS_H
