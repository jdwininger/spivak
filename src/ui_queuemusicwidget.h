/********************************************************************************
** Form generated from reading UI file 'queuemusicwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUEUEMUSICWIDGET_H
#define UI_QUEUEMUSICWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QueueMusicWidget
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *leFilterSingers;
    QTableView *tableQueue;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnAdd;
    QPushButton *btnRemove;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupPlayerControl;

    void setupUi(QWidget *QueueMusicWidget)
    {
        if (QueueMusicWidget->objectName().isEmpty())
            QueueMusicWidget->setObjectName("QueueMusicWidget");
        QueueMusicWidget->resize(400, 613);
        verticalLayout = new QVBoxLayout(QueueMusicWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(QueueMusicWidget);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        leFilterSingers = new QLineEdit(QueueMusicWidget);
        leFilterSingers->setObjectName("leFilterSingers");

        horizontalLayout_2->addWidget(leFilterSingers);


        verticalLayout_2->addLayout(horizontalLayout_2);

        tableQueue = new QTableView(QueueMusicWidget);
        tableQueue->setObjectName("tableQueue");
        tableQueue->setDragEnabled(true);
        tableQueue->setDragDropOverwriteMode(false);
        tableQueue->setDragDropMode(QAbstractItemView::DragDrop);
        tableQueue->setAlternatingRowColors(true);
        tableQueue->setSelectionMode(QAbstractItemView::SingleSelection);
        tableQueue->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableQueue->setShowGrid(true);
        tableQueue->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_2->addWidget(tableQueue);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnAdd = new QPushButton(QueueMusicWidget);
        btnAdd->setObjectName("btnAdd");

        horizontalLayout->addWidget(btnAdd);

        btnRemove = new QPushButton(QueueMusicWidget);
        btnRemove->setObjectName("btnRemove");

        horizontalLayout->addWidget(btnRemove);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        groupPlayerControl = new QGroupBox(QueueMusicWidget);
        groupPlayerControl->setObjectName("groupPlayerControl");

        verticalLayout_2->addWidget(groupPlayerControl);


        verticalLayout->addLayout(verticalLayout_2);


        retranslateUi(QueueMusicWidget);

        QMetaObject::connectSlotsByName(QueueMusicWidget);
    } // setupUi

    void retranslateUi(QWidget *QueueMusicWidget)
    {
        QueueMusicWidget->setWindowTitle(QCoreApplication::translate("QueueMusicWidget", "Music collection", nullptr));
        label->setText(QCoreApplication::translate("QueueMusicWidget", "Find:", nullptr));
        leFilterSingers->setPlaceholderText(QCoreApplication::translate("QueueMusicWidget", "start typing to locate the entry below...", nullptr));
        btnAdd->setText(QCoreApplication::translate("QueueMusicWidget", "Add music", nullptr));
        btnRemove->setText(QCoreApplication::translate("QueueMusicWidget", "Remove selected", nullptr));
        groupPlayerControl->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class QueueMusicWidget: public Ui_QueueMusicWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUEUEMUSICWIDGET_H
