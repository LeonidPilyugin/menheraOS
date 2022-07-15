/********************************************************************************
** Form generated from reading UI file 'FinishedPage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINISHEDPAGE_H
#define UI_FINISHEDPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FinishedPage
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer;
    QLabel *mainText;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCheckBox *restartCheckBox;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *FinishedPage)
    {
        if (FinishedPage->objectName().isEmpty())
            FinishedPage->setObjectName(QString::fromUtf8("FinishedPage"));
        FinishedPage->resize(593, 400);
        verticalLayout = new QVBoxLayout(FinishedPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        verticalSpacer = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        mainText = new QLabel(FinishedPage);
        mainText->setObjectName(QString::fromUtf8("mainText"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(3);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mainText->sizePolicy().hasHeightForWidth());
        mainText->setSizePolicy(sizePolicy);
        mainText->setText(QString::fromUtf8("<Calamares finished text>"));

        verticalLayout->addWidget(mainText);

        verticalSpacer_2 = new QSpacerItem(20, 49, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        restartCheckBox = new QCheckBox(FinishedPage);
        restartCheckBox->setObjectName(QString::fromUtf8("restartCheckBox"));
#if QT_CONFIG(tooltip)
        restartCheckBox->setToolTip(QString::fromUtf8("<Restart checkbox tooltip>"));
#endif // QT_CONFIG(tooltip)
        restartCheckBox->setChecked(false);

        horizontalLayout->addWidget(restartCheckBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addLayout(verticalLayout_2);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);


        retranslateUi(FinishedPage);

        QMetaObject::connectSlotsByName(FinishedPage);
    } // setupUi

    void retranslateUi(QWidget *FinishedPage)
    {
        FinishedPage->setWindowTitle(QCoreApplication::translate("FinishedPage", "Form", nullptr));
        restartCheckBox->setText(QCoreApplication::translate("FinishedPage", "&Restart now", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FinishedPage: public Ui_FinishedPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINISHEDPAGE_H
