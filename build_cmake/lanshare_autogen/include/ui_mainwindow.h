/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *resumeSenderBtn;
    QPushButton *pauseSenderBtn;
    QPushButton *cancelSenderBtn;
    QPushButton *pushButton_2;
    QTableView *senderTableView;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *resumeReceiverBtn;
    QPushButton *pauseReceiverBtn;
    QPushButton *cancelReceiverBtn;
    QPushButton *pushButton;
    QTableView *receiverTableView;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(920, 500);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setLineWidth(2);
        splitter->setOrientation(Qt::Vertical);
        splitter->setOpaqueResize(true);
        splitter->setChildrenCollapsible(false);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/img/up.png")));
        label_3->setScaledContents(false);

        horizontalLayout->addWidget(label_3);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        resumeSenderBtn = new QPushButton(layoutWidget);
        resumeSenderBtn->setObjectName(QString::fromUtf8("resumeSenderBtn"));
        resumeSenderBtn->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/resume.png"), QSize(), QIcon::Normal, QIcon::Off);
        resumeSenderBtn->setIcon(icon1);
        resumeSenderBtn->setIconSize(QSize(18, 18));
        resumeSenderBtn->setFlat(true);

        horizontalLayout->addWidget(resumeSenderBtn);

        pauseSenderBtn = new QPushButton(layoutWidget);
        pauseSenderBtn->setObjectName(QString::fromUtf8("pauseSenderBtn"));
        pauseSenderBtn->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        pauseSenderBtn->setIcon(icon2);
        pauseSenderBtn->setIconSize(QSize(18, 18));
        pauseSenderBtn->setFlat(true);

        horizontalLayout->addWidget(pauseSenderBtn);

        cancelSenderBtn = new QPushButton(layoutWidget);
        cancelSenderBtn->setObjectName(QString::fromUtf8("cancelSenderBtn"));
        cancelSenderBtn->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelSenderBtn->setIcon(icon3);
        cancelSenderBtn->setIconSize(QSize(18, 18));
        cancelSenderBtn->setFlat(true);

        horizontalLayout->addWidget(cancelSenderBtn);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon4);
        pushButton_2->setIconSize(QSize(18, 18));
        pushButton_2->setFlat(true);

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);

        senderTableView = new QTableView(layoutWidget);
        senderTableView->setObjectName(QString::fromUtf8("senderTableView"));
        senderTableView->setContextMenuPolicy(Qt::CustomContextMenu);
        senderTableView->setSelectionMode(QAbstractItemView::SingleSelection);
        senderTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        senderTableView->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        senderTableView->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        senderTableView->setWordWrap(false);
        senderTableView->horizontalHeader()->setStretchLastSection(true);
        senderTableView->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(senderTableView);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/img/down.png")));

        horizontalLayout_2->addWidget(label_4);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        resumeReceiverBtn = new QPushButton(layoutWidget1);
        resumeReceiverBtn->setObjectName(QString::fromUtf8("resumeReceiverBtn"));
        resumeReceiverBtn->setEnabled(false);
        resumeReceiverBtn->setIcon(icon1);
        resumeReceiverBtn->setIconSize(QSize(18, 18));
        resumeReceiverBtn->setFlat(true);

        horizontalLayout_2->addWidget(resumeReceiverBtn);

        pauseReceiverBtn = new QPushButton(layoutWidget1);
        pauseReceiverBtn->setObjectName(QString::fromUtf8("pauseReceiverBtn"));
        pauseReceiverBtn->setEnabled(false);
        pauseReceiverBtn->setIcon(icon2);
        pauseReceiverBtn->setIconSize(QSize(18, 18));
        pauseReceiverBtn->setFlat(true);

        horizontalLayout_2->addWidget(pauseReceiverBtn);

        cancelReceiverBtn = new QPushButton(layoutWidget1);
        cancelReceiverBtn->setObjectName(QString::fromUtf8("cancelReceiverBtn"));
        cancelReceiverBtn->setEnabled(false);
        cancelReceiverBtn->setIcon(icon3);
        cancelReceiverBtn->setIconSize(QSize(18, 18));
        cancelReceiverBtn->setFlat(true);

        horizontalLayout_2->addWidget(cancelReceiverBtn);

        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setIcon(icon4);
        pushButton->setIconSize(QSize(18, 18));
        pushButton->setFlat(true);

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        receiverTableView = new QTableView(layoutWidget1);
        receiverTableView->setObjectName(QString::fromUtf8("receiverTableView"));
        receiverTableView->setContextMenuPolicy(Qt::CustomContextMenu);
        receiverTableView->setSelectionMode(QAbstractItemView::SingleSelection);
        receiverTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        receiverTableView->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        receiverTableView->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        receiverTableView->setWordWrap(false);
        receiverTableView->horizontalHeader()->setStretchLastSection(true);
        receiverTableView->verticalHeader()->setVisible(false);

        verticalLayout_2->addWidget(receiverTableView);

        splitter->addWidget(layoutWidget1);

        verticalLayout_3->addWidget(splitter);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setMovable(false);
        mainToolBar->setAllowedAreas(Qt::LeftToolBarArea);
        mainToolBar->setIconSize(QSize(58, 38));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        mainToolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::LeftToolBarArea, mainToolBar);

        retranslateUi(MainWindow);
        QObject::connect(senderTableView, SIGNAL(doubleClicked(QModelIndex)), MainWindow, SLOT(onSenderTableDoubleClicked(QModelIndex)));
        QObject::connect(receiverTableView, SIGNAL(doubleClicked(QModelIndex)), MainWindow, SLOT(onReceiverTableDoubleClicked(QModelIndex)));
        QObject::connect(pushButton_2, SIGNAL(clicked()), MainWindow, SLOT(onSenderClearClicked()));
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow, SLOT(onReceiverClearClicked()));
        QObject::connect(cancelReceiverBtn, SIGNAL(clicked()), MainWindow, SLOT(onReceiverCancelClicked()));
        QObject::connect(pauseReceiverBtn, SIGNAL(clicked()), MainWindow, SLOT(onReceiverPauseClicked()));
        QObject::connect(resumeReceiverBtn, SIGNAL(clicked()), MainWindow, SLOT(onReceiverResumeClicked()));
        QObject::connect(senderTableView, SIGNAL(customContextMenuRequested(QPoint)), MainWindow, SLOT(onSenderTableContextMenuRequested(QPoint)));
        QObject::connect(receiverTableView, SIGNAL(customContextMenuRequested(QPoint)), MainWindow, SLOT(onReceiverTableContextMenuRequested(QPoint)));
        QObject::connect(cancelSenderBtn, SIGNAL(clicked()), MainWindow, SLOT(onSenderCancelClicked()));
        QObject::connect(pauseSenderBtn, SIGNAL(clicked()), MainWindow, SLOT(onSenderPauseClicked()));
        QObject::connect(resumeSenderBtn, SIGNAL(clicked()), MainWindow, SLOT(onSenderResumeClicked()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Locally", nullptr));
        label_3->setText(QString());
        label->setText(QApplication::translate("MainWindow", "Uploads", nullptr));
#ifndef QT_NO_TOOLTIP
        resumeSenderBtn->setToolTip(QApplication::translate("MainWindow", "Resume", nullptr));
#endif // QT_NO_TOOLTIP
        resumeSenderBtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        pauseSenderBtn->setToolTip(QApplication::translate("MainWindow", "Pause", nullptr));
#endif // QT_NO_TOOLTIP
        pauseSenderBtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        cancelSenderBtn->setToolTip(QApplication::translate("MainWindow", "Cancel selected item", nullptr));
#endif // QT_NO_TOOLTIP
        cancelSenderBtn->setText(QApplication::translate("MainWindow", "Cancel", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_2->setToolTip(QApplication::translate("MainWindow", "Clear completed items", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_2->setText(QString());
        label_4->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "Downloads", nullptr));
#ifndef QT_NO_TOOLTIP
        resumeReceiverBtn->setToolTip(QApplication::translate("MainWindow", "Resume", nullptr));
#endif // QT_NO_TOOLTIP
        resumeReceiverBtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        pauseReceiverBtn->setToolTip(QApplication::translate("MainWindow", "Pause", nullptr));
#endif // QT_NO_TOOLTIP
        pauseReceiverBtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        cancelReceiverBtn->setToolTip(QApplication::translate("MainWindow", "Cancel selected item", nullptr));
#endif // QT_NO_TOOLTIP
        cancelReceiverBtn->setText(QApplication::translate("MainWindow", "Cancel", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("MainWindow", "Clear completed items", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
