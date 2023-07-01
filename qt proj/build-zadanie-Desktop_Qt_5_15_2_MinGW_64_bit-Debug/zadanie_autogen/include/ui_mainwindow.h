/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *guide;
    QLabel *img_1;
    QLabel *img_2;
    QLabel *img_3;
    QLabel *a_label;
    QLineEdit *a;
    QLabel *x_1_label;
    QLineEdit *x_1;
    QLabel *x_2_label;
    QLineEdit *x_2;
    QLabel *b_label;
    QLineEdit *b;
    QLabel *m_label;
    QLineEdit *m;
    QPushButton *calculation;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(824, 449);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        MainWindow->setPalette(palette);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        guide = new QLabel(centralwidget);
        guide->setObjectName(QString::fromUtf8("guide"));
        guide->setEnabled(true);
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe Fluent Icons"));
        font.setPointSize(16);
        guide->setFont(font);

        gridLayout->addWidget(guide, 0, 1, 1, 5, Qt::AlignHCenter);

        img_1 = new QLabel(centralwidget);
        img_1->setObjectName(QString::fromUtf8("img_1"));
        img_1->setPixmap(QPixmap(QString::fromUtf8("../1.jpg")));

        gridLayout->addWidget(img_1, 1, 0, 1, 2);

        img_2 = new QLabel(centralwidget);
        img_2->setObjectName(QString::fromUtf8("img_2"));
        img_2->setPixmap(QPixmap(QString::fromUtf8("../2.jpg")));

        gridLayout->addWidget(img_2, 1, 2, 1, 2);

        img_3 = new QLabel(centralwidget);
        img_3->setObjectName(QString::fromUtf8("img_3"));
        QFont font1;
        font1.setPointSize(9);
        img_3->setFont(font1);
        img_3->setPixmap(QPixmap(QString::fromUtf8("../3.jpg")));

        gridLayout->addWidget(img_3, 1, 4, 1, 2);

        a_label = new QLabel(centralwidget);
        a_label->setObjectName(QString::fromUtf8("a_label"));
        QFont font2;
        font2.setPointSize(16);
        a_label->setFont(font2);

        gridLayout->addWidget(a_label, 2, 0, 1, 1);

        a = new QLineEdit(centralwidget);
        a->setObjectName(QString::fromUtf8("a"));
        a->setFont(font2);

        gridLayout->addWidget(a, 2, 1, 1, 1);

        x_1_label = new QLabel(centralwidget);
        x_1_label->setObjectName(QString::fromUtf8("x_1_label"));
        x_1_label->setFont(font2);

        gridLayout->addWidget(x_1_label, 2, 2, 1, 1);

        x_1 = new QLineEdit(centralwidget);
        x_1->setObjectName(QString::fromUtf8("x_1"));
        x_1->setFont(font2);

        gridLayout->addWidget(x_1, 2, 3, 1, 1);

        x_2_label = new QLabel(centralwidget);
        x_2_label->setObjectName(QString::fromUtf8("x_2_label"));
        x_2_label->setFont(font2);

        gridLayout->addWidget(x_2_label, 2, 4, 1, 1);

        x_2 = new QLineEdit(centralwidget);
        x_2->setObjectName(QString::fromUtf8("x_2"));
        x_2->setFont(font2);

        gridLayout->addWidget(x_2, 2, 5, 1, 1);

        b_label = new QLabel(centralwidget);
        b_label->setObjectName(QString::fromUtf8("b_label"));
        b_label->setFont(font2);

        gridLayout->addWidget(b_label, 3, 0, 1, 1);

        b = new QLineEdit(centralwidget);
        b->setObjectName(QString::fromUtf8("b"));
        b->setFont(font2);

        gridLayout->addWidget(b, 3, 1, 1, 1);

        m_label = new QLabel(centralwidget);
        m_label->setObjectName(QString::fromUtf8("m_label"));
        m_label->setFont(font2);

        gridLayout->addWidget(m_label, 3, 4, 1, 1);

        m = new QLineEdit(centralwidget);
        m->setObjectName(QString::fromUtf8("m"));
        m->setFont(font2);

        gridLayout->addWidget(m, 3, 5, 1, 1);

        calculation = new QPushButton(centralwidget);
        calculation->setObjectName(QString::fromUtf8("calculation"));
        calculation->setFont(font2);

        gridLayout->addWidget(calculation, 4, 2, 1, 2, Qt::AlignHCenter);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        guide->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217 \320\270 \320\275\320\260\320\266\320\274\320\270\321\202\320\265 \320\275\320\260 \320\272\320\275\320\276\320\277\320\272\321\203 \"\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214\".", nullptr));
        img_1->setText(QString());
        img_2->setText(QString());
        img_3->setText(QString());
        a_label->setText(QCoreApplication::translate("MainWindow", "a:", nullptr));
        a->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        x_1_label->setText(QCoreApplication::translate("MainWindow", "x:", nullptr));
        x_1->setText(QCoreApplication::translate("MainWindow", "0.5", nullptr));
        x_2_label->setText(QCoreApplication::translate("MainWindow", "x:", nullptr));
        x_2->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        b_label->setText(QCoreApplication::translate("MainWindow", "b:", nullptr));
        b->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        m_label->setText(QCoreApplication::translate("MainWindow", "m:", nullptr));
        m->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        calculation->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
