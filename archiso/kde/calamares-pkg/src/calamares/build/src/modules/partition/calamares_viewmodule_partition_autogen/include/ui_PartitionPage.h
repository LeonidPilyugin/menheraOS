/********************************************************************************
** Form generated from reading UI file 'PartitionPage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARTITIONPAGE_H
#define UI_PARTITIONPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <gui/PartitionBarsView.h>
#include <gui/PartitionLabelsView.h>

QT_BEGIN_NAMESPACE

class Ui_PartitionPage
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *deviceComboBox;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *revertButton;
    PartitionBarsView *partitionBarsView;
    PartitionLabelsView *partitionLabelsView;
    QTreeView *partitionTreeView;
    QHBoxLayout *horizontalLayout;
    QPushButton *newPartitionTableButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *createButton;
    QPushButton *editButton;
    QPushButton *deleteButton;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *newVolumeGroupButton;
    QPushButton *resizeVolumeGroupButton;
    QPushButton *deactivateVolumeGroupButton;
    QPushButton *removeVolumeGroupButton;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *bootLoaderComboBox;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *PartitionPage)
    {
        if (PartitionPage->objectName().isEmpty())
            PartitionPage->setObjectName(QString::fromUtf8("PartitionPage"));
        PartitionPage->resize(684, 304);
        verticalLayout = new QVBoxLayout(PartitionPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(PartitionPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        deviceComboBox = new QComboBox(PartitionPage);
        deviceComboBox->setObjectName(QString::fromUtf8("deviceComboBox"));

        horizontalLayout_2->addWidget(deviceComboBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        revertButton = new QPushButton(PartitionPage);
        revertButton->setObjectName(QString::fromUtf8("revertButton"));
        revertButton->setEnabled(false);

        horizontalLayout_2->addWidget(revertButton);


        verticalLayout->addLayout(horizontalLayout_2);

        partitionBarsView = new PartitionBarsView(PartitionPage);
        partitionBarsView->setObjectName(QString::fromUtf8("partitionBarsView"));

        verticalLayout->addWidget(partitionBarsView);

        partitionLabelsView = new PartitionLabelsView(PartitionPage);
        partitionLabelsView->setObjectName(QString::fromUtf8("partitionLabelsView"));

        verticalLayout->addWidget(partitionLabelsView);

        partitionTreeView = new QTreeView(PartitionPage);
        partitionTreeView->setObjectName(QString::fromUtf8("partitionTreeView"));
        partitionTreeView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        partitionTreeView->setRootIsDecorated(false);
        partitionTreeView->setAllColumnsShowFocus(true);
        partitionTreeView->setExpandsOnDoubleClick(false);
        partitionTreeView->header()->setStretchLastSection(false);

        verticalLayout->addWidget(partitionTreeView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        newPartitionTableButton = new QPushButton(PartitionPage);
        newPartitionTableButton->setObjectName(QString::fromUtf8("newPartitionTableButton"));

        horizontalLayout->addWidget(newPartitionTableButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        createButton = new QPushButton(PartitionPage);
        createButton->setObjectName(QString::fromUtf8("createButton"));

        horizontalLayout->addWidget(createButton);

        editButton = new QPushButton(PartitionPage);
        editButton->setObjectName(QString::fromUtf8("editButton"));

        horizontalLayout->addWidget(editButton);

        deleteButton = new QPushButton(PartitionPage);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        horizontalLayout->addWidget(deleteButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        newVolumeGroupButton = new QPushButton(PartitionPage);
        newVolumeGroupButton->setObjectName(QString::fromUtf8("newVolumeGroupButton"));

        horizontalLayout_4->addWidget(newVolumeGroupButton);

        resizeVolumeGroupButton = new QPushButton(PartitionPage);
        resizeVolumeGroupButton->setObjectName(QString::fromUtf8("resizeVolumeGroupButton"));

        horizontalLayout_4->addWidget(resizeVolumeGroupButton);

        deactivateVolumeGroupButton = new QPushButton(PartitionPage);
        deactivateVolumeGroupButton->setObjectName(QString::fromUtf8("deactivateVolumeGroupButton"));

        horizontalLayout_4->addWidget(deactivateVolumeGroupButton);

        removeVolumeGroupButton = new QPushButton(PartitionPage);
        removeVolumeGroupButton->setObjectName(QString::fromUtf8("removeVolumeGroupButton"));

        horizontalLayout_4->addWidget(removeVolumeGroupButton);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 24, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(PartitionPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        bootLoaderComboBox = new QComboBox(PartitionPage);
        bootLoaderComboBox->setObjectName(QString::fromUtf8("bootLoaderComboBox"));
        bootLoaderComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_3->addWidget(bootLoaderComboBox);

        horizontalSpacer_3 = new QSpacerItem(40, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_3);

#if QT_CONFIG(shortcut)
        label_2->setBuddy(deviceComboBox);
        label_3->setBuddy(bootLoaderComboBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(deviceComboBox, revertButton);
        QWidget::setTabOrder(revertButton, partitionTreeView);
        QWidget::setTabOrder(partitionTreeView, newPartitionTableButton);
        QWidget::setTabOrder(newPartitionTableButton, createButton);
        QWidget::setTabOrder(createButton, editButton);
        QWidget::setTabOrder(editButton, deleteButton);
        QWidget::setTabOrder(deleteButton, bootLoaderComboBox);

        retranslateUi(PartitionPage);

        QMetaObject::connectSlotsByName(PartitionPage);
    } // setupUi

    void retranslateUi(QWidget *PartitionPage)
    {
        PartitionPage->setWindowTitle(QCoreApplication::translate("PartitionPage", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("PartitionPage", "Storage de&vice:", nullptr));
        revertButton->setText(QCoreApplication::translate("PartitionPage", "&Revert All Changes", nullptr));
        newPartitionTableButton->setText(QCoreApplication::translate("PartitionPage", "New Partition &Table", nullptr));
        createButton->setText(QCoreApplication::translate("PartitionPage", "Cre&ate", nullptr));
        editButton->setText(QCoreApplication::translate("PartitionPage", "&Edit", nullptr));
        deleteButton->setText(QCoreApplication::translate("PartitionPage", "&Delete", nullptr));
        newVolumeGroupButton->setText(QCoreApplication::translate("PartitionPage", "New Volume Group", nullptr));
        resizeVolumeGroupButton->setText(QCoreApplication::translate("PartitionPage", "Resize Volume Group", nullptr));
        deactivateVolumeGroupButton->setText(QCoreApplication::translate("PartitionPage", "Deactivate Volume Group", nullptr));
        removeVolumeGroupButton->setText(QCoreApplication::translate("PartitionPage", "Remove Volume Group", nullptr));
        label_3->setText(QCoreApplication::translate("PartitionPage", "I&nstall boot loader on:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PartitionPage: public Ui_PartitionPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARTITIONPAGE_H
