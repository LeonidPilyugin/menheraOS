/********************************************************************************
** Form generated from reading UI file 'page_usersetup.ui'
**
** Created by: Qt User Interface Compiler version 5.15.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE_USERSETUP_H
#define UI_PAGE_USERSETUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Page_UserSetup
{
public:
    QVBoxLayout *verticalLayout_12;
    QSpacerItem *verticalSpacer;
    QLabel *labelWhatIsYourName;
    QHBoxLayout *fullNameLayout;
    QLineEdit *textBoxFullName;
    QLabel *labelFullName;
    QLabel *labelFullNameError;
    QSpacerItem *verticalSpacer_2;
    QLabel *username_label_2;
    QHBoxLayout *usernameLayout;
    QLineEdit *textBoxLoginName;
    QLabel *labelUsername;
    QLabel *labelUsernameError;
    QSpacerItem *verticalSpacer_4;
    QLabel *hostnameLabel;
    QHBoxLayout *hostnameLayout;
    QLineEdit *textBoxHostname;
    QLabel *labelHostname;
    QLabel *labelHostnameError;
    QSpacerItem *hostnameVSpace;
    QLabel *password_label_2;
    QHBoxLayout *userPasswordLayout;
    QLineEdit *textBoxUserPassword;
    QLineEdit *textBoxUserVerifiedPassword;
    QLabel *labelUserPassword;
    QLabel *labelUserPasswordError;
    QSpacerItem *verticalSpacer_5;
    QCheckBox *checkBoxRequireStrongPassword;
    QCheckBox *checkBoxDoAutoLogin;
    QCheckBox *checkBoxReusePassword;
    QSpacerItem *verticalSpacer_6;
    QLabel *labelChooseRootPassword;
    QHBoxLayout *rootPasswordLayout;
    QLineEdit *textBoxRootPassword;
    QLineEdit *textBoxVerifiedRootPassword;
    QLabel *labelRootPassword;
    QLabel *labelRootPasswordError;
    QSpacerItem *verticalSpacer_7;

    void setupUi(QWidget *Page_UserSetup)
    {
        if (Page_UserSetup->objectName().isEmpty())
            Page_UserSetup->setObjectName(QString::fromUtf8("Page_UserSetup"));
        Page_UserSetup->resize(862, 683);
        verticalLayout_12 = new QVBoxLayout(Page_UserSetup);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalSpacer = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_12->addItem(verticalSpacer);

        labelWhatIsYourName = new QLabel(Page_UserSetup);
        labelWhatIsYourName->setObjectName(QString::fromUtf8("labelWhatIsYourName"));

        verticalLayout_12->addWidget(labelWhatIsYourName);

        fullNameLayout = new QHBoxLayout();
        fullNameLayout->setObjectName(QString::fromUtf8("fullNameLayout"));
        textBoxFullName = new QLineEdit(Page_UserSetup);
        textBoxFullName->setObjectName(QString::fromUtf8("textBoxFullName"));
        textBoxFullName->setMinimumSize(QSize(200, 0));

        fullNameLayout->addWidget(textBoxFullName);

        labelFullName = new QLabel(Page_UserSetup);
        labelFullName->setObjectName(QString::fromUtf8("labelFullName"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelFullName->sizePolicy().hasHeightForWidth());
        labelFullName->setSizePolicy(sizePolicy);
        labelFullName->setMinimumSize(QSize(24, 24));
        labelFullName->setMaximumSize(QSize(24, 24));
        labelFullName->setText(QString::fromUtf8(""));
        labelFullName->setScaledContents(true);

        fullNameLayout->addWidget(labelFullName);

        labelFullNameError = new QLabel(Page_UserSetup);
        labelFullNameError->setObjectName(QString::fromUtf8("labelFullNameError"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelFullNameError->sizePolicy().hasHeightForWidth());
        labelFullNameError->setSizePolicy(sizePolicy1);
        labelFullNameError->setWordWrap(true);

        fullNameLayout->addWidget(labelFullNameError);


        verticalLayout_12->addLayout(fullNameLayout);

        verticalSpacer_2 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_12->addItem(verticalSpacer_2);

        username_label_2 = new QLabel(Page_UserSetup);
        username_label_2->setObjectName(QString::fromUtf8("username_label_2"));
        username_label_2->setWordWrap(false);

        verticalLayout_12->addWidget(username_label_2);

        usernameLayout = new QHBoxLayout();
        usernameLayout->setObjectName(QString::fromUtf8("usernameLayout"));
        textBoxLoginName = new QLineEdit(Page_UserSetup);
        textBoxLoginName->setObjectName(QString::fromUtf8("textBoxLoginName"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(textBoxLoginName->sizePolicy().hasHeightForWidth());
        textBoxLoginName->setSizePolicy(sizePolicy2);
        textBoxLoginName->setMinimumSize(QSize(200, 0));

        usernameLayout->addWidget(textBoxLoginName);

        labelUsername = new QLabel(Page_UserSetup);
        labelUsername->setObjectName(QString::fromUtf8("labelUsername"));
        sizePolicy.setHeightForWidth(labelUsername->sizePolicy().hasHeightForWidth());
        labelUsername->setSizePolicy(sizePolicy);
        labelUsername->setMinimumSize(QSize(24, 24));
        labelUsername->setMaximumSize(QSize(24, 24));
        labelUsername->setScaledContents(true);

        usernameLayout->addWidget(labelUsername);

        labelUsernameError = new QLabel(Page_UserSetup);
        labelUsernameError->setObjectName(QString::fromUtf8("labelUsernameError"));
        sizePolicy1.setHeightForWidth(labelUsernameError->sizePolicy().hasHeightForWidth());
        labelUsernameError->setSizePolicy(sizePolicy1);
        labelUsernameError->setMinimumSize(QSize(200, 0));
        labelUsernameError->setAlignment(Qt::AlignVCenter);
        labelUsernameError->setWordWrap(true);

        usernameLayout->addWidget(labelUsernameError);


        verticalLayout_12->addLayout(usernameLayout);

        verticalSpacer_4 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_12->addItem(verticalSpacer_4);

        hostnameLabel = new QLabel(Page_UserSetup);
        hostnameLabel->setObjectName(QString::fromUtf8("hostnameLabel"));
        hostnameLabel->setWordWrap(false);

        verticalLayout_12->addWidget(hostnameLabel);

        hostnameLayout = new QHBoxLayout();
        hostnameLayout->setObjectName(QString::fromUtf8("hostnameLayout"));
        textBoxHostname = new QLineEdit(Page_UserSetup);
        textBoxHostname->setObjectName(QString::fromUtf8("textBoxHostname"));
        sizePolicy2.setHeightForWidth(textBoxHostname->sizePolicy().hasHeightForWidth());
        textBoxHostname->setSizePolicy(sizePolicy2);
        textBoxHostname->setMinimumSize(QSize(200, 0));

        hostnameLayout->addWidget(textBoxHostname);

        labelHostname = new QLabel(Page_UserSetup);
        labelHostname->setObjectName(QString::fromUtf8("labelHostname"));
        sizePolicy.setHeightForWidth(labelHostname->sizePolicy().hasHeightForWidth());
        labelHostname->setSizePolicy(sizePolicy);
        labelHostname->setMinimumSize(QSize(24, 24));
        labelHostname->setMaximumSize(QSize(24, 24));
        labelHostname->setScaledContents(true);

        hostnameLayout->addWidget(labelHostname);

        labelHostnameError = new QLabel(Page_UserSetup);
        labelHostnameError->setObjectName(QString::fromUtf8("labelHostnameError"));
        sizePolicy1.setHeightForWidth(labelHostnameError->sizePolicy().hasHeightForWidth());
        labelHostnameError->setSizePolicy(sizePolicy1);
        labelHostnameError->setMinimumSize(QSize(200, 0));
        labelHostnameError->setAlignment(Qt::AlignVCenter);
        labelHostnameError->setWordWrap(true);

        hostnameLayout->addWidget(labelHostnameError);


        verticalLayout_12->addLayout(hostnameLayout);

        hostnameVSpace = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_12->addItem(hostnameVSpace);

        password_label_2 = new QLabel(Page_UserSetup);
        password_label_2->setObjectName(QString::fromUtf8("password_label_2"));
        password_label_2->setWordWrap(false);

        verticalLayout_12->addWidget(password_label_2);

        userPasswordLayout = new QHBoxLayout();
        userPasswordLayout->setObjectName(QString::fromUtf8("userPasswordLayout"));
        textBoxUserPassword = new QLineEdit(Page_UserSetup);
        textBoxUserPassword->setObjectName(QString::fromUtf8("textBoxUserPassword"));
        sizePolicy2.setHeightForWidth(textBoxUserPassword->sizePolicy().hasHeightForWidth());
        textBoxUserPassword->setSizePolicy(sizePolicy2);
        textBoxUserPassword->setMinimumSize(QSize(200, 0));
        textBoxUserPassword->setEchoMode(QLineEdit::Password);

        userPasswordLayout->addWidget(textBoxUserPassword);

        textBoxUserVerifiedPassword = new QLineEdit(Page_UserSetup);
        textBoxUserVerifiedPassword->setObjectName(QString::fromUtf8("textBoxUserVerifiedPassword"));
        sizePolicy2.setHeightForWidth(textBoxUserVerifiedPassword->sizePolicy().hasHeightForWidth());
        textBoxUserVerifiedPassword->setSizePolicy(sizePolicy2);
        textBoxUserVerifiedPassword->setMinimumSize(QSize(200, 0));
        textBoxUserVerifiedPassword->setEchoMode(QLineEdit::Password);

        userPasswordLayout->addWidget(textBoxUserVerifiedPassword);

        labelUserPassword = new QLabel(Page_UserSetup);
        labelUserPassword->setObjectName(QString::fromUtf8("labelUserPassword"));
        sizePolicy.setHeightForWidth(labelUserPassword->sizePolicy().hasHeightForWidth());
        labelUserPassword->setSizePolicy(sizePolicy);
        labelUserPassword->setMinimumSize(QSize(24, 24));
        labelUserPassword->setMaximumSize(QSize(24, 24));
        labelUserPassword->setScaledContents(true);

        userPasswordLayout->addWidget(labelUserPassword);

        labelUserPasswordError = new QLabel(Page_UserSetup);
        labelUserPasswordError->setObjectName(QString::fromUtf8("labelUserPasswordError"));
        sizePolicy1.setHeightForWidth(labelUserPasswordError->sizePolicy().hasHeightForWidth());
        labelUserPasswordError->setSizePolicy(sizePolicy1);
        labelUserPasswordError->setMinimumSize(QSize(100, 0));
        labelUserPasswordError->setAlignment(Qt::AlignVCenter);
        labelUserPasswordError->setWordWrap(true);

        userPasswordLayout->addWidget(labelUserPasswordError);


        verticalLayout_12->addLayout(userPasswordLayout);

        verticalSpacer_5 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_12->addItem(verticalSpacer_5);

        checkBoxRequireStrongPassword = new QCheckBox(Page_UserSetup);
        checkBoxRequireStrongPassword->setObjectName(QString::fromUtf8("checkBoxRequireStrongPassword"));

        verticalLayout_12->addWidget(checkBoxRequireStrongPassword);

        checkBoxDoAutoLogin = new QCheckBox(Page_UserSetup);
        checkBoxDoAutoLogin->setObjectName(QString::fromUtf8("checkBoxDoAutoLogin"));

        verticalLayout_12->addWidget(checkBoxDoAutoLogin);

        checkBoxReusePassword = new QCheckBox(Page_UserSetup);
        checkBoxReusePassword->setObjectName(QString::fromUtf8("checkBoxReusePassword"));

        verticalLayout_12->addWidget(checkBoxReusePassword);

        verticalSpacer_6 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_12->addItem(verticalSpacer_6);

        labelChooseRootPassword = new QLabel(Page_UserSetup);
        labelChooseRootPassword->setObjectName(QString::fromUtf8("labelChooseRootPassword"));
        labelChooseRootPassword->setWordWrap(false);

        verticalLayout_12->addWidget(labelChooseRootPassword);

        rootPasswordLayout = new QHBoxLayout();
        rootPasswordLayout->setObjectName(QString::fromUtf8("rootPasswordLayout"));
        textBoxRootPassword = new QLineEdit(Page_UserSetup);
        textBoxRootPassword->setObjectName(QString::fromUtf8("textBoxRootPassword"));
        sizePolicy2.setHeightForWidth(textBoxRootPassword->sizePolicy().hasHeightForWidth());
        textBoxRootPassword->setSizePolicy(sizePolicy2);
        textBoxRootPassword->setMinimumSize(QSize(200, 0));
        textBoxRootPassword->setEchoMode(QLineEdit::Password);

        rootPasswordLayout->addWidget(textBoxRootPassword);

        textBoxVerifiedRootPassword = new QLineEdit(Page_UserSetup);
        textBoxVerifiedRootPassword->setObjectName(QString::fromUtf8("textBoxVerifiedRootPassword"));
        sizePolicy2.setHeightForWidth(textBoxVerifiedRootPassword->sizePolicy().hasHeightForWidth());
        textBoxVerifiedRootPassword->setSizePolicy(sizePolicy2);
        textBoxVerifiedRootPassword->setMinimumSize(QSize(200, 0));
        textBoxVerifiedRootPassword->setEchoMode(QLineEdit::Password);

        rootPasswordLayout->addWidget(textBoxVerifiedRootPassword);

        labelRootPassword = new QLabel(Page_UserSetup);
        labelRootPassword->setObjectName(QString::fromUtf8("labelRootPassword"));
        sizePolicy.setHeightForWidth(labelRootPassword->sizePolicy().hasHeightForWidth());
        labelRootPassword->setSizePolicy(sizePolicy);
        labelRootPassword->setMinimumSize(QSize(24, 24));
        labelRootPassword->setMaximumSize(QSize(24, 24));
        labelRootPassword->setScaledContents(true);

        rootPasswordLayout->addWidget(labelRootPassword);

        labelRootPasswordError = new QLabel(Page_UserSetup);
        labelRootPasswordError->setObjectName(QString::fromUtf8("labelRootPasswordError"));
        sizePolicy1.setHeightForWidth(labelRootPasswordError->sizePolicy().hasHeightForWidth());
        labelRootPasswordError->setSizePolicy(sizePolicy1);
        labelRootPasswordError->setMinimumSize(QSize(100, 0));
        labelRootPasswordError->setAlignment(Qt::AlignVCenter);
        labelRootPasswordError->setWordWrap(true);

        rootPasswordLayout->addWidget(labelRootPasswordError);


        verticalLayout_12->addLayout(rootPasswordLayout);

        verticalSpacer_7 = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer_7);


        retranslateUi(Page_UserSetup);

        QMetaObject::connectSlotsByName(Page_UserSetup);
    } // setupUi

    void retranslateUi(QWidget *Page_UserSetup)
    {
        Page_UserSetup->setWindowTitle(QCoreApplication::translate("Page_UserSetup", "Form", nullptr));
        labelWhatIsYourName->setText(QCoreApplication::translate("Page_UserSetup", "What is your name?", nullptr));
        textBoxFullName->setPlaceholderText(QCoreApplication::translate("Page_UserSetup", "Your Full Name", nullptr));
        labelFullNameError->setText(QString());
        username_label_2->setText(QCoreApplication::translate("Page_UserSetup", "What name do you want to use to log in?", nullptr));
        textBoxLoginName->setPlaceholderText(QCoreApplication::translate("Page_UserSetup", "login", nullptr));
        labelUsernameError->setText(QString());
        hostnameLabel->setText(QCoreApplication::translate("Page_UserSetup", "What is the name of this computer?", nullptr));
#if QT_CONFIG(tooltip)
        textBoxHostname->setToolTip(QCoreApplication::translate("Page_UserSetup", "<small>This name will be used if you make the computer visible to others on a network.</small>", nullptr));
#endif // QT_CONFIG(tooltip)
        textBoxHostname->setPlaceholderText(QCoreApplication::translate("Page_UserSetup", "Computer Name", nullptr));
        labelHostnameError->setText(QString());
        password_label_2->setText(QCoreApplication::translate("Page_UserSetup", "Choose a password to keep your account safe.", nullptr));
#if QT_CONFIG(tooltip)
        textBoxUserPassword->setToolTip(QCoreApplication::translate("Page_UserSetup", "<small>Enter the same password twice, so that it can be checked for typing errors. A good password will contain a mixture of letters, numbers and punctuation, should be at least eight characters long, and should be changed at regular intervals.</small>", nullptr));
#endif // QT_CONFIG(tooltip)
        textBoxUserPassword->setPlaceholderText(QCoreApplication::translate("Page_UserSetup", "Password", nullptr));
#if QT_CONFIG(tooltip)
        textBoxUserVerifiedPassword->setToolTip(QCoreApplication::translate("Page_UserSetup", "<small>Enter the same password twice, so that it can be checked for typing errors. A good password will contain a mixture of letters, numbers and punctuation, should be at least eight characters long, and should be changed at regular intervals.</small>", nullptr));
#endif // QT_CONFIG(tooltip)
        textBoxUserVerifiedPassword->setPlaceholderText(QCoreApplication::translate("Page_UserSetup", "Repeat Password", nullptr));
        labelUserPasswordError->setText(QString());
#if QT_CONFIG(tooltip)
        checkBoxRequireStrongPassword->setToolTip(QCoreApplication::translate("Page_UserSetup", "When this box is checked, password-strength checking is done and you will not be able to use a weak password.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxRequireStrongPassword->setText(QCoreApplication::translate("Page_UserSetup", "Require strong passwords.", nullptr));
        checkBoxDoAutoLogin->setText(QCoreApplication::translate("Page_UserSetup", "Log in automatically without asking for the password.", nullptr));
        checkBoxReusePassword->setText(QCoreApplication::translate("Page_UserSetup", "Use the same password for the administrator account.", nullptr));
        labelChooseRootPassword->setText(QCoreApplication::translate("Page_UserSetup", "Choose a password for the administrator account.", nullptr));
#if QT_CONFIG(tooltip)
        textBoxRootPassword->setToolTip(QCoreApplication::translate("Page_UserSetup", "<small>Enter the same password twice, so that it can be checked for typing errors.</small>", nullptr));
#endif // QT_CONFIG(tooltip)
        textBoxRootPassword->setPlaceholderText(QCoreApplication::translate("Page_UserSetup", "Password", nullptr));
#if QT_CONFIG(tooltip)
        textBoxVerifiedRootPassword->setToolTip(QCoreApplication::translate("Page_UserSetup", "<small>Enter the same password twice, so that it can be checked for typing errors.</small>", nullptr));
#endif // QT_CONFIG(tooltip)
        textBoxVerifiedRootPassword->setPlaceholderText(QCoreApplication::translate("Page_UserSetup", "Repeat Password", nullptr));
        labelRootPasswordError->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Page_UserSetup: public Ui_Page_UserSetup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_USERSETUP_H
