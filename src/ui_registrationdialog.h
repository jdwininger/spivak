/********************************************************************************
** Form generated from reading UI file 'registrationdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATIONDIALOG_H
#define UI_REGISTRATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RegistrationDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupRegistered;
    QVBoxLayout *verticalLayout_2;
    QLabel *lblStatus;
    QGroupBox *groupRegistration;
    QVBoxLayout *verticalLayout;
    QLabel *lblReginfo;
    QPlainTextEdit *leLicense;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RegistrationDialog)
    {
        if (RegistrationDialog->objectName().isEmpty())
            RegistrationDialog->setObjectName("RegistrationDialog");
        RegistrationDialog->resize(536, 556);
        verticalLayout_3 = new QVBoxLayout(RegistrationDialog);
        verticalLayout_3->setObjectName("verticalLayout_3");
        groupRegistered = new QGroupBox(RegistrationDialog);
        groupRegistered->setObjectName("groupRegistered");
        verticalLayout_2 = new QVBoxLayout(groupRegistered);
        verticalLayout_2->setObjectName("verticalLayout_2");
        lblStatus = new QLabel(groupRegistered);
        lblStatus->setObjectName("lblStatus");

        verticalLayout_2->addWidget(lblStatus);


        verticalLayout_3->addWidget(groupRegistered);

        groupRegistration = new QGroupBox(RegistrationDialog);
        groupRegistration->setObjectName("groupRegistration");
        verticalLayout = new QVBoxLayout(groupRegistration);
        verticalLayout->setObjectName("verticalLayout");
        lblReginfo = new QLabel(groupRegistration);
        lblReginfo->setObjectName("lblReginfo");
        lblReginfo->setWordWrap(true);

        verticalLayout->addWidget(lblReginfo);

        leLicense = new QPlainTextEdit(groupRegistration);
        leLicense->setObjectName("leLicense");

        verticalLayout->addWidget(leLicense);


        verticalLayout_3->addWidget(groupRegistration);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(RegistrationDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(RegistrationDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, RegistrationDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, RegistrationDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(RegistrationDialog);
    } // setupUi

    void retranslateUi(QDialog *RegistrationDialog)
    {
        RegistrationDialog->setWindowTitle(QCoreApplication::translate("RegistrationDialog", "Application registration", nullptr));
        groupRegistered->setTitle(QCoreApplication::translate("RegistrationDialog", "Registration status", nullptr));
        lblStatus->setText(QString());
        groupRegistration->setTitle(QCoreApplication::translate("RegistrationDialog", "Registration", nullptr));
        lblReginfo->setText(QCoreApplication::translate("RegistrationDialog", "<html><head/><body><p>Spivak Karaoke Player is free software, and you're permitted to use it according to the terms of GPLv3 license without any payment. </p><p>Registration is completely optional, and allows me to spend more time working on Spivak, as well as giving you access to the following features:</p><ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Ability to change the song pitch; </li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Ability to customize the welcome screen which is shown when no song is being played; </li><li style=\" margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Ability to request features and receive email support; </li></ul><p>Registration is available on the following "
                        "link: </p><p><a href=\"http://www.ulduzsoft.com/spivak-karaoke-player/registration/\"><span style=\" text-decoration: underline; color:#2980b9;\">http://www.ulduzsoft.com/spivak-karaoke-player/registration/</span></a></p><p>Once you receive your registration code by email, please enter it below:</p></body></html>", nullptr));
        leLicense->setPlaceholderText(QCoreApplication::translate("RegistrationDialog", "Please enter your license here", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistrationDialog: public Ui_RegistrationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATIONDIALOG_H
