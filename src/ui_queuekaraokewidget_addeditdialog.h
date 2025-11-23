/********************************************************************************
** Form generated from reading UI file 'queuekaraokewidget_addeditdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUEUEKARAOKEWIDGET_ADDEDITDIALOG_H
#define UI_QUEUEKARAOKEWIDGET_ADDEDITDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QueueKaraokeWidget_AddEditDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QComboBox *boxSinger;
    QLabel *label_2;
    QLineEdit *leKaraoke;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnDiskFile;
    QPushButton *btnShowSearch;
    QGroupBox *groupSearch;
    QGridLayout *gridLayout;
    QLineEdit *leSearch;
    QLabel *label_3;
    QPushButton *btnSearch;
    QTableView *tableSearch;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QueueKaraokeWidget_AddEditDialog)
    {
        if (QueueKaraokeWidget_AddEditDialog->objectName().isEmpty())
            QueueKaraokeWidget_AddEditDialog->setObjectName("QueueKaraokeWidget_AddEditDialog");
        QueueKaraokeWidget_AddEditDialog->resize(483, 519);
        verticalLayout = new QVBoxLayout(QueueKaraokeWidget_AddEditDialog);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(QueueKaraokeWidget_AddEditDialog);
        groupBox->setObjectName("groupBox");
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        boxSinger = new QComboBox(groupBox);
        boxSinger->setObjectName("boxSinger");
        boxSinger->setEditable(true);

        gridLayout_2->addWidget(boxSinger, 0, 1, 1, 3);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        leKaraoke = new QLineEdit(groupBox);
        leKaraoke->setObjectName("leKaraoke");
        leKaraoke->setReadOnly(true);

        gridLayout_2->addWidget(leKaraoke, 1, 1, 1, 3);

        horizontalSpacer = new QSpacerItem(119, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 2, 0, 1, 2);

        btnDiskFile = new QPushButton(groupBox);
        btnDiskFile->setObjectName("btnDiskFile");

        gridLayout_2->addWidget(btnDiskFile, 2, 2, 1, 1);

        btnShowSearch = new QPushButton(groupBox);
        btnShowSearch->setObjectName("btnShowSearch");

        gridLayout_2->addWidget(btnShowSearch, 2, 3, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupSearch = new QGroupBox(QueueKaraokeWidget_AddEditDialog);
        groupSearch->setObjectName("groupSearch");
        gridLayout = new QGridLayout(groupSearch);
        gridLayout->setObjectName("gridLayout");
        leSearch = new QLineEdit(groupSearch);
        leSearch->setObjectName("leSearch");

        gridLayout->addWidget(leSearch, 1, 0, 1, 1);

        label_3 = new QLabel(groupSearch);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 0, 0, 1, 2);

        btnSearch = new QPushButton(groupSearch);
        btnSearch->setObjectName("btnSearch");

        gridLayout->addWidget(btnSearch, 1, 1, 1, 1);

        tableSearch = new QTableView(groupSearch);
        tableSearch->setObjectName("tableSearch");
        tableSearch->setAlternatingRowColors(true);
        tableSearch->setSelectionMode(QAbstractItemView::SingleSelection);
        tableSearch->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableSearch->setSortingEnabled(true);
        tableSearch->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tableSearch->horizontalHeader()->setStretchLastSection(true);
        tableSearch->verticalHeader()->setVisible(true);

        gridLayout->addWidget(tableSearch, 2, 0, 1, 2);


        verticalLayout->addWidget(groupSearch);

        buttonBox = new QDialogButtonBox(QueueKaraokeWidget_AddEditDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QueueKaraokeWidget_AddEditDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, QueueKaraokeWidget_AddEditDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, QueueKaraokeWidget_AddEditDialog, qOverload<>(&QDialog::reject));

        btnSearch->setDefault(true);


        QMetaObject::connectSlotsByName(QueueKaraokeWidget_AddEditDialog);
    } // setupUi

    void retranslateUi(QDialog *QueueKaraokeWidget_AddEditDialog)
    {
        QueueKaraokeWidget_AddEditDialog->setWindowTitle(QCoreApplication::translate("QueueKaraokeWidget_AddEditDialog", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QueueKaraokeWidget_AddEditDialog", "Parameters", nullptr));
        label->setText(QCoreApplication::translate("QueueKaraokeWidget_AddEditDialog", "Singer:", nullptr));
        label_2->setText(QCoreApplication::translate("QueueKaraokeWidget_AddEditDialog", "Karaoke:", nullptr));
        leKaraoke->setPlaceholderText(QCoreApplication::translate("QueueKaraokeWidget_AddEditDialog", "please search in database or load from disk below", nullptr));
        btnDiskFile->setText(QCoreApplication::translate("QueueKaraokeWidget_AddEditDialog", "File from disk...", nullptr));
        btnShowSearch->setText(QCoreApplication::translate("QueueKaraokeWidget_AddEditDialog", "Search in collection", nullptr));
        groupSearch->setTitle(QCoreApplication::translate("QueueKaraokeWidget_AddEditDialog", "Song search", nullptr));
        leSearch->setText(QString());
        leSearch->setPlaceholderText(QCoreApplication::translate("QueueKaraokeWidget_AddEditDialog", "Type the artist or song title, or parts of", nullptr));
        label_3->setText(QCoreApplication::translate("QueueKaraokeWidget_AddEditDialog", "<html><head/><body><p><span style=\" font-weight:600;\">After selection please double-click on the chosen song to select it.</span></p></body></html>", nullptr));
        btnSearch->setText(QCoreApplication::translate("QueueKaraokeWidget_AddEditDialog", "Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QueueKaraokeWidget_AddEditDialog: public Ui_QueueKaraokeWidget_AddEditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUEUEKARAOKEWIDGET_ADDEDITDIALOG_H
