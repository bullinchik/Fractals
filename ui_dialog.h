/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(433, 304);
        verticalLayout_2 = new QVBoxLayout(Dialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(Dialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(Dialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout->addWidget(label_7);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Square - \320\272\320\275\320\276\320\277\320\272\320\260 \320\264\320\273\321\217 \320\277\320\276\321\201\321\202\321\200\320\276\320\265\320\275\320\270\321\217 \321\201\320\260\320\273\321\204\320\265\320\272\321\202\320\270/\320\272\320\262\320\260\320\264\321\200\320\260\321\202\320\260 \320\241\320\265\321\200\320\277\320\270\320\275\321\201\320\272\320\276\320\263\320\276", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Triangle - \320\272\320\273\320\260\320\262\320\270\321\210\320\260 \320\264\320\273\321\217 \320\277\320\276\321\201\321\202\321\200\320\276\320\265\320\275\320\270\321\217 \321\202\321\200\320\265\321\203\320\263\320\276\320\273\321\214\320\275\320\270\320\272\320\260 \320\241\320\265\321\200\320\277\320\270\320\275\321\201\320\272\320\276\320\263\320\276", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "\320\237\320\276\320\264 \320\272\320\260\320\266\320\264\320\276\320\271 \320\270\321\205 \321\215\321\202\320\270\321\205 \320\264\320\262\321\203\321\205 \320\272\320\273\320\260\320\262\320\270\321\210 \321\201\321\202\320\276\320\270\321\202 \320\277\320\276 \320\272\320\273\320\260\320\262\320\270\321\210\320\265 \320\264\320\273\321\217 \320\262\321\213\320\261\320\276\321\200\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "\320\263\320\273\321\203\320\261\320\270\320\275\321\213 \321\200\320\265\320\272\321\203\321\200\321\201\320\270\320\262\320\275\320\276\320\263\320\276 \320\277\320\276\321\201\321\202\321\200\320\276\320\265\320\275\320\270\321\217 \321\204\321\200\320\260\320\272\321\202\320\260\320\273\320\260 \320\270 \320\270\320\274\320\265\320\265\321\202 \320\275\320\265\320\276\320\261\321\205\320\276\320\264\320\270\320\274\321\213\320\265 \320\276\320\263\321\200\320\260\320\275\320\270\321\207\320\265\320\275\320\270\321\217", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "Save - \320\272\320\275\320\276\320\277\320\272\320\260 \320\264\320\273\321\217 \321\201\320\276\321\205\321\200\320\260\320\275\320\265\320\275\320\270\321\217 \321\204\320\260\320\271\320\273\320\260 \320\270 \320\262\321\213\320\261\320\276\321\200\320\260 \320\277\321\203\321\202\320\270 \321\201\320\276\321\205\321\200\320\260\320\275\320\265\320\275\320\270\321\217 \321\204\320\260\320\271\320\273\320\260", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog", "R, G, B - \321\210\320\272\320\260\320\273\321\213 \320\264\320\273\321\217 \320\262\321\213\320\261\320\276\321\200\320\260 \321\206\320\262\320\265\321\202\320\260 \320\277\320\276 \321\201\320\270\321\201\321\202\320\265\320\274\320\265 \"RGB\" \320\276\321\202 0 \320\264\320\276 255 ", nullptr));
        label_7->setText(QCoreApplication::translate("Dialog", "\320\220\320\262\321\202\320\276\321\200 \320\270 \320\270\320\267\320\264\320\260\321\202\320\265\320\273\321\214 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213 - \320\234\320\260\321\202\321\216\321\210\320\272\320\276 \320\244.\320\241.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
