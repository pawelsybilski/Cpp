#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include <QDialog>

namespace Ui {
class Exceptions;
}

class Exceptions : public QDialog
{
    Q_OBJECT

public:
    explicit Exceptions(QWidget *parent = 0);
    ~Exceptions();
    static QString str;

private slots:

    void on_pushButton_clicked();

private:
    Ui::Exceptions *ui;
};

#endif // EXCEPTIONS_H
