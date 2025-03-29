#include "MainWindow.h"
#include "VisualizationWindow.h"
#include <QVBoxLayout>
#include <QWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent) {

    QWidget *central = new QWidget(this);
    QVBoxLayout *layout = new QVBoxLayout(central);

    fractalSelector = new QComboBox(this);
    fractalSelector->addItem("Кривая Коха");
    fractalSelector->addItem("Множество Мандельброта");

    startButton = new QPushButton("Визуализировать", this);

    layout->addWidget(fractalSelector);
    layout->addWidget(startButton);
    setCentralWidget(central);

    connect(startButton, &QPushButton::clicked, this, &MainWindow::onStartClicked);
}

void MainWindow::onStartClicked() {
    auto window = new VisualizationWindow(fractalSelector->currentIndex());
    window->show();
}
