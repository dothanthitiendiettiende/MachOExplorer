//
//  Created by everettjf
//  Copyright © 2017 everettjf. All rights reserved.
//
#include "view/MainWindow.h"
#include <QApplication>
#include <iostream>
#include "common/AppInfo.h"
#include "controller/Workspace.h"
#include <QDesktopWidget>

#include "test/Test.h"

using namespace std;

int main(int argc, char *argv[])
{
    Test::go();

    Q_INIT_RESOURCE(MachOExplorer);

    QApplication app(argc, argv);

    app.setApplicationName("MachOExplorer");
    app.setOrganizationName("everettjf");
    app.setOrganizationDomain("everettjf.com");
    app.setApplicationVersion(AppInfo::Instance().GetAppVersion());
    app.setWindowIcon(QIcon(":MachOExplorer.icns"));

    auto *w = new MainWindow();
    w->setGeometry(QApplication::desktop()->availableGeometry().adjusted(200, 100, -200, -100));
    w->show();

    return app.exec();
}
