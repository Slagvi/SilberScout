/********************************************************************************
** Form generated from reading UI file 'SilberScout.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SILBERSCOUT_H
#define UI_SILBERSCOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SilberScoutClass
{
public:
    QWidget *MenuWidget;
    QVBoxLayout *verticalLayout_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SilberScoutClass)
    {
        if (SilberScoutClass->objectName().isEmpty())
            SilberScoutClass->setObjectName(QStringLiteral("SilberScoutClass"));
        SilberScoutClass->resize(1131, 854);
        MenuWidget = new QWidget(SilberScoutClass);
        MenuWidget->setObjectName(QStringLiteral("MenuWidget"));
        verticalLayout_2 = new QVBoxLayout(MenuWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        SilberScoutClass->setCentralWidget(MenuWidget);
        menuBar = new QMenuBar(SilberScoutClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1131, 21));
        SilberScoutClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SilberScoutClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SilberScoutClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SilberScoutClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SilberScoutClass->setStatusBar(statusBar);

        retranslateUi(SilberScoutClass);

        QMetaObject::connectSlotsByName(SilberScoutClass);
    } // setupUi

    void retranslateUi(QMainWindow *SilberScoutClass)
    {
        SilberScoutClass->setWindowTitle(QApplication::translate("SilberScoutClass", "SilberScout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SilberScoutClass: public Ui_SilberScoutClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SILBERSCOUT_H
