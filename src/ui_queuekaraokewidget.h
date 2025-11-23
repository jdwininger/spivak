/********************************************************************************
** Form generated from reading UI file 'queuekaraokewidget.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUEUEKARAOKEWIDGET_H
#define UI_QUEUEKARAOKEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QueueKaraokeWidget
{
public:
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *leFilterSingers;
    QTableView *tableQueue;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnAdd;
    QPushButton *btnEdit;
    QPushButton *btnRemove;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupPlayerControl;
    QGroupBox *groupSearch;
    QVBoxLayout *verticalLayout;
    QTableView *tableSearch;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *leSearch;
    QPushButton *btnFind;

    void setupUi(QWidget *QueueKaraokeWidget)
    {
        if (QueueKaraokeWidget->objectName().isEmpty())
            QueueKaraokeWidget->setObjectName("QueueKaraokeWidget");
        QueueKaraokeWidget->resize(877, 644);
        QueueKaraokeWidget->setProperty("sizeGripEnabled", QVariant(false));
        verticalLayout_3 = new QVBoxLayout(QueueKaraokeWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        splitter = new QSplitter(QueueKaraokeWidget);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        splitter->setChildrenCollapsible(true);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName("layoutWidget");
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        leFilterSingers = new QLineEdit(layoutWidget);
        leFilterSingers->setObjectName("leFilterSingers");
        leFilterSingers->setClearButtonEnabled(true);

        horizontalLayout_2->addWidget(leFilterSingers);


        verticalLayout_2->addLayout(horizontalLayout_2);

        tableQueue = new QTableView(layoutWidget);
        tableQueue->setObjectName("tableQueue");
        tableQueue->setDragEnabled(true);
        tableQueue->setDragDropOverwriteMode(false);
        tableQueue->setDragDropMode(QAbstractItemView::DragDrop);
        tableQueue->setAlternatingRowColors(true);
        tableQueue->setSelectionMode(QAbstractItemView::SingleSelection);
        tableQueue->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableQueue->setShowGrid(false);
        tableQueue->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_2->addWidget(tableQueue);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnAdd = new QPushButton(layoutWidget);
        btnAdd->setObjectName("btnAdd");

        horizontalLayout->addWidget(btnAdd);

        btnEdit = new QPushButton(layoutWidget);
        btnEdit->setObjectName("btnEdit");

        horizontalLayout->addWidget(btnEdit);

        btnRemove = new QPushButton(layoutWidget);
        btnRemove->setObjectName("btnRemove");

        horizontalLayout->addWidget(btnRemove);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        groupPlayerControl = new QGroupBox(layoutWidget);
        groupPlayerControl->setObjectName("groupPlayerControl");

        verticalLayout_2->addWidget(groupPlayerControl);

        splitter->addWidget(layoutWidget);
        groupSearch = new QGroupBox(splitter);
        groupSearch->setObjectName("groupSearch");
        verticalLayout = new QVBoxLayout(groupSearch);
        verticalLayout->setObjectName("verticalLayout");
        tableSearch = new QTableView(groupSearch);
        tableSearch->setObjectName("tableSearch");
        tableSearch->setDragEnabled(true);
        tableSearch->setDragDropOverwriteMode(false);
        tableSearch->setDragDropMode(QAbstractItemView::DragOnly);
        tableSearch->setAlternatingRowColors(true);
        tableSearch->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tableSearch->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableSearch->setShowGrid(false);
        tableSearch->setSortingEnabled(true);
        tableSearch->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(tableSearch);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        leSearch = new QLineEdit(groupSearch);
        leSearch->setObjectName("leSearch");
        leSearch->setClearButtonEnabled(false);

        horizontalLayout_3->addWidget(leSearch);

        btnFind = new QPushButton(groupSearch);
        btnFind->setObjectName("btnFind");

        horizontalLayout_3->addWidget(btnFind);


        verticalLayout->addLayout(horizontalLayout_3);

        splitter->addWidget(groupSearch);

        verticalLayout_3->addWidget(splitter);

        QWidget::setTabOrder(leSearch, btnFind);
        QWidget::setTabOrder(btnFind, leFilterSingers);
        QWidget::setTabOrder(leFilterSingers, btnEdit);
        QWidget::setTabOrder(btnEdit, btnRemove);

        retranslateUi(QueueKaraokeWidget);

        QMetaObject::connectSlotsByName(QueueKaraokeWidget);
    } // setupUi

    void retranslateUi(QWidget *QueueKaraokeWidget)
    {
        QueueKaraokeWidget->setWindowTitle(QCoreApplication::translate("QueueKaraokeWidget", "Karaoke Queue", nullptr));
        leFilterSingers->setPlaceholderText(QCoreApplication::translate("QueueKaraokeWidget", "Start typing to locate the queue entry below...", nullptr));
        btnAdd->setText(QCoreApplication::translate("QueueKaraokeWidget", "Add", nullptr));
        btnEdit->setText(QCoreApplication::translate("QueueKaraokeWidget", "Edit", nullptr));
        btnRemove->setText(QCoreApplication::translate("QueueKaraokeWidget", "Remove", nullptr));
        groupPlayerControl->setTitle(QString());
        groupSearch->setTitle(QCoreApplication::translate("QueueKaraokeWidget", "Search for the song", nullptr));
        leSearch->setPlaceholderText(QCoreApplication::translate("QueueKaraokeWidget", "Search for artist name or song title...", nullptr));
        btnFind->setText(QCoreApplication::translate("QueueKaraokeWidget", "Find", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QueueKaraokeWidget: public Ui_QueueKaraokeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUEUEKARAOKEWIDGET_H
