/********************************************************************************
** Form generated from reading UI file 'page_netinst.ui'
**
** Created by: Qt User Interface Compiler version 5.15.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE_NETINST_H
#define UI_PAGE_NETINST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "groupstreeview.h"

QT_BEGIN_NAMESPACE

class Ui_Page_NetInst
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QScrollArea *scrollArea;
    GroupsTreeView *groupswidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *netinst_status;

    void setupUi(QWidget *Page_NetInst)
    {
        if (Page_NetInst->objectName().isEmpty())
            Page_NetInst->setObjectName(QString::fromUtf8("Page_NetInst"));
        Page_NetInst->resize(997, 474);
        verticalLayout_2 = new QVBoxLayout(Page_NetInst);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(Page_NetInst);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        scrollArea = new QScrollArea(Page_NetInst);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setMaximumSize(QSize(16777215, 16777215));
        scrollArea->setWidgetResizable(true);
        groupswidget = new GroupsTreeView();
        groupswidget->setObjectName(QString::fromUtf8("groupswidget"));
        groupswidget->setGeometry(QRect(0, 0, 981, 410));
        QFont font;
        font.setPointSize(11);
        groupswidget->setFont(font);
        verticalLayout_3 = new QVBoxLayout(groupswidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        scrollArea->setWidget(groupswidget);

        verticalLayout_2->addWidget(scrollArea);

        netinst_status = new QLabel(Page_NetInst);
        netinst_status->setObjectName(QString::fromUtf8("netinst_status"));

        verticalLayout_2->addWidget(netinst_status);


        retranslateUi(Page_NetInst);

        QMetaObject::connectSlotsByName(Page_NetInst);
    } // setupUi

    void retranslateUi(QWidget *Page_NetInst)
    {
        Page_NetInst->setWindowTitle(QString());
        netinst_status->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Page_NetInst: public Ui_Page_NetInst {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_NETINST_H
