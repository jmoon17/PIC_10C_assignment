#include "grade_calculator.h"
#include "ui_grade_calculator.h"

grade_calculator::grade_calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QObject::connect(ui->radioButton, SIGNAL(clicked()), this, SLOT(useSchemeA()));
    QObject::connect(ui->radioButton_2, SIGNAL(clicked()), this, SLOT(useSchemeB()));

}

grade_calculator::~grade_calculator()
{
    delete ui;
}



void grade_calculator::useSchemeA(){

    QString course = ui->comboBox->currentText();

    if(course == "PIC 10B Intermediate Programming"){
        int hws = ui->hwBox->value() + ui->hwBox_2->value() + ui->hwBox_3->value() + ui->hwBox_4->value()
                     + ui->hwBox_5->value() + ui->hwBox_6->value() + ui->hwBox_7->value() + ui->hwBox_8->value();

        int midTerms = ui->mt1Box_9->value() + ui->mt2Box_10->value();

        int final = ui->finalBox_11->value();

        double total = (static_cast<double>(hws)/8) *0.25 + static_cast<double>(midTerms) * 0.40 + static_cast<double>(final) * 0.35;


        ui->label_14->setText(QString::number(total));
    }

    else if(course == "PIC 10C Advanced Programming"){
        int hws = ui->hwBox->value() + ui->hwBox_2->value() + ui->hwBox_3->value() + ui->hwBox_4->value()
                     + ui->hwBox_5->value() + ui->hwBox_6->value() + ui->hwBox_7->value() + ui->hwBox_8->value();

        int midTerms = ui->mt1Box_9->value() + ui->mt2Box_10->value();

        int final = ui->finalBox_11->value();

        double total = (static_cast<double>(hws)/8) *0.15 + static_cast<double>(midTerms) * 0.30 + static_cast<double>(final) * 0.65;


        ui->label_14->setText(QString::number(total));
    }
}

void grade_calculator::useSchemeB(){

    QString course = ui->comboBox->currentText();
    if(course == "PIC 10B Intermediate Programming"){
        int hws = ui->hwBox->value() + ui->hwBox_2->value() + ui->hwBox_3->value() + ui->hwBox_4->value()
                     + ui->hwBox_5->value() + ui->hwBox_6->value() + ui->hwBox_7->value() + ui->hwBox_8->value();

        int midTerms = ui->mt1Box_9->value() + ui->mt2Box_10->value();

        int final = ui->finalBox_11->value();

        double total = (static_cast<double>(hws)/8) *0.25 + static_cast<double>(midTerms) * 0.30 + static_cast<double>(final) * 0.45;

        ui->label_14->setText(QString::number(total));
    }

    else if(course == "PIC 10C Advanced Programming"){
        int hws = ui->hwBox->value() + ui->hwBox_2->value() + ui->hwBox_3->value() + ui->hwBox_4->value()
                     + ui->hwBox_5->value() + ui->hwBox_6->value() + ui->hwBox_7->value() + ui->hwBox_8->value();

        int midTerms = ui->mt1Box_9->value() + ui->mt2Box_10->value();

        int final = ui->finalBox_11->value();

        double total = (static_cast<double>(hws)/8) *0.10 + static_cast<double>(midTerms) * 0.40 + static_cast<double>(final) * 0.50;


        ui->label_14->setText(QString::number(total));
    }

}
