#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidget>
#include <QFileDialog>

#include "presenters/mainwindowpresenter.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void updateDirectoryWidgets(QString filePath);
    void updateTaskWidgets(QStringList todoList);

    void on_actionOpenRepository_triggered();

    void on_actionInitializeRepository_triggered();

    void on_todoListWidget_clicked(const QModelIndex &index);

    void on_completedListWidget_clicked(const QModelIndex &index);

private:
    Ui::MainWindow *ui;
    MainWindowPresenter *m_presenter;

    void setupWidgets();
    void setupPresenter();
};

#endif // MAINWINDOW_H
