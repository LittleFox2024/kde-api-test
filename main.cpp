#include <iostream>
#include <QApplication>
#include <QCommandLineParser>
#include <KAboutData>
#include <KLocalizedString>
#include "mainwindow.h"

int main(int argc, char** argv) {
    using namespace Qt::Literals::StringLiterals;

    QApplication app(argc, argv);
    KLocalizedString::setApplicationDomain("kde-api-test");

    KAboutData aboutData(
        u"kde-api-test"_s,
        i18n("kde-api-test"),
        u"1.0"_s,
        i18n("A kde-api-test"),
        KAboutLicense::GPL,
        i18n("(c) 2026"),
        i18n("Test app"),
        u"https://www.example.com"_s,
        u"btdefores@outlook.com"_s
    );

    aboutData.addAuthor(
        i18n("LittleFox"),
        i18n("Me"),
        u"btdefores@outlook.com"_s,
        u"https://www.google.com"_s,
        u"LittleFox"_s
    );

    KAboutData.setApplicationData(aboutData);

    QCommandLineParser parser;
    aboutData.setupCommandLineParser(&parser);
    parser.process(app);
    aboutData.processCommandLine(&parser);

    MainWindow *window = new MainWindow();
    window->show();

    return app.exec();
}