/********************************************************************************
** Form generated from reading UI file 'multimediatestwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTIMEDIATESTWIDGET_H
#define UI_MULTIMEDIATESTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MultimediaTestWidget
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *MultimediaTestWidget)
    {
        if (MultimediaTestWidget->objectName().isEmpty())
            MultimediaTestWidget->setObjectName("MultimediaTestWidget");
        MultimediaTestWidget->resize(478, 426);
        verticalLayout_3 = new QVBoxLayout(MultimediaTestWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        groupBox = new QGroupBox(MultimediaTestWidget);
        groupBox->setObjectName("groupBox");
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        textBrowser = new QTextBrowser(groupBox);
        textBrowser->setObjectName("textBrowser");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(textBrowser);


        verticalLayout_3->addWidget(groupBox);


        retranslateUi(MultimediaTestWidget);

        QMetaObject::connectSlotsByName(MultimediaTestWidget);
    } // setupUi

    void retranslateUi(QWidget *MultimediaTestWidget)
    {
        MultimediaTestWidget->setWindowTitle(QCoreApplication::translate("MultimediaTestWidget", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MultimediaTestWidget", "Automatic audio playback test", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MultimediaTestWidget: public Ui_MultimediaTestWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTIMEDIATESTWIDGET_H
