/********************************************************************************
** Form generated from reading UI file 'receiverselectordialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECEIVERSELECTORDIALOG_H
#define UI_RECEIVERSELECTORDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ReceiverSelectorDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_3;
    QListView *listView;
    QLabel *label_multicast;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *ReceiverSelectorDialog)
    {
        if (ReceiverSelectorDialog->objectName().isEmpty())
            ReceiverSelectorDialog->setObjectName(QString::fromUtf8("ReceiverSelectorDialog"));
        ReceiverSelectorDialog->resize(380, 300);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ReceiverSelectorDialog->sizePolicy().hasHeightForWidth());
        ReceiverSelectorDialog->setSizePolicy(sizePolicy);
        ReceiverSelectorDialog->setMinimumSize(QSize(380, 300));
        ReceiverSelectorDialog->setMaximumSize(QSize(380, 300));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        ReceiverSelectorDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(ReceiverSelectorDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(ReceiverSelectorDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButton_3 = new QPushButton(ReceiverSelectorDialog);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon1);
        pushButton_3->setIconSize(QSize(18, 18));
        pushButton_3->setFlat(true);

        horizontalLayout_2->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout_2);

        listView = new QListView(ReceiverSelectorDialog);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setSelectionMode(QAbstractItemView::ExtendedSelection);

        verticalLayout->addWidget(listView);

        label_multicast = new QLabel(ReceiverSelectorDialog);
        label_multicast->setObjectName(QString::fromUtf8("label_multicast"));
        QFont font;
        font.setItalic(true);
        label_multicast->setFont(font);
        label_multicast->setWordWrap(true);

        verticalLayout->addWidget(label_multicast);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(ReceiverSelectorDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(ReceiverSelectorDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ReceiverSelectorDialog);
        QObject::connect(pushButton_2, SIGNAL(clicked()), ReceiverSelectorDialog, SLOT(reject()));
        QObject::connect(pushButton, SIGNAL(clicked()), ReceiverSelectorDialog, SLOT(onSendClicked()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), ReceiverSelectorDialog, SLOT(onRefreshClicked()));

        pushButton->setDefault(true);


        QMetaObject::connectSlotsByName(ReceiverSelectorDialog);
    } // setupUi

    void retranslateUi(QDialog *ReceiverSelectorDialog)
    {
        ReceiverSelectorDialog->setWindowTitle(QCoreApplication::translate("ReceiverSelectorDialog", "Select Receiver", nullptr));
        label->setText(QCoreApplication::translate("ReceiverSelectorDialog", "Select receiver", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_3->setToolTip(QCoreApplication::translate("ReceiverSelectorDialog", "Refresh list", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_3->setText(QString());
#if QT_CONFIG(tooltip)
        listView->setToolTip(QCoreApplication::translate("ReceiverSelectorDialog", "You can select multiple receivers", nullptr));
#endif // QT_CONFIG(tooltip)
        label_multicast->setText(QCoreApplication::translate("ReceiverSelectorDialog", "Note: it is possible to select multiple receivers for multicast using Ctrl+MouseClick or Ctrl+A", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ReceiverSelectorDialog", "Cancel", nullptr));
        pushButton->setText(QCoreApplication::translate("ReceiverSelectorDialog", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReceiverSelectorDialog: public Ui_ReceiverSelectorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECEIVERSELECTORDIALOG_H
