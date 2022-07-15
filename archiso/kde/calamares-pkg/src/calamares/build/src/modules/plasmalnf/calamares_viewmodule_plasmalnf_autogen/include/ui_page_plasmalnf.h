/********************************************************************************
** Form generated from reading UI file 'page_plasmalnf.ui'
**
** Created by: Qt User Interface Compiler version 5.15.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE_PLASMALNF_H
#define UI_PAGE_PLASMALNF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlasmaLnfPage
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *generalExplanation;

    void setupUi(QWidget *PlasmaLnfPage)
    {
        if (PlasmaLnfPage->objectName().isEmpty())
            PlasmaLnfPage->setObjectName(QString::fromUtf8("PlasmaLnfPage"));
        PlasmaLnfPage->resize(799, 400);
        verticalLayout = new QVBoxLayout(PlasmaLnfPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        generalExplanation = new QLabel(PlasmaLnfPage);
        generalExplanation->setObjectName(QString::fromUtf8("generalExplanation"));
        generalExplanation->setText(QString::fromUtf8("Placeholder"));
        generalExplanation->setWordWrap(true);

        verticalLayout->addWidget(generalExplanation);


        retranslateUi(PlasmaLnfPage);

        QMetaObject::connectSlotsByName(PlasmaLnfPage);
    } // setupUi

    void retranslateUi(QWidget *PlasmaLnfPage)
    {
        PlasmaLnfPage->setWindowTitle(QCoreApplication::translate("PlasmaLnfPage", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlasmaLnfPage: public Ui_PlasmaLnfPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_PLASMALNF_H
