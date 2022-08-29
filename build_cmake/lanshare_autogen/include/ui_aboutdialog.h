/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLabel *programNameLbl;
    QWidget *textContent;
    QVBoxLayout *verticalLayout;
    QLabel *programVersionLbl;
    QLabel *programDescLbl;
    QSpacerItem *verticalSpacer;
    QFrame *line;
    QLabel *label_2;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *creditBtn;
    QPushButton *licenseBtn;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_3;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        AboutDialog->resize(480, 350);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AboutDialog->sizePolicy().hasHeightForWidth());
        AboutDialog->setSizePolicy(sizePolicy);
        AboutDialog->setMinimumSize(QSize(480, 350));
        AboutDialog->setMaximumSize(QSize(480, 350));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        AboutDialog->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(AboutDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(AboutDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(0, 0));
        label_3->setMaximumSize(QSize(16777215, 16777215));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/img/icon.png")));
        label_3->setScaledContents(false);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_3);

        programNameLbl = new QLabel(AboutDialog);
        programNameLbl->setObjectName(QString::fromUtf8("programNameLbl"));
        programNameLbl->setStyleSheet(QString::fromUtf8("font-weight: bold"));
        programNameLbl->setAlignment(Qt::AlignCenter);
        programNameLbl->setWordWrap(true);

        verticalLayout_2->addWidget(programNameLbl);

        textContent = new QWidget(AboutDialog);
        textContent->setObjectName(QString::fromUtf8("textContent"));
        verticalLayout = new QVBoxLayout(textContent);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 9, 0, -1);
        programVersionLbl = new QLabel(textContent);
        programVersionLbl->setObjectName(QString::fromUtf8("programVersionLbl"));
        programVersionLbl->setStyleSheet(QString::fromUtf8("color: rgb(31, 31, 31);"));
        programVersionLbl->setAlignment(Qt::AlignCenter);
        programVersionLbl->setWordWrap(true);

        verticalLayout->addWidget(programVersionLbl);

        programDescLbl = new QLabel(textContent);
        programDescLbl->setObjectName(QString::fromUtf8("programDescLbl"));
        programDescLbl->setStyleSheet(QString::fromUtf8("color: rgb(31, 31, 31);"));
        programDescLbl->setAlignment(Qt::AlignCenter);
        programDescLbl->setWordWrap(true);

        verticalLayout->addWidget(programDescLbl);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        line = new QFrame(textContent);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        label_2 = new QLabel(textContent);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);


        verticalLayout_2->addWidget(textContent);

        textEdit = new QTextEdit(AboutDialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setStyleSheet(QString::fromUtf8("font: 8pt \"Sans\";"));
        textEdit->setReadOnly(true);
        textEdit->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_2->addWidget(textEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        creditBtn = new QPushButton(AboutDialog);
        creditBtn->setObjectName(QString::fromUtf8("creditBtn"));
        creditBtn->setCheckable(true);
        creditBtn->setAutoDefault(false);

        horizontalLayout->addWidget(creditBtn);

        licenseBtn = new QPushButton(AboutDialog);
        licenseBtn->setObjectName(QString::fromUtf8("licenseBtn"));
        licenseBtn->setCheckable(true);
        licenseBtn->setAutoDefault(false);

        horizontalLayout->addWidget(licenseBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_3 = new QPushButton(AboutDialog);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(70, 0));
        pushButton_3->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout->addWidget(pushButton_3);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(AboutDialog);
        QObject::connect(pushButton_3, SIGNAL(clicked()), AboutDialog, SLOT(accept()));
        QObject::connect(creditBtn, SIGNAL(clicked(bool)), AboutDialog, SLOT(onCreditsClicked(bool)));
        QObject::connect(licenseBtn, SIGNAL(clicked(bool)), AboutDialog, SLOT(onLicenseClicked(bool)));

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QApplication::translate("AboutDialog", "About", nullptr));
        label_3->setText(QString());
        programNameLbl->setText(QApplication::translate("AboutDialog", "TextLabel", nullptr));
        programVersionLbl->setText(QApplication::translate("AboutDialog", "TextLabel", nullptr));
        programDescLbl->setText(QApplication::translate("AboutDialog", "TextLabel", nullptr));
        label_2->setText(QApplication::translate("AboutDialog", "<html><head/><body><p><span style=\" font-size:8pt; color:#2b2b2b;\">Copyright (c) 2016, Abdul Aris R.</span></p></body></html>", nullptr));
        creditBtn->setText(QApplication::translate("AboutDialog", "Credits", nullptr));
        licenseBtn->setText(QApplication::translate("AboutDialog", "License", nullptr));
        pushButton_3->setText(QApplication::translate("AboutDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
