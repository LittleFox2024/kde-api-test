//Header for main window

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <KXmlGuiWindow>

class KTextEdit;

class MainWindow : public KXmlGuiWindow {
public: explicit MainWindow(QWidget* parent = nullptr);

private:
    KTextEdit* textEdit;
};


#endif // MAINWINDOW_H
