/********************************************************************************
** Form generated from reading UI file 'settingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QVBoxLayout *verticalLayout_6;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *deviceIdLabel;
    QLabel *label_2;
    QLabel *ipAddrLabel;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *deviceNameLineEdit;
    QSpacerItem *horizontalSpacer_3;
    QLabel *osNameLabel;
    QLabel *label_9;
    QLabel *label_3;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *downDirlineEdit;
    QPushButton *selectDirBtn;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *overwriteCheckBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_10;
    QSpinBox *spinBox;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QSpinBox *bcPortSpinBox;
    QLabel *label_5;
    QSpinBox *bcIntervalSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QSpinBox *transferPortSpinBox;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QSpinBox *buffSizeSpinBox;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QString::fromUtf8("SettingsDialog"));
        SettingsDialog->resize(450, 470);
        SettingsDialog->setMinimumSize(QSize(450, 470));
        SettingsDialog->setMaximumSize(QSize(450, 470));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        SettingsDialog->setWindowIcon(icon);
        verticalLayout_6 = new QVBoxLayout(SettingsDialog);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        tabWidget = new QTabWidget(SettingsDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_4 = new QVBoxLayout(tab);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        deviceIdLabel = new QLabel(groupBox);
        deviceIdLabel->setObjectName(QString::fromUtf8("deviceIdLabel"));
        deviceIdLabel->setMinimumSize(QSize(0, 22));
        deviceIdLabel->setStyleSheet(QString::fromUtf8(""));
        deviceIdLabel->setWordWrap(true);

        gridLayout->addWidget(deviceIdLabel, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        ipAddrLabel = new QLabel(groupBox);
        ipAddrLabel->setObjectName(QString::fromUtf8("ipAddrLabel"));
        ipAddrLabel->setMinimumSize(QSize(0, 22));
        ipAddrLabel->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(ipAddrLabel, 1, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        deviceNameLineEdit = new QLineEdit(groupBox);
        deviceNameLineEdit->setObjectName(QString::fromUtf8("deviceNameLineEdit"));
        deviceNameLineEdit->setMinimumSize(QSize(230, 0));
        deviceNameLineEdit->setMaxLength(30);

        horizontalLayout_4->addWidget(deviceNameLineEdit);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_4, 3, 1, 1, 1);

        osNameLabel = new QLabel(groupBox);
        osNameLabel->setObjectName(QString::fromUtf8("osNameLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(osNameLabel->sizePolicy().hasHeightForWidth());
        osNameLabel->setSizePolicy(sizePolicy);
        osNameLabel->setMinimumSize(QSize(0, 22));

        gridLayout->addWidget(osNameLabel, 2, 1, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_9, 2, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);


        verticalLayout_4->addWidget(groupBox);

        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        downDirlineEdit = new QLineEdit(groupBox_2);
        downDirlineEdit->setObjectName(QString::fromUtf8("downDirlineEdit"));

        horizontalLayout_3->addWidget(downDirlineEdit);

        selectDirBtn = new QPushButton(groupBox_2);
        selectDirBtn->setObjectName(QString::fromUtf8("selectDirBtn"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(selectDirBtn->sizePolicy().hasHeightForWidth());
        selectDirBtn->setSizePolicy(sizePolicy1);
        selectDirBtn->setMinimumSize(QSize(28, 0));
        selectDirBtn->setMaximumSize(QSize(28, 16777215));

        horizontalLayout_3->addWidget(selectDirBtn);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_4->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setEnabled(true);
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        overwriteCheckBox = new QCheckBox(groupBox_3);
        overwriteCheckBox->setObjectName(QString::fromUtf8("overwriteCheckBox"));
        overwriteCheckBox->setEnabled(true);

        verticalLayout_3->addWidget(overwriteCheckBox);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setEnabled(false);

        horizontalLayout_5->addWidget(label_10);

        spinBox = new QSpinBox(groupBox_3);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setEnabled(false);
        spinBox->setMinimum(1);
        spinBox->setMaximum(100);

        horizontalLayout_5->addWidget(spinBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_5);


        verticalLayout_4->addWidget(groupBox_3);

        verticalSpacer_2 = new QSpacerItem(20, 47, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_7 = new QVBoxLayout(tab_2);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        groupBox_4 = new QGroupBox(tab_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        verticalLayout_5 = new QVBoxLayout(groupBox_4);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        bcPortSpinBox = new QSpinBox(groupBox_4);
        bcPortSpinBox->setObjectName(QString::fromUtf8("bcPortSpinBox"));
        bcPortSpinBox->setMaximum(65535);

        gridLayout_2->addWidget(bcPortSpinBox, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        bcIntervalSpinBox = new QSpinBox(groupBox_4);
        bcIntervalSpinBox->setObjectName(QString::fromUtf8("bcIntervalSpinBox"));
        bcIntervalSpinBox->setMinimum(1000);
        bcIntervalSpinBox->setMaximum(20000);
        bcIntervalSpinBox->setSingleStep(50);

        gridLayout_2->addWidget(bcIntervalSpinBox, 1, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_5->addLayout(horizontalLayout);


        verticalLayout_7->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(tab_2);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        verticalLayout_8 = new QVBoxLayout(groupBox_5);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(groupBox_5);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(label_7);

        transferPortSpinBox = new QSpinBox(groupBox_5);
        transferPortSpinBox->setObjectName(QString::fromUtf8("transferPortSpinBox"));
        transferPortSpinBox->setMaximum(65535);

        horizontalLayout_7->addWidget(transferPortSpinBox);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);


        verticalLayout_8->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_8 = new QLabel(groupBox_5);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_8);

        buffSizeSpinBox = new QSpinBox(groupBox_5);
        buffSizeSpinBox->setObjectName(QString::fromUtf8("buffSizeSpinBox"));
        buffSizeSpinBox->setMinimum(8);
        buffSizeSpinBox->setMaximum(1024);

        horizontalLayout_6->addWidget(buffSizeSpinBox);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);


        verticalLayout_8->addLayout(horizontalLayout_6);


        verticalLayout_7->addWidget(groupBox_5);

        verticalSpacer_3 = new QSpacerItem(20, 167, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_3);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_6->addWidget(tabWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_3 = new QPushButton(SettingsDialog);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_2->addWidget(pushButton_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(SettingsDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton = new QPushButton(SettingsDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout_6->addLayout(horizontalLayout_2);


        retranslateUi(SettingsDialog);
        QObject::connect(pushButton_2, SIGNAL(clicked()), SettingsDialog, SLOT(onCancelClicked()));
        QObject::connect(pushButton, SIGNAL(clicked()), SettingsDialog, SLOT(onSaveClicked()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), SettingsDialog, SLOT(onResetClicked()));
        QObject::connect(selectDirBtn, SIGNAL(clicked()), SettingsDialog, SLOT(onSelectDownDirClicked()));

        tabWidget->setCurrentIndex(0);
        pushButton->setDefault(true);


        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QApplication::translate("SettingsDialog", "Settings", nullptr));
        groupBox->setTitle(QApplication::translate("SettingsDialog", "Profile", nullptr));
        label->setText(QApplication::translate("SettingsDialog", "Id:", nullptr));
        deviceIdLabel->setText(QApplication::translate("SettingsDialog", "-", nullptr));
        label_2->setText(QApplication::translate("SettingsDialog", "Ip Address:", nullptr));
        ipAddrLabel->setText(QApplication::translate("SettingsDialog", "-", nullptr));
        deviceNameLineEdit->setText(QString());
        osNameLabel->setText(QApplication::translate("SettingsDialog", "-", nullptr));
        label_9->setText(QApplication::translate("SettingsDialog", "OS Name:", nullptr));
        label_3->setText(QApplication::translate("SettingsDialog", "Name:", nullptr));
        groupBox_2->setTitle(QApplication::translate("SettingsDialog", "Directory", nullptr));
        label_4->setText(QApplication::translate("SettingsDialog", "Download Dir:", nullptr));
        selectDirBtn->setText(QApplication::translate("SettingsDialog", "...", nullptr));
        groupBox_3->setTitle(QApplication::translate("SettingsDialog", "Behavior", nullptr));
        overwriteCheckBox->setText(QApplication::translate("SettingsDialog", "Overwrite existing file", nullptr));
        label_10->setText(QApplication::translate("SettingsDialog", "Max. Current Transfers:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("SettingsDialog", "General", nullptr));
        groupBox_4->setTitle(QApplication::translate("SettingsDialog", "Broadcast", nullptr));
        label_6->setText(QApplication::translate("SettingsDialog", "Broadcast Port:", nullptr));
        label_5->setText(QApplication::translate("SettingsDialog", "Broadcast Interval:", nullptr));
        bcIntervalSpinBox->setSuffix(QApplication::translate("SettingsDialog", " ms", nullptr));
        groupBox_5->setTitle(QApplication::translate("SettingsDialog", "Transfer", nullptr));
        label_7->setText(QApplication::translate("SettingsDialog", "Transfer Port:", nullptr));
        label_8->setText(QApplication::translate("SettingsDialog", "Buffer Size:", nullptr));
        buffSizeSpinBox->setSuffix(QApplication::translate("SettingsDialog", " KB", nullptr));
        buffSizeSpinBox->setPrefix(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("SettingsDialog", "Network", nullptr));
        pushButton_3->setText(QApplication::translate("SettingsDialog", "Reset", nullptr));
        pushButton_2->setText(QApplication::translate("SettingsDialog", "Cancel", nullptr));
        pushButton->setText(QApplication::translate("SettingsDialog", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
