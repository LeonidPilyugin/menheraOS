/********************************************************************************
** Form generated from reading UI file 'ReplaceWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPLACEWIDGET_H
#define UI_REPLACEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReplaceWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QTreeView *partitionTreeView;
    QVBoxLayout *verticalLayout_2;
    QLabel *selectedIconLabel;
    QLabel *selectedStatusLabel;
    QHBoxLayout *horizontalLayout_3;
    QLabel *bootStatusLabel;
    QComboBox *bootComboBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ReplaceWidget)
    {
        if (ReplaceWidget->objectName().isEmpty())
            ReplaceWidget->setObjectName(QString::fromUtf8("ReplaceWidget"));
        ReplaceWidget->resize(643, 187);
        verticalLayout = new QVBoxLayout(ReplaceWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        partitionTreeView = new QTreeView(ReplaceWidget);
        partitionTreeView->setObjectName(QString::fromUtf8("partitionTreeView"));
        partitionTreeView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        partitionTreeView->setRootIsDecorated(false);
        partitionTreeView->setAllColumnsShowFocus(true);
        partitionTreeView->setExpandsOnDoubleClick(false);
        partitionTreeView->header()->setStretchLastSection(false);

        horizontalLayout->addWidget(partitionTreeView);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        selectedIconLabel = new QLabel(ReplaceWidget);
        selectedIconLabel->setObjectName(QString::fromUtf8("selectedIconLabel"));
#if QT_CONFIG(tooltip)
        selectedIconLabel->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
        selectedIconLabel->setText(QString::fromUtf8(""));
        selectedIconLabel->setAlignment(Qt::AlignCenter);
        selectedIconLabel->setWordWrap(true);

        verticalLayout_2->addWidget(selectedIconLabel);

        selectedStatusLabel = new QLabel(ReplaceWidget);
        selectedStatusLabel->setObjectName(QString::fromUtf8("selectedStatusLabel"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(selectedStatusLabel->sizePolicy().hasHeightForWidth());
        selectedStatusLabel->setSizePolicy(sizePolicy);
#if QT_CONFIG(tooltip)
        selectedStatusLabel->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
        selectedStatusLabel->setText(QString::fromUtf8(""));
        selectedStatusLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        selectedStatusLabel->setWordWrap(true);

        verticalLayout_2->addWidget(selectedStatusLabel);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        bootStatusLabel = new QLabel(ReplaceWidget);
        bootStatusLabel->setObjectName(QString::fromUtf8("bootStatusLabel"));
#if QT_CONFIG(tooltip)
        bootStatusLabel->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
        bootStatusLabel->setText(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(bootStatusLabel);

        bootComboBox = new QComboBox(ReplaceWidget);
        bootComboBox->setObjectName(QString::fromUtf8("bootComboBox"));

        horizontalLayout_3->addWidget(bootComboBox);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ReplaceWidget);

        QMetaObject::connectSlotsByName(ReplaceWidget);
    } // setupUi

    void retranslateUi(QWidget *ReplaceWidget)
    {
        ReplaceWidget->setWindowTitle(QCoreApplication::translate("ReplaceWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReplaceWidget: public Ui_ReplaceWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPLACEWIDGET_H
