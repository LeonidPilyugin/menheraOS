/********************************************************************************
** Form generated from reading UI file 'EditExistingPartitionDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITEXISTINGPARTITIONDIALOG_H
#define UI_EDITEXISTINGPARTITIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
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

class Ui_EditExistingPartitionDialog
{
public:
    QVBoxLayout *verticalLayout;
    PartResizerWidget *partResizerWidget;
    QFormLayout *formLayout;
    QLabel *label_3;
    QRadioButton *keepRadioButton;
    QRadioButton *formatRadioButton;
    QLabel *label_2;
    QLabel *mountPointLabel;
    QComboBox *mountPointComboBox;
    QLabel *label;
    QSpinBox *sizeSpinBox;
    QLabel *fileSystemLabel;
    QComboBox *fileSystemComboBox;
    QLabel *label_4;
    QListWidget *m_listFlags;
    QLineEdit *fileSystemLabelEdit;
    QLabel *fileSystemLabelLabel;
    QLabel *mountPointExplanation;
    EncryptWidget *encryptWidget;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditExistingPartitionDialog)
    {
        if (EditExistingPartitionDialog->objectName().isEmpty())
            EditExistingPartitionDialog->setObjectName(QString::fromUtf8("EditExistingPartitionDialog"));
        EditExistingPartitionDialog->resize(570, 689);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(EditExistingPartitionDialog->sizePolicy().hasHeightForWidth());
        EditExistingPartitionDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(EditExistingPartitionDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        partResizerWidget = new PartResizerWidget(EditExistingPartitionDialog);
        partResizerWidget->setObjectName(QString::fromUtf8("partResizerWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(partResizerWidget->sizePolicy().hasHeightForWidth());
        partResizerWidget->setSizePolicy(sizePolicy1);
        partResizerWidget->setMinimumSize(QSize(0, 59));

        verticalLayout->addWidget(partResizerWidget);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        label_3 = new QLabel(EditExistingPartitionDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        keepRadioButton = new QRadioButton(EditExistingPartitionDialog);
        keepRadioButton->setObjectName(QString::fromUtf8("keepRadioButton"));
        keepRadioButton->setChecked(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, keepRadioButton);

        formatRadioButton = new QRadioButton(EditExistingPartitionDialog);
        formatRadioButton->setObjectName(QString::fromUtf8("formatRadioButton"));

        formLayout->setWidget(3, QFormLayout::FieldRole, formatRadioButton);

        label_2 = new QLabel(EditExistingPartitionDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMinimumSize(QSize(300, 0));
        label_2->setWordWrap(true);

        formLayout->setWidget(4, QFormLayout::FieldRole, label_2);

        mountPointLabel = new QLabel(EditExistingPartitionDialog);
        mountPointLabel->setObjectName(QString::fromUtf8("mountPointLabel"));

        formLayout->setWidget(8, QFormLayout::LabelRole, mountPointLabel);

        mountPointComboBox = new QComboBox(EditExistingPartitionDialog);
        mountPointComboBox->setObjectName(QString::fromUtf8("mountPointComboBox"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mountPointComboBox->sizePolicy().hasHeightForWidth());
        mountPointComboBox->setSizePolicy(sizePolicy2);
        mountPointComboBox->setEditable(true);

        formLayout->setWidget(8, QFormLayout::FieldRole, mountPointComboBox);

        label = new QLabel(EditExistingPartitionDialog);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        sizeSpinBox = new QSpinBox(EditExistingPartitionDialog);
        sizeSpinBox->setObjectName(QString::fromUtf8("sizeSpinBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, sizeSpinBox);

        fileSystemLabel = new QLabel(EditExistingPartitionDialog);
        fileSystemLabel->setObjectName(QString::fromUtf8("fileSystemLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, fileSystemLabel);

        fileSystemComboBox = new QComboBox(EditExistingPartitionDialog);
        fileSystemComboBox->setObjectName(QString::fromUtf8("fileSystemComboBox"));

        formLayout->setWidget(5, QFormLayout::FieldRole, fileSystemComboBox);

        label_4 = new QLabel(EditExistingPartitionDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(15, QFormLayout::LabelRole, label_4);

        m_listFlags = new QListWidget(EditExistingPartitionDialog);
        m_listFlags->setObjectName(QString::fromUtf8("m_listFlags"));
        m_listFlags->setAlternatingRowColors(true);
        m_listFlags->setSelectionMode(QAbstractItemView::NoSelection);
        m_listFlags->setSortingEnabled(true);

        formLayout->setWidget(15, QFormLayout::FieldRole, m_listFlags);

        fileSystemLabelEdit = new QLineEdit(EditExistingPartitionDialog);
        fileSystemLabelEdit->setObjectName(QString::fromUtf8("fileSystemLabelEdit"));
        fileSystemLabelEdit->setMaxLength(16);

        formLayout->setWidget(13, QFormLayout::FieldRole, fileSystemLabelEdit);

        fileSystemLabelLabel = new QLabel(EditExistingPartitionDialog);
        fileSystemLabelLabel->setObjectName(QString::fromUtf8("fileSystemLabelLabel"));

        formLayout->setWidget(13, QFormLayout::LabelRole, fileSystemLabelLabel);

        mountPointExplanation = new QLabel(EditExistingPartitionDialog);
        mountPointExplanation->setObjectName(QString::fromUtf8("mountPointExplanation"));

        formLayout->setWidget(10, QFormLayout::FieldRole, mountPointExplanation);

        encryptWidget = new EncryptWidget(EditExistingPartitionDialog);
        encryptWidget->setObjectName(QString::fromUtf8("encryptWidget"));

        formLayout->setWidget(11, QFormLayout::FieldRole, encryptWidget);

        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        formLayout->setItem(12, QFormLayout::FieldRole, verticalSpacer);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(EditExistingPartitionDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        label_3->setBuddy(keepRadioButton);
        mountPointLabel->setBuddy(mountPointComboBox);
        label->setBuddy(sizeSpinBox);
        fileSystemLabel->setBuddy(fileSystemComboBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(sizeSpinBox, keepRadioButton);
        QWidget::setTabOrder(keepRadioButton, formatRadioButton);
        QWidget::setTabOrder(formatRadioButton, mountPointComboBox);
        QWidget::setTabOrder(mountPointComboBox, buttonBox);

        retranslateUi(EditExistingPartitionDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditExistingPartitionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditExistingPartitionDialog, SLOT(reject()));

        mountPointComboBox->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(EditExistingPartitionDialog);
    } // setupUi

    void retranslateUi(QDialog *EditExistingPartitionDialog)
    {
        EditExistingPartitionDialog->setWindowTitle(QCoreApplication::translate("EditExistingPartitionDialog", "Edit Existing Partition", nullptr));
        label_3->setText(QCoreApplication::translate("EditExistingPartitionDialog", "Con&tent:", nullptr));
        keepRadioButton->setText(QCoreApplication::translate("EditExistingPartitionDialog", "&Keep", nullptr));
        formatRadioButton->setText(QCoreApplication::translate("EditExistingPartitionDialog", "Format", nullptr));
        label_2->setText(QCoreApplication::translate("EditExistingPartitionDialog", "Warning: Formatting the partition will erase all existing data.", nullptr));
        mountPointLabel->setText(QCoreApplication::translate("EditExistingPartitionDialog", "&Mount Point:", nullptr));
        label->setText(QCoreApplication::translate("EditExistingPartitionDialog", "Si&ze:", nullptr));
        sizeSpinBox->setSuffix(QCoreApplication::translate("EditExistingPartitionDialog", " MiB", nullptr));
        fileSystemLabel->setText(QCoreApplication::translate("EditExistingPartitionDialog", "Fi&le System:", nullptr));
        label_4->setText(QCoreApplication::translate("EditExistingPartitionDialog", "Flags:", nullptr));
#if QT_CONFIG(tooltip)
        fileSystemLabelEdit->setToolTip(QCoreApplication::translate("EditExistingPartitionDialog", "Label for the filesystem", nullptr));
#endif // QT_CONFIG(tooltip)
        fileSystemLabelLabel->setText(QCoreApplication::translate("EditExistingPartitionDialog", "FS Label:", nullptr));
        mountPointExplanation->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class EditExistingPartitionDialog: public Ui_EditExistingPartitionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITEXISTINGPARTITIONDIALOG_H
