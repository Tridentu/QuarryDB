#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'quarrydb.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUARRYDB_H
#define UI_QUARRYDB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainWidget
{
public:
    QVBoxLayout *verticalLayout;
    QMdiArea *dataWorkspace;

    void setupUi(QWidget *mainWidget)
    {
        if (mainWidget->objectName().isEmpty())
            mainWidget->setObjectName(QString::fromUtf8("mainWidget"));
        mainWidget->resize(490, 388);
        verticalLayout = new QVBoxLayout(mainWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        dataWorkspace = new QMdiArea(mainWidget);
        dataWorkspace->setObjectName(QString::fromUtf8("dataWorkspace"));
        QBrush brush(QColor(30, 30, 30, 255));
        brush.setStyle(Qt::SolidPattern);
        dataWorkspace->setBackground(brush);
        dataWorkspace->setDocumentMode(true);
        dataWorkspace->setTabsClosable(true);

        verticalLayout->addWidget(dataWorkspace);


        retranslateUi(mainWidget);

        QMetaObject::connectSlotsByName(mainWidget);
    } // setupUi

    void retranslateUi(QWidget *mainWidget)
    {
        Q_UNUSED(mainWidget);
    } // retranslateUi

};

namespace Ui {
    class mainWidget: public Ui_mainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // QUARRYDB_H

