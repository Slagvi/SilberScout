/********************************************************************************
** Form generated from reading UI file 'ControlSilber.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLSILBER_H
#define UI_CONTROLSILBER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ControlSilber
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGraphicsView *graphicsView;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLCDNumber *lcdNumber;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *abandonBtn;

    void setupUi(QWidget *ControlSilber)
    {
        if (ControlSilber->objectName().isEmpty())
            ControlSilber->setObjectName(QStringLiteral("ControlSilber"));
        ControlSilber->resize(828, 397);
        verticalLayout = new QVBoxLayout(ControlSilber);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(ControlSilber);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);

        verticalLayout->addWidget(label);

        graphicsView = new QGraphicsView(ControlSilber);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        verticalLayout->addWidget(graphicsView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(ControlSilber);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lcdNumber = new QLCDNumber(ControlSilber);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));

        horizontalLayout->addWidget(lcdNumber);

        pushButton = new QPushButton(ControlSilber);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        abandonBtn = new QPushButton(ControlSilber);
        abandonBtn->setObjectName(QStringLiteral("abandonBtn"));

        horizontalLayout->addWidget(abandonBtn);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ControlSilber);

        QMetaObject::connectSlotsByName(ControlSilber);
    } // setupUi

    void retranslateUi(QWidget *ControlSilber)
    {
        ControlSilber->setWindowTitle(QApplication::translate("ControlSilber", "ControlSilber", nullptr));
        label->setText(QApplication::translate("ControlSilber", "Podgl\304\205d operacyjny", nullptr));
        label_2->setText(QApplication::translate("ControlSilber", "Stan baterii", nullptr));
        pushButton->setText(QApplication::translate("ControlSilber", "Skanuj otoczenie", nullptr));
        abandonBtn->setText(QApplication::translate("ControlSilber", "Porzu\304\207 zwiad", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ControlSilber: public Ui_ControlSilber {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLSILBER_H
