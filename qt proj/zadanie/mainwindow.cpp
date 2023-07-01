#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <cmath>
#include <QDialog>
#include <QPushButton>

struct Result {
    double x;
    double y;
    double z;
};

Result first(double a, double b) {
    Result result;
    result.x = pow(log10(a), 3) + sin(pow(b, 2));
    result.y = pow(a, 3) / pow(b, result.x);
    result.z = pow(abs(result.x), 1.0 / 6.0) + pow(abs(result.x) + abs(result.y), 1.0 / 3.0);
    return result;
}

double second(double x) {
    if (x < -1)
        return -1 * x;
    else if (x < 1)
        return pow(x, 2);
    else
        return x;
}

double third(double x, double m) {
    double s = 0;
    for (int i = 1; i <= 2 * m + 1; i += 2)
        s += i * pow(x, -2);
    return s;
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_calculation_clicked()
{
    double a = ui->a->text().toDouble();
    double b = ui->b->text().toDouble();
    double x1 = ui->x_1->text().toDouble();
    double x2 = ui->x_2->text().toDouble();
    double m = ui->m->text().toDouble();

    Result result = first(a, b);
    double y = second(x1);
    double s = third(x2, m);

    QString xAnswer = QString::number(result.x);
    QString yAnswer = QString::number(result.y);
    QString zAnswer = QString::number(result.z);
    QString x2Answer = QString::number(y);
    QString sAnswer = QString::number(s);

    QDialog *dialog = new QDialog(this);
    dialog->setWindowTitle("Answer");

    QLabel *label = new QLabel("Решение первой задачи:\nX = " + xAnswer + "\nY = " + yAnswer + "\nZ = " + zAnswer
                                   + "\nРешение второй задачи:\nY = " + x2Answer + "\nРешение третьей задачи:\nS = " + sAnswer, dialog);

    QFont font = label->font();
    font.setPointSize(16);
    label->setFont(font);
    dialog->setFixedSize(400, 300);
    dialog->exec();
}
