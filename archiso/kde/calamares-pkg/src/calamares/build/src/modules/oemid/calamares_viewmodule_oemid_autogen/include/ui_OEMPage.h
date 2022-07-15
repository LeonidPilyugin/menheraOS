/********************************************************************************
** Form generated from reading UI file 'OEMPage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OEMPAGE_H
#define UI_OEMPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OEMPage
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *batchIdentifier_label;
    QLineEdit *batchIdentifier;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *OEMPage)
    {
        if (OEMPage->objectName().isEmpty())
            OEMPage->setObjectName(QString::fromUtf8("OEMPage"));
        OEMPage->resize(592, 300);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OEMPage->sizePolicy().hasHeightForWidth());
        OEMPage->setSizePolicy(sizePolicy);
        OEMPage->setWindowTitle(QString::fromUtf8("OEMPage"));
        verticalLayout = new QVBoxLayout(OEMPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        batchIdentifier_label = new QLabel(OEMPage);
        batchIdentifier_label->setObjectName(QString::fromUtf8("batchIdentifier_label"));

        gridLayout->addWidget(batchIdentifier_label, 3, 0, 1, 1, Qt::AlignRight);

        batchIdentifier = new QLineEdit(OEMPage);
        batchIdentifier->setObjectName(QString::fromUtf8("batchIdentifier"));
#if QT_CONFIG(accessibility)
        batchIdentifier->setAccessibleName(QString::fromUtf8("batch-identifier"));
#endif // QT_CONFIG(accessibility)

        gridLayout->addWidget(batchIdentifier, 3, 1, 1, 1);

        label = new QLabel(OEMPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setTextFormat(Qt::RichText);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 1, 0, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 9);

        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

#if QT_CONFIG(shortcut)
        batchIdentifier_label->setBuddy(batchIdentifier);
#endif // QT_CONFIG(shortcut)

        retranslateUi(OEMPage);

        QMetaObject::connectSlotsByName(OEMPage);
    } // setupUi

    void retranslateUi(QWidget *OEMPage)
    {
        batchIdentifier_label->setText(QCoreApplication::translate("OEMPage", "Ba&tch:", nullptr));
#if QT_CONFIG(tooltip)
        batchIdentifier->setToolTip(QCoreApplication::translate("OEMPage", "<html><head/><body><p>Enter a batch-identifier here. This will be stored in the target system.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("OEMPage", "<html><head/><body><h1>OEM Configuration</h1><p>Calamares will use OEM settings while configuring the target system.</p></body></html>", nullptr));
        (void)OEMPage;
    } // retranslateUi

};

namespace Ui {
    class OEMPage: public Ui_OEMPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OEMPAGE_H
