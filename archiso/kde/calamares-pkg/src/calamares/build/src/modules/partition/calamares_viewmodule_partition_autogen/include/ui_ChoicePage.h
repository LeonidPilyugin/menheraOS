/********************************************************************************
** Form generated from reading UI file 'ChoicePage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOICEPAGE_H
#define UI_CHOICEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "gui/EncryptWidget.h"

QT_BEGIN_NAMESPACE

class Ui_ChoicePage
{
public:
    QVBoxLayout *m_mainLayout;
    QHBoxLayout *m_drivesLayout;
    QLabel *m_drivesLabel;
    QVBoxLayout *m_rightLayout;
    QLabel *m_messageLabel;
    QScrollArea *m_itemsScrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *m_itemsLayout;
    QFrame *hLine;
    EncryptWidget *m_encryptWidget;
    QCheckBox *m_reuseHomeCheckBox;
    QLabel *m_selectLabel;
    QGridLayout *beforeAfterGridLayout;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *m_previewAfterLabel;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *m_previewBeforeLabel;
    QWidget *m_previewBeforeFrame;
    QWidget *m_previewAfterFrame;

    void setupUi(QWidget *ChoicePage)
    {
        if (ChoicePage->objectName().isEmpty())
            ChoicePage->setObjectName(QString::fromUtf8("ChoicePage"));
        ChoicePage->resize(743, 512);
        m_mainLayout = new QVBoxLayout(ChoicePage);
        m_mainLayout->setObjectName(QString::fromUtf8("m_mainLayout"));
        m_mainLayout->setContentsMargins(-1, -1, -1, 0);
        m_drivesLayout = new QHBoxLayout();
        m_drivesLayout->setObjectName(QString::fromUtf8("m_drivesLayout"));
        m_drivesLabel = new QLabel(ChoicePage);
        m_drivesLabel->setObjectName(QString::fromUtf8("m_drivesLabel"));
#if QT_CONFIG(tooltip)
        m_drivesLabel->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
        m_drivesLabel->setText(QString::fromUtf8("<m_drivesLabel>"));

        m_drivesLayout->addWidget(m_drivesLabel);


        m_mainLayout->addLayout(m_drivesLayout);

        m_rightLayout = new QVBoxLayout();
        m_rightLayout->setObjectName(QString::fromUtf8("m_rightLayout"));
        m_messageLabel = new QLabel(ChoicePage);
        m_messageLabel->setObjectName(QString::fromUtf8("m_messageLabel"));
#if QT_CONFIG(tooltip)
        m_messageLabel->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
        m_messageLabel->setText(QString::fromUtf8("<m_messageLabel>"));

        m_rightLayout->addWidget(m_messageLabel);

        m_itemsScrollArea = new QScrollArea(ChoicePage);
        m_itemsScrollArea->setObjectName(QString::fromUtf8("m_itemsScrollArea"));
        m_itemsScrollArea->setFrameShape(QFrame::NoFrame);
        m_itemsScrollArea->setFrameShadow(QFrame::Plain);
        m_itemsScrollArea->setLineWidth(0);
        m_itemsScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 729, 233));
        m_itemsLayout = new QVBoxLayout(scrollAreaWidgetContents);
        m_itemsLayout->setObjectName(QString::fromUtf8("m_itemsLayout"));
        m_itemsLayout->setContentsMargins(0, 0, 0, 0);
        m_itemsScrollArea->setWidget(scrollAreaWidgetContents);

        m_rightLayout->addWidget(m_itemsScrollArea);

        hLine = new QFrame(ChoicePage);
        hLine->setObjectName(QString::fromUtf8("hLine"));
        hLine->setFrameShape(QFrame::HLine);
        hLine->setFrameShadow(QFrame::Raised);

        m_rightLayout->addWidget(hLine);

        m_encryptWidget = new EncryptWidget(ChoicePage);
        m_encryptWidget->setObjectName(QString::fromUtf8("m_encryptWidget"));

        m_rightLayout->addWidget(m_encryptWidget);

        m_reuseHomeCheckBox = new QCheckBox(ChoicePage);
        m_reuseHomeCheckBox->setObjectName(QString::fromUtf8("m_reuseHomeCheckBox"));
        m_reuseHomeCheckBox->setText(QString::fromUtf8("<m_reuseHomeCheckBox>"));

        m_rightLayout->addWidget(m_reuseHomeCheckBox);

        m_selectLabel = new QLabel(ChoicePage);
        m_selectLabel->setObjectName(QString::fromUtf8("m_selectLabel"));
        m_selectLabel->setText(QString::fromUtf8(""));

        m_rightLayout->addWidget(m_selectLabel);

        beforeAfterGridLayout = new QGridLayout();
        beforeAfterGridLayout->setObjectName(QString::fromUtf8("beforeAfterGridLayout"));
        beforeAfterGridLayout->setVerticalSpacing(0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        m_previewAfterLabel = new QLabel(ChoicePage);
        m_previewAfterLabel->setObjectName(QString::fromUtf8("m_previewAfterLabel"));
        m_previewAfterLabel->setText(QString::fromUtf8("After:"));
        m_previewAfterLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_2->addWidget(m_previewAfterLabel);


        beforeAfterGridLayout->addLayout(verticalLayout_2, 2, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        m_previewBeforeLabel = new QLabel(ChoicePage);
        m_previewBeforeLabel->setObjectName(QString::fromUtf8("m_previewBeforeLabel"));
        m_previewBeforeLabel->setText(QString::fromUtf8("Before:"));
        m_previewBeforeLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout->addWidget(m_previewBeforeLabel);


        beforeAfterGridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        m_previewBeforeFrame = new QWidget(ChoicePage);
        m_previewBeforeFrame->setObjectName(QString::fromUtf8("m_previewBeforeFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_previewBeforeFrame->sizePolicy().hasHeightForWidth());
        m_previewBeforeFrame->setSizePolicy(sizePolicy);

        beforeAfterGridLayout->addWidget(m_previewBeforeFrame, 0, 1, 1, 1);

        m_previewAfterFrame = new QWidget(ChoicePage);
        m_previewAfterFrame->setObjectName(QString::fromUtf8("m_previewAfterFrame"));
        sizePolicy.setHeightForWidth(m_previewAfterFrame->sizePolicy().hasHeightForWidth());
        m_previewAfterFrame->setSizePolicy(sizePolicy);

        beforeAfterGridLayout->addWidget(m_previewAfterFrame, 2, 1, 1, 1);


        m_rightLayout->addLayout(beforeAfterGridLayout);

        m_rightLayout->setStretch(1, 1);

        m_mainLayout->addLayout(m_rightLayout);

        m_mainLayout->setStretch(1, 1);

        retranslateUi(ChoicePage);

        QMetaObject::connectSlotsByName(ChoicePage);
    } // setupUi

    void retranslateUi(QWidget *ChoicePage)
    {
        ChoicePage->setWindowTitle(QCoreApplication::translate("ChoicePage", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChoicePage: public Ui_ChoicePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOICEPAGE_H
