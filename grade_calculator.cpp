#include "grade_calculator.h"
#include "ui_grade_calculator.h"

grade_calculator::grade_calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

grade_calculator::~grade_calculator()
{
    delete ui;
}

//void grade_calculator::update_overall(int unused){
//    // double score = 31.4;
//    double score = static_cast<double>(unused);

//    ui->label_14->setText(QString::number(score));

//    return;
//}
