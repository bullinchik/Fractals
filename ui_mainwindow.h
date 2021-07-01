/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QPushButton *save_1;
    QPushButton *triangel_1;
    QPushButton *pushButton_2;
    QSpinBox *spinBox;
    QLabel *label;
    QLabel *label_2;
    QSpinBox *spinBox_2;
    QSpinBox *spinBox_3;
    QSpinBox *spinBox_4;
    QSpinBox *spinBox_5;
    QSlider *horizontalSlider;
    QSlider *horizontalSlider_2;
    QSlider *horizontalSlider_3;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1010, 863);
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(20, 10, 800, 800));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy);
        save_1 = new QPushButton(centralwidget);
        save_1->setObjectName(QString::fromUtf8("save_1"));
        save_1->setGeometry(QRect(870, 660, 80, 21));
        triangel_1 = new QPushButton(centralwidget);
        triangel_1->setObjectName(QString::fromUtf8("triangel_1"));
        triangel_1->setGeometry(QRect(840, 120, 80, 21));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(840, 20, 80, 21));
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(840, 80, 101, 22));
        spinBox->setMaximum(5);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(840, 50, 121, 31));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(840, 150, 111, 16));
        spinBox_2 = new QSpinBox(centralwidget);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setGeometry(QRect(840, 170, 111, 22));
        spinBox_2->setMinimum(1);
        spinBox_2->setMaximum(8);
        spinBox_3 = new QSpinBox(centralwidget);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        spinBox_3->setGeometry(QRect(830, 400, 42, 22));
        spinBox_3->setMaximum(255);
        spinBox_4 = new QSpinBox(centralwidget);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));
        spinBox_4->setGeometry(QRect(830, 430, 42, 22));
        spinBox_4->setMaximum(255);
        spinBox_5 = new QSpinBox(centralwidget);
        spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));
        spinBox_5->setGeometry(QRect(830, 460, 42, 22));
        spinBox_5->setMaximum(255);
        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(880, 460, 91, 20));
        horizontalSlider->setMaximum(255);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider_2 = new QSlider(centralwidget);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(880, 430, 91, 20));
        horizontalSlider_2->setMaximum(255);
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        horizontalSlider_3 = new QSlider(centralwidget);
        horizontalSlider_3->setObjectName(QString::fromUtf8("horizontalSlider_3"));
        horizontalSlider_3->setGeometry(QRect(880, 400, 91, 20));
        horizontalSlider_3->setMaximum(255);
        horizontalSlider_3->setOrientation(Qt::Horizontal);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(980, 390, 16, 20));
        QFont font;
        font.setPointSize(12);
        label_3->setFont(font);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(980, 420, 16, 20));
        label_4->setFont(font);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(980, 450, 16, 20));
        label_5->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1010, 20));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(action);

        retranslateUi(MainWindow);
        QObject::connect(spinBox_4, &QSpinBox::valueChanged, horizontalSlider_2, &QSlider::setValue);
        QObject::connect(horizontalSlider_2, &QSlider::valueChanged, spinBox_4, &QSpinBox::setValue);
        QObject::connect(spinBox_5, &QSpinBox::valueChanged, horizontalSlider, &QSlider::setValue);
        QObject::connect(horizontalSlider, &QSlider::valueChanged, spinBox_5, &QSpinBox::setValue);
        QObject::connect(horizontalSlider_3, &QSlider::valueChanged, spinBox_3, &QSpinBox::setValue);
        QObject::connect(spinBox_3, &QSpinBox::valueChanged, horizontalSlider_3, &QSlider::setValue);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
        save_1->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        triangel_1->setText(QCoreApplication::translate("MainWindow", "Triangle", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Square", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Recursion rate square", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Recursion rate triangle", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
