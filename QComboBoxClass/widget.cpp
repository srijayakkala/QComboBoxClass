#include "widget.h"
#include "ui_widget.h"
#include<QDebug>
#include<QIcon>
#include<QStringList>
#include<QString>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

     QStringList list;

     list <<"Fruits"<<"Apple"<<"Orange"<<"papaya"<<"JackFruit";

     ui->comboBox->setStyleSheet("background-color: rgb(0, 0, 0) ; color: rgb(0, 255, 255);");

        ui->comboBox->setEditable(true);

        for(int i=0;i<list.size();i++)

    {

        ui->comboBox->addItem(QIcon("C:/Users/sdeep/Desktop/icon.jpg"),list.at(i));

    }
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_3_clicked()
{
    int index=ui->comboBox->currentIndex();
    qDebug() << "The index is " << index <<" ";
    QString str;
    str=ui->comboBox->currentText();
    qDebug() << "The item is " << str <<" ";

}

void Widget::on_pushButton_clicked()
{
    ui->comboBox->setCurrentIndex(3);
}

void Widget::on_pushButton_2_clicked()
{
    qDebug()<<"The combo box currently has"<<QString::number(ui->comboBox->count())<<"Items.They are";

        for(int i=0;i<ui->comboBox->count();i++)

        {

            qDebug()<<"Index"<<QString::number(i)<<":"<<ui->comboBox->itemText(i);

        }
}
