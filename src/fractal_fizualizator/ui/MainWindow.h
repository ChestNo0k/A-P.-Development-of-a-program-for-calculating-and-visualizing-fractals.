#pragma once

#include <QMainWindow>
#include <QComboBox>
#include <QPushButton>

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

private:
    QComboBox *fractalSelector;
    QPushButton *startButton;

private slots:
    void onStartClicked();
};
