/********************************************************************************
** Form generated from reading UI file 'viewer.ui'
**
** Created: Sat May 19 14:13:33 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWER_H
#define UI_VIEWER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewerClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ViewerClass)
    {
        if (ViewerClass->objectName().isEmpty())
            ViewerClass->setObjectName(QString::fromUtf8("ViewerClass"));
        ViewerClass->resize(600, 400);
        menuBar = new QMenuBar(ViewerClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        ViewerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ViewerClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        ViewerClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(ViewerClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        ViewerClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ViewerClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ViewerClass->setStatusBar(statusBar);

        retranslateUi(ViewerClass);

        QMetaObject::connectSlotsByName(ViewerClass);
    } // setupUi

    void retranslateUi(QMainWindow *ViewerClass)
    {
        ViewerClass->setWindowTitle(QApplication::translate("ViewerClass", "Viewer", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ViewerClass: public Ui_ViewerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWER_H
