/********************************************************************************
** Form generated from reading UI file 'MenuSilber.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUSILBER_H
#define UI_MENUSILBER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuSilber
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLCDNumber *lcdNumber;
    QSpacerItem *horizontalSpacer;
    QPushButton *StartBtn;

    void setupUi(QWidget *MenuSilber)
    {
        if (MenuSilber->objectName().isEmpty())
            MenuSilber->setObjectName(QStringLiteral("MenuSilber"));
        MenuSilber->resize(574, 509);
        verticalLayout_2 = new QVBoxLayout(MenuSilber);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(MenuSilber);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);

        verticalLayout_2->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        label_2 = new QLabel(MenuSilber);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(MenuSilber);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        lcdNumber = new QLCDNumber(MenuSilber);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));

        horizontalLayout->addWidget(lcdNumber);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        StartBtn = new QPushButton(MenuSilber);
        StartBtn->setObjectName(QStringLiteral("StartBtn"));

        horizontalLayout->addWidget(StartBtn);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(MenuSilber);

        QMetaObject::connectSlotsByName(MenuSilber);
    } // setupUi

    void retranslateUi(QWidget *MenuSilber)
    {
        MenuSilber->setWindowTitle(QApplication::translate("MenuSilber", "MenuSilber", nullptr));
        label->setText(QApplication::translate("MenuSilber", "Menu Zarz\304\205dzania SilberScout", nullptr));
        label_2->setText(QApplication::translate("MenuSilber", "Opis misji, dzia\305\202ania baterii, skanera, sterowania", nullptr));
        label_3->setText(QApplication::translate("MenuSilber", "Pozosta\305\202a liczba bot\303\263w:", nullptr));
        StartBtn->setText(QApplication::translate("MenuSilber", "Rozpocznij zwiad", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuSilber: public Ui_MenuSilber {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUSILBER_H
