/********************************************************************************
** Form generated from reading UI file 'LicensePage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LICENSEPAGE_H
#define UI_LICENSEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LicensePage
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QLabel *mainText;
    QSpacerItem *verticalSpacer;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *licenseEntriesLayout;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QFrame *acceptFrame;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *acceptCheckBox;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *LicensePage)
    {
        if (LicensePage->objectName().isEmpty())
            LicensePage->setObjectName(QString::fromUtf8("LicensePage"));
        LicensePage->resize(799, 400);
        horizontalLayout = new QHBoxLayout(LicensePage);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        titleLabel = new QLabel(LicensePage);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        titleLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(titleLabel);

        mainText = new QLabel(LicensePage);
        mainText->setObjectName(QString::fromUtf8("mainText"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mainText->sizePolicy().hasHeightForWidth());
        mainText->setSizePolicy(sizePolicy);
#if QT_CONFIG(tooltip)
        mainText->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
        mainText->setText(QString::fromUtf8("<Calamares license text>"));
        mainText->setAlignment(Qt::AlignCenter);
        mainText->setWordWrap(true);

        verticalLayout->addWidget(mainText);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        scrollArea = new QScrollArea(LicensePage);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy1);
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 765, 89));
        licenseEntriesLayout = new QVBoxLayout(scrollAreaWidgetContents);
        licenseEntriesLayout->setObjectName(QString::fromUtf8("licenseEntriesLayout"));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        acceptFrame = new QFrame(LicensePage);
        acceptFrame->setObjectName(QString::fromUtf8("acceptFrame"));
        horizontalLayout_2 = new QHBoxLayout(acceptFrame);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        acceptCheckBox = new QCheckBox(acceptFrame);
        acceptCheckBox->setObjectName(QString::fromUtf8("acceptCheckBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(acceptCheckBox->sizePolicy().hasHeightForWidth());
        acceptCheckBox->setSizePolicy(sizePolicy2);
        acceptCheckBox->setText(QString::fromUtf8("CheckBox"));

        horizontalLayout_2->addWidget(acceptCheckBox);


        horizontalLayout_3->addWidget(acceptFrame);

        horizontalSpacer_2 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(LicensePage);

        QMetaObject::connectSlotsByName(LicensePage);
    } // setupUi

    void retranslateUi(QWidget *LicensePage)
    {
        LicensePage->setWindowTitle(QCoreApplication::translate("LicensePage", "Form", nullptr));
        titleLabel->setText(QCoreApplication::translate("LicensePage", "<h1>License Agreement</h1>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LicensePage: public Ui_LicensePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LICENSEPAGE_H
