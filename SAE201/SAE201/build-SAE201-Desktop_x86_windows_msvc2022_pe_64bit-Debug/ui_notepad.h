/********************************************************************************
** Form generated from reading UI file 'notepad.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEPAD_H
#define UI_NOTEPAD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Notepad
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionExit;
    QAction *actionColor;
    QAction *actionFont;
    QAction *actionCopy;
    QAction *actionCut;
    QAction *actionPaste;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionItalique;
    QAction *actionUnderline;
    QAction *actionBold;
    QAction *actionWeight;
    QAction *actionAbout;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QMenu *menuEdit;
    QMenu *menuAbout;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Notepad)
    {
        if (Notepad->objectName().isEmpty())
            Notepad->setObjectName(QString::fromUtf8("Notepad"));
        Notepad->resize(800, 600);
        actionNew = new QAction(Notepad);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Images/images/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(Notepad);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Images/images/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(Notepad);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Images/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionSave_as = new QAction(Notepad);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Images/images/save_as.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_as->setIcon(icon3);
        actionExit = new QAction(Notepad);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Images/images/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon4);
        actionColor = new QAction(Notepad);
        actionColor->setObjectName(QString::fromUtf8("actionColor"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Images/images/pencil.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionColor->setIcon(icon5);
        actionFont = new QAction(Notepad);
        actionFont->setObjectName(QString::fromUtf8("actionFont"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Images/images/font.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFont->setIcon(icon6);
        actionCopy = new QAction(Notepad);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Images/images/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon7);
        actionCut = new QAction(Notepad);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Images/images/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon8);
        actionPaste = new QAction(Notepad);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8("../Images/images/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon9);
        actionUndo = new QAction(Notepad);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/Images/images/edit_undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon10);
        actionRedo = new QAction(Notepad);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/Images/images/edit_redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon11);
        actionItalique = new QAction(Notepad);
        actionItalique->setObjectName(QString::fromUtf8("actionItalique"));
        actionItalique->setCheckable(true);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/Images/images/italic.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionItalique->setIcon(icon12);
        actionUnderline = new QAction(Notepad);
        actionUnderline->setObjectName(QString::fromUtf8("actionUnderline"));
        actionUnderline->setCheckable(true);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/Images/images/underline.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUnderline->setIcon(icon13);
        actionBold = new QAction(Notepad);
        actionBold->setObjectName(QString::fromUtf8("actionBold"));
        actionBold->setCheckable(true);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/Images/images/bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBold->setIcon(icon14);
        actionWeight = new QAction(Notepad);
        actionWeight->setObjectName(QString::fromUtf8("actionWeight"));
        actionAbout = new QAction(Notepad);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/Images/images/info.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon15);
        centralwidget = new QWidget(Notepad);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);

        Notepad->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Notepad);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        Notepad->setMenuBar(menubar);
        statusbar = new QStatusBar(Notepad);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Notepad->setStatusBar(statusbar);
        toolBar = new QToolBar(Notepad);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        Notepad->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuMenu->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuMenu->addAction(actionNew);
        menuMenu->addAction(actionOpen);
        menuMenu->addAction(actionSave);
        menuMenu->addAction(actionSave_as);
        menuMenu->addAction(actionExit);
        menuEdit->addAction(actionColor);
        menuEdit->addAction(actionFont);
        menuEdit->addAction(actionItalique);
        menuEdit->addAction(actionUnderline);
        menuEdit->addAction(actionBold);
        menuEdit->addSeparator();
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionPaste);
        menuEdit->addSeparator();
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuAbout->addAction(actionAbout);
        toolBar->addAction(actionNew);
        toolBar->addSeparator();
        toolBar->addAction(actionOpen);
        toolBar->addSeparator();
        toolBar->addAction(actionSave);
        toolBar->addSeparator();
        toolBar->addAction(actionSave_as);
        toolBar->addSeparator();
        toolBar->addAction(actionColor);
        toolBar->addSeparator();
        toolBar->addAction(actionExit);
        toolBar->addSeparator();
        toolBar->addAction(actionFont);
        toolBar->addSeparator();
        toolBar->addAction(actionCopy);
        toolBar->addSeparator();
        toolBar->addAction(actionCut);
        toolBar->addSeparator();
        toolBar->addAction(actionPaste);
        toolBar->addSeparator();
        toolBar->addAction(actionUndo);
        toolBar->addSeparator();
        toolBar->addAction(actionRedo);
        toolBar->addSeparator();
        toolBar->addAction(actionItalique);
        toolBar->addSeparator();
        toolBar->addAction(actionUnderline);
        toolBar->addSeparator();
        toolBar->addAction(actionBold);
        toolBar->addSeparator();
        toolBar->addAction(actionAbout);
        toolBar->addSeparator();

        retranslateUi(Notepad);

        QMetaObject::connectSlotsByName(Notepad);
    } // setupUi

    void retranslateUi(QMainWindow *Notepad)
    {
        Notepad->setWindowTitle(QCoreApplication::translate("Notepad", "Notepad", nullptr));
        actionNew->setText(QCoreApplication::translate("Notepad", "New", nullptr));
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("Notepad", "Open", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("Notepad", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_as->setText(QCoreApplication::translate("Notepad", "Save as", nullptr));
#if QT_CONFIG(shortcut)
        actionSave_as->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExit->setText(QCoreApplication::translate("Notepad", "Exit", nullptr));
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionColor->setText(QCoreApplication::translate("Notepad", "Color", nullptr));
        actionFont->setText(QCoreApplication::translate("Notepad", "Font", nullptr));
        actionCopy->setText(QCoreApplication::translate("Notepad", "Copy", nullptr));
#if QT_CONFIG(shortcut)
        actionCopy->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCut->setText(QCoreApplication::translate("Notepad", "Cut", nullptr));
#if QT_CONFIG(shortcut)
        actionCut->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPaste->setText(QCoreApplication::translate("Notepad", "Paste", nullptr));
#if QT_CONFIG(shortcut)
        actionPaste->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUndo->setText(QCoreApplication::translate("Notepad", "Undo", nullptr));
#if QT_CONFIG(shortcut)
        actionUndo->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRedo->setText(QCoreApplication::translate("Notepad", "Redo", nullptr));
#if QT_CONFIG(shortcut)
        actionRedo->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        actionItalique->setText(QCoreApplication::translate("Notepad", "Italique", nullptr));
        actionUnderline->setText(QCoreApplication::translate("Notepad", "Underline", nullptr));
        actionBold->setText(QCoreApplication::translate("Notepad", "Bold", nullptr));
        actionWeight->setText(QCoreApplication::translate("Notepad", "Weight", nullptr));
        actionAbout->setText(QCoreApplication::translate("Notepad", "About", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("Notepad", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("Notepad", "Edit", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("Notepad", "About", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("Notepad", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Notepad: public Ui_Notepad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPAD_H
