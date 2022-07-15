/********************************************************************************
** Form generated from reading UI file 'CreatePartitionDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEPARTITIONDIALOG_H
#define UI_CREATEPARTITIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <kpmcore/gui/partresizerwidget.h>
#include "gui/EncryptWidget.h"

QT_BEGIN_NAMESPACE

class Ui_CreatePartitionDialog
{
public:
    QVBoxLayout *verticalLayout;
    PartResizerWidget *partResizerWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QSpinBox *sizeSpinBox;
    QLabel *partitionTypeLabel;
    QHBoxLayout *horizontalLayout;
    QRadioButton *primaryRadioButton;
    QRadioButton *extendedRadioButton;
    QLabel *fixedPartitionLabel;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_2;
    QComboBox *fsComboBox;
    EncryptWidget *encryptWidget;
    QSpacerItem *verticalSpacer_2;
    QLabel *lvNameLabel;
    QLineEdit *lvNameLineEdit;
    QLabel *mountPointLabel;
    QComboBox *mountPointComboBox;
    QLabel *label_3;
    QListWidget *m_listFlags;
    QSpacerItem *verticalSpacer;
    QLineEdit *filesystemLabelEdit;
    QLabel *label_4;
    QLabel *mountPointExplanation;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CreatePartitionDialog)
    {
        if (CreatePartitionDialog->objectName().isEmpty())
            CreatePartitionDialog->setObjectName(QString::fromUtf8("CreatePartitionDialog"));
        CreatePartitionDialog->resize(763, 689);
        verticalLayout = new QVBoxLayout(CreatePartitionDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        partResizerWidget = new PartResizerWidget(CreatePartitionDialog);
        partResizerWidget->setObjectName(QString::fromUtf8("partResizerWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(partResizerWidget->sizePolicy().hasHeightForWidth());
        partResizerWidget->setSizePolicy(sizePolicy);
        partResizerWidget->setMinimumSize(QSize(0, 59));

        verticalLayout->addWidget(partResizerWidget);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(CreatePartitionDialog);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        sizeSpinBox = new QSpinBox(CreatePartitionDialog);
        sizeSpinBox->setObjectName(QString::fromUtf8("sizeSpinBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, sizeSpinBox);

        partitionTypeLabel = new QLabel(CreatePartitionDialog);
        partitionTypeLabel->setObjectName(QString::fromUtf8("partitionTypeLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, partitionTypeLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        primaryRadioButton = new QRadioButton(CreatePartitionDialog);
        primaryRadioButton->setObjectName(QString::fromUtf8("primaryRadioButton"));
        primaryRadioButton->setChecked(true);

        horizontalLayout->addWidget(primaryRadioButton);

        extendedRadioButton = new QRadioButton(CreatePartitionDialog);
        extendedRadioButton->setObjectName(QString::fromUtf8("extendedRadioButton"));

        horizontalLayout->addWidget(extendedRadioButton);

        fixedPartitionLabel = new QLabel(CreatePartitionDialog);
        fixedPartitionLabel->setObjectName(QString::fromUtf8("fixedPartitionLabel"));
        fixedPartitionLabel->setText(QString::fromUtf8("[fixed-partition-label]"));

        horizontalLayout->addWidget(fixedPartitionLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(2, QFormLayout::FieldRole, verticalSpacer_3);

        label_2 = new QLabel(CreatePartitionDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_2);

        fsComboBox = new QComboBox(CreatePartitionDialog);
        fsComboBox->setObjectName(QString::fromUtf8("fsComboBox"));

        formLayout->setWidget(3, QFormLayout::FieldRole, fsComboBox);

        encryptWidget = new EncryptWidget(CreatePartitionDialog);
        encryptWidget->setObjectName(QString::fromUtf8("encryptWidget"));

        formLayout->setWidget(5, QFormLayout::FieldRole, encryptWidget);

        verticalSpacer_2 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        formLayout->setItem(6, QFormLayout::FieldRole, verticalSpacer_2);

        lvNameLabel = new QLabel(CreatePartitionDialog);
        lvNameLabel->setObjectName(QString::fromUtf8("lvNameLabel"));

        formLayout->setWidget(7, QFormLayout::LabelRole, lvNameLabel);

        lvNameLineEdit = new QLineEdit(CreatePartitionDialog);
        lvNameLineEdit->setObjectName(QString::fromUtf8("lvNameLineEdit"));

        formLayout->setWidget(7, QFormLayout::FieldRole, lvNameLineEdit);

        mountPointLabel = new QLabel(CreatePartitionDialog);
        mountPointLabel->setObjectName(QString::fromUtf8("mountPointLabel"));

        formLayout->setWidget(8, QFormLayout::LabelRole, mountPointLabel);

        mountPointComboBox = new QComboBox(CreatePartitionDialog);
        mountPointComboBox->setObjectName(QString::fromUtf8("mountPointComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mountPointComboBox->sizePolicy().hasHeightForWidth());
        mountPointComboBox->setSizePolicy(sizePolicy1);
        mountPointComboBox->setEditable(true);

        formLayout->setWidget(8, QFormLayout::FieldRole, mountPointComboBox);

        label_3 = new QLabel(CreatePartitionDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(12, QFormLayout::LabelRole, label_3);

        m_listFlags = new QListWidget(CreatePartitionDialog);
        m_listFlags->setObjectName(QString::fromUtf8("m_listFlags"));
        m_listFlags->setAlternatingRowColors(true);
        m_listFlags->setSelectionMode(QAbstractItemView::NoSelection);
        m_listFlags->setSortingEnabled(true);

        formLayout->setWidget(12, QFormLayout::FieldRole, m_listFlags);

        verticalSpacer = new QSpacerItem(17, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(13, QFormLayout::LabelRole, verticalSpacer);

        filesystemLabelEdit = new QLineEdit(CreatePartitionDialog);
        filesystemLabelEdit->setObjectName(QString::fromUtf8("filesystemLabelEdit"));
        filesystemLabelEdit->setMaxLength(16);

        formLayout->setWidget(10, QFormLayout::FieldRole, filesystemLabelEdit);

        label_4 = new QLabel(CreatePartitionDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(10, QFormLayout::LabelRole, label_4);

        mountPointExplanation = new QLabel(CreatePartitionDialog);
        mountPointExplanation->setObjectName(QString::fromUtf8("mountPointExplanation"));

        formLayout->setWidget(9, QFormLayout::FieldRole, mountPointExplanation);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(CreatePartitionDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        label->setBuddy(sizeSpinBox);
        partitionTypeLabel->setBuddy(primaryRadioButton);
        label_2->setBuddy(fsComboBox);
        mountPointLabel->setBuddy(mountPointComboBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(primaryRadioButton, fsComboBox);

        retranslateUi(CreatePartitionDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CreatePartitionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CreatePartitionDialog, SLOT(reject()));
        QObject::connect(extendedRadioButton, SIGNAL(toggled(bool)), fsComboBox, SLOT(setDisabled(bool)));
        QObject::connect(extendedRadioButton, SIGNAL(toggled(bool)), label_2, SLOT(setDisabled(bool)));

        mountPointComboBox->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(CreatePartitionDialog);
    } // setupUi

    void retranslateUi(QDialog *CreatePartitionDialog)
    {
        CreatePartitionDialog->setWindowTitle(QCoreApplication::translate("CreatePartitionDialog", "Create a Partition", nullptr));
        label->setText(QCoreApplication::translate("CreatePartitionDialog", "Si&ze:", nullptr));
        sizeSpinBox->setSuffix(QCoreApplication::translate("CreatePartitionDialog", " MiB", nullptr));
        partitionTypeLabel->setText(QCoreApplication::translate("CreatePartitionDialog", "Partition &Type:", nullptr));
        primaryRadioButton->setText(QCoreApplication::translate("CreatePartitionDialog", "Primar&y", nullptr));
        extendedRadioButton->setText(QCoreApplication::translate("CreatePartitionDialog", "E&xtended", nullptr));
        label_2->setText(QCoreApplication::translate("CreatePartitionDialog", "Fi&le System:", nullptr));
        lvNameLabel->setText(QCoreApplication::translate("CreatePartitionDialog", "LVM LV name", nullptr));
        mountPointLabel->setText(QCoreApplication::translate("CreatePartitionDialog", "&Mount Point:", nullptr));
        label_3->setText(QCoreApplication::translate("CreatePartitionDialog", "Flags:", nullptr));
#if QT_CONFIG(tooltip)
        filesystemLabelEdit->setToolTip(QCoreApplication::translate("CreatePartitionDialog", "Label for the filesystem", nullptr));
#endif // QT_CONFIG(tooltip)
        label_4->setText(QCoreApplication::translate("CreatePartitionDialog", "FS Label:", nullptr));
        mountPointExplanation->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CreatePartitionDialog: public Ui_CreatePartitionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEPARTITIONDIALOG_H
