#ifndef GRADE_CALCULATOR_H
#define GRADE_CALCULATOR_H

#include "grade_calculator.h"
#include "ui_grade_calculator.h"
#include <QMainWindow>

namespace Ui {
    class grade_calculator;
}

class grade_calculator : public QMainWindow
{
        Q_OBJECT

    public:
        explicit grade_calculator(QWidget *parent = 0);
        ~grade_calculator();


    public slots:
        void useSchemeA();
        void useSchemeB();

    private:
        Ui::MainWindow *ui;
};

#endif // GRADE_CALCULATOR_H
