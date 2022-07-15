/********************************************************************************
** Form generated from reading UI file 'page_package.ui'
**
** Created by: Qt User Interface Compiler version 5.15.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE_PACKAGE_H
#define UI_PAGE_PACKAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/FixedAspectRatioLabel.h"

QT_BEGIN_NAMESPACE

class Ui_PackageChooserPage
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QListView *products;
    QVBoxLayout *verticalLayout;
    QLabel *productName;
    FixedAspectRatioLabel *productScreenshot;
    QLabel *productDescription;

    void setupUi(QWidget *PackageChooserPage)
    {
        if (PackageChooserPage->objectName().isEmpty())
            PackageChooserPage->setObjectName(QString::fromUtf8("PackageChooserPage"));
        PackageChooserPage->resize(400, 500);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(PackageChooserPage->sizePolicy().hasHeightForWidth());
        PackageChooserPage->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(PackageChooserPage);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        products = new QListView(PackageChooserPage);
        products->setObjectName(QString::fromUtf8("products"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(products->sizePolicy().hasHeightForWidth());
        products->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(products);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        productName = new QLabel(PackageChooserPage);
        productName->setObjectName(QString::fromUtf8("productName"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(productName->sizePolicy().hasHeightForWidth());
        productName->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(productName);

        productScreenshot = new FixedAspectRatioLabel(PackageChooserPage);
        productScreenshot->setObjectName(QString::fromUtf8("productScreenshot"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(productScreenshot->sizePolicy().hasHeightForWidth());
        productScreenshot->setSizePolicy(sizePolicy3);
        productScreenshot->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(productScreenshot);

        productDescription = new QLabel(PackageChooserPage);
        productDescription->setObjectName(QString::fromUtf8("productDescription"));
        sizePolicy2.setHeightForWidth(productDescription->sizePolicy().hasHeightForWidth());
        productDescription->setSizePolicy(sizePolicy2);
        productDescription->setWordWrap(true);
        productDescription->setOpenExternalLinks(true);

        verticalLayout->addWidget(productDescription);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 30);
        verticalLayout->setStretch(2, 1);

        horizontalLayout->addLayout(verticalLayout);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 4);

        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(PackageChooserPage);

        QMetaObject::connectSlotsByName(PackageChooserPage);
    } // setupUi

    void retranslateUi(QWidget *PackageChooserPage)
    {
        PackageChooserPage->setWindowTitle(QCoreApplication::translate("PackageChooserPage", "Form", nullptr));
        productName->setText(QCoreApplication::translate("PackageChooserPage", "Product Name", nullptr));
        productScreenshot->setText(QCoreApplication::translate("PackageChooserPage", "TextLabel", nullptr));
        productDescription->setText(QCoreApplication::translate("PackageChooserPage", "Long Product Description", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PackageChooserPage: public Ui_PackageChooserPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_PACKAGE_H
