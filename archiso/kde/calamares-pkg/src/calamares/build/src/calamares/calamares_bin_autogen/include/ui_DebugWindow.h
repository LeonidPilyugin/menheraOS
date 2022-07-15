/********************************************************************************
** Form generated from reading UI file 'DebugWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBUGWINDOW_H
#define UI_DEBUGWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace Calamares {

class Ui_DebugWindow
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *globalStorageTab;
    QVBoxLayout *verticalLayout_2;
    QTreeView *globalStorageView;
    QWidget *jobQueueTab;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *jobQueueText;
    QWidget *modulesTab;
    QHBoxLayout *horizontalLayout;
    QListView *modulesListView;
    QVBoxLayout *modulesVerticalLayout;
    QFormLayout *formLayout;
    QLabel *typeLabel;
    QLabel *moduleTypeLabel;
    QLabel *interfaceLabel;
    QLabel *moduleInterfaceLabel;
    QTreeView *moduleConfigView;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *crashButton;
    QPushButton *reloadStylesheetButton;
    QPushButton *widgetTreeButton;
    QPushButton *sendLogButton;

    void setupUi(QWidget *Calamares__DebugWindow)
    {
        if (Calamares__DebugWindow->objectName().isEmpty())
            Calamares__DebugWindow->setObjectName(QString::fromUtf8("Calamares__DebugWindow"));
        Calamares__DebugWindow->resize(962, 651);
        verticalLayout = new QVBoxLayout(Calamares__DebugWindow);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(Calamares__DebugWindow);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        globalStorageTab = new QWidget();
        globalStorageTab->setObjectName(QString::fromUtf8("globalStorageTab"));
        verticalLayout_2 = new QVBoxLayout(globalStorageTab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        globalStorageView = new QTreeView(globalStorageTab);
        globalStorageView->setObjectName(QString::fromUtf8("globalStorageView"));

        verticalLayout_2->addWidget(globalStorageView);

        tabWidget->addTab(globalStorageTab, QString());
        jobQueueTab = new QWidget();
        jobQueueTab->setObjectName(QString::fromUtf8("jobQueueTab"));
        verticalLayout_3 = new QVBoxLayout(jobQueueTab);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        jobQueueText = new QTextEdit(jobQueueTab);
        jobQueueText->setObjectName(QString::fromUtf8("jobQueueText"));

        verticalLayout_3->addWidget(jobQueueText);

        tabWidget->addTab(jobQueueTab, QString());
        modulesTab = new QWidget();
        modulesTab->setObjectName(QString::fromUtf8("modulesTab"));
        horizontalLayout = new QHBoxLayout(modulesTab);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        modulesListView = new QListView(modulesTab);
        modulesListView->setObjectName(QString::fromUtf8("modulesListView"));

        horizontalLayout->addWidget(modulesListView);

        modulesVerticalLayout = new QVBoxLayout();
        modulesVerticalLayout->setObjectName(QString::fromUtf8("modulesVerticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        typeLabel = new QLabel(modulesTab);
        typeLabel->setObjectName(QString::fromUtf8("typeLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, typeLabel);

        moduleTypeLabel = new QLabel(modulesTab);
        moduleTypeLabel->setObjectName(QString::fromUtf8("moduleTypeLabel"));

        formLayout->setWidget(0, QFormLayout::FieldRole, moduleTypeLabel);

        interfaceLabel = new QLabel(modulesTab);
        interfaceLabel->setObjectName(QString::fromUtf8("interfaceLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, interfaceLabel);

        moduleInterfaceLabel = new QLabel(modulesTab);
        moduleInterfaceLabel->setObjectName(QString::fromUtf8("moduleInterfaceLabel"));

        formLayout->setWidget(1, QFormLayout::FieldRole, moduleInterfaceLabel);


        modulesVerticalLayout->addLayout(formLayout);

        moduleConfigView = new QTreeView(modulesTab);
        moduleConfigView->setObjectName(QString::fromUtf8("moduleConfigView"));

        modulesVerticalLayout->addWidget(moduleConfigView);


        horizontalLayout->addLayout(modulesVerticalLayout);

        tabWidget->addTab(modulesTab, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        crashButton = new QPushButton(Calamares__DebugWindow);
        crashButton->setObjectName(QString::fromUtf8("crashButton"));
        crashButton->setText(QString::fromUtf8("Crash now"));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("data-error")));
        crashButton->setIcon(icon);

        horizontalLayout_2->addWidget(crashButton);

        reloadStylesheetButton = new QPushButton(Calamares__DebugWindow);
        reloadStylesheetButton->setObjectName(QString::fromUtf8("reloadStylesheetButton"));
        QIcon icon1(QIcon::fromTheme(QString::fromUtf8("preferences-web-browser-stylesheets")));
        reloadStylesheetButton->setIcon(icon1);

        horizontalLayout_2->addWidget(reloadStylesheetButton);

        widgetTreeButton = new QPushButton(Calamares__DebugWindow);
        widgetTreeButton->setObjectName(QString::fromUtf8("widgetTreeButton"));
        QIcon icon2(QIcon::fromTheme(QString::fromUtf8("view-list-tree")));
        widgetTreeButton->setIcon(icon2);

        horizontalLayout_2->addWidget(widgetTreeButton);

        sendLogButton = new QPushButton(Calamares__DebugWindow);
        sendLogButton->setObjectName(QString::fromUtf8("sendLogButton"));
        QIcon icon3(QIcon::fromTheme(QString::fromUtf8("upload-media")));
        sendLogButton->setIcon(icon3);

        horizontalLayout_2->addWidget(sendLogButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(Calamares__DebugWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Calamares__DebugWindow);
    } // setupUi

    void retranslateUi(QWidget *Calamares__DebugWindow)
    {
        Calamares__DebugWindow->setWindowTitle(QCoreApplication::translate("Calamares::DebugWindow", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(globalStorageTab), QCoreApplication::translate("Calamares::DebugWindow", "GlobalStorage", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(jobQueueTab), QCoreApplication::translate("Calamares::DebugWindow", "JobQueue", nullptr));
        typeLabel->setText(QCoreApplication::translate("Calamares::DebugWindow", "Type:", nullptr));
        moduleTypeLabel->setText(QCoreApplication::translate("Calamares::DebugWindow", "none", nullptr));
        interfaceLabel->setText(QCoreApplication::translate("Calamares::DebugWindow", "Interface:", nullptr));
        moduleInterfaceLabel->setText(QCoreApplication::translate("Calamares::DebugWindow", "none", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(modulesTab), QCoreApplication::translate("Calamares::DebugWindow", "Modules", nullptr));
#if QT_CONFIG(tooltip)
        crashButton->setToolTip(QCoreApplication::translate("Calamares::DebugWindow", "Crashes Calamares, so that Dr. Konqui can look at it.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        reloadStylesheetButton->setToolTip(QCoreApplication::translate("Calamares::DebugWindow", "Reloads the stylesheet from the branding directory.", nullptr));
#endif // QT_CONFIG(tooltip)
        reloadStylesheetButton->setText(QCoreApplication::translate("Calamares::DebugWindow", "Reload Stylesheet", nullptr));
#if QT_CONFIG(tooltip)
        widgetTreeButton->setToolTip(QCoreApplication::translate("Calamares::DebugWindow", "Displays the tree of widget names in the log (for stylesheet debugging).", nullptr));
#endif // QT_CONFIG(tooltip)
        widgetTreeButton->setText(QCoreApplication::translate("Calamares::DebugWindow", "Widget Tree", nullptr));
#if QT_CONFIG(tooltip)
        sendLogButton->setToolTip(QCoreApplication::translate("Calamares::DebugWindow", "Uploads the session log to the configured pastebin.", nullptr));
#endif // QT_CONFIG(tooltip)
        sendLogButton->setText(QCoreApplication::translate("Calamares::DebugWindow", "Send Session Log", nullptr));
    } // retranslateUi

};

} // namespace Calamares

namespace Calamares {
namespace Ui {
    class DebugWindow: public Ui_DebugWindow {};
} // namespace Ui
} // namespace Calamares

#endif // UI_DEBUGWINDOW_H
