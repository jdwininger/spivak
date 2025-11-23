/********************************************************************************
** Form generated from reading UI file 'dialog_about.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_ABOUT_H
#define UI_DIALOG_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogAbout
{
public:
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabWidget;
    QWidget *tabAbout;
    QHBoxLayout *horizontalLayout;
    QTextBrowser *labelAbout;
    QLabel *label_2;
    QWidget *tab3rdparty;
    QVBoxLayout *verticalLayout_2;
    QTextBrowser *textThirdParty;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogAbout)
    {
        if (DialogAbout->objectName().isEmpty())
            DialogAbout->setObjectName("DialogAbout");
        DialogAbout->resize(630, 440);
        verticalLayout_3 = new QVBoxLayout(DialogAbout);
        verticalLayout_3->setObjectName("verticalLayout_3");
        tabWidget = new QTabWidget(DialogAbout);
        tabWidget->setObjectName("tabWidget");
        tabAbout = new QWidget();
        tabAbout->setObjectName("tabAbout");
        horizontalLayout = new QHBoxLayout(tabAbout);
        horizontalLayout->setObjectName("horizontalLayout");
        labelAbout = new QTextBrowser(tabAbout);
        labelAbout->setObjectName("labelAbout");
        labelAbout->setOpenExternalLinks(true);

        horizontalLayout->addWidget(labelAbout);

        label_2 = new QLabel(tabAbout);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/application_icon.png")));
        label_2->setScaledContents(true);

        horizontalLayout->addWidget(label_2);

        tabWidget->addTab(tabAbout, QString());
        tab3rdparty = new QWidget();
        tab3rdparty->setObjectName("tab3rdparty");
        verticalLayout_2 = new QVBoxLayout(tab3rdparty);
        verticalLayout_2->setObjectName("verticalLayout_2");
        textThirdParty = new QTextBrowser(tab3rdparty);
        textThirdParty->setObjectName("textThirdParty");
        textThirdParty->setOpenExternalLinks(true);

        verticalLayout_2->addWidget(textThirdParty);

        tabWidget->addTab(tab3rdparty, QString());

        verticalLayout_3->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(DialogAbout);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(DialogAbout);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DialogAbout, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DialogAbout, qOverload<>(&QDialog::reject));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DialogAbout);
    } // setupUi

    void retranslateUi(QDialog *DialogAbout)
    {
        DialogAbout->setWindowTitle(QCoreApplication::translate("DialogAbout", "About Karaoke Lyric Editor", nullptr));
        label_2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabAbout), QCoreApplication::translate("DialogAbout", "About application", nullptr));
        textThirdParty->setHtml(QCoreApplication::translate("DialogAbout", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab3rdparty), QCoreApplication::translate("DialogAbout", "Third-party modules used", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogAbout: public Ui_DialogAbout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_ABOUT_H
