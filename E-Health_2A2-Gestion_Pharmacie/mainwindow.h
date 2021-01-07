#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "string"
#include <QMainWindow>
#include <stock.h>
#include <fournisseur.h>
#include <QFileDialog>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setid(QString);
    void setmdp(QString);
    QString getid();
    QString getmdp();

private slots:

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_23_clicked();

    void on_pushButton_22_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_26_clicked();

    void on_pushButton_27_clicked();

    void on_pushButton_32_clicked();

    void on_pushButton_31_clicked();

    void on_pushButton_28_clicked();

    void on_pushButton_30_clicked();

    void on_pushButton_29_clicked();

    void on_pushButton_33_clicked();

    void on_pushButton_34_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_35_clicked();

    void on_pushButton_20_clicked();

    void on_pushButton_21_clicked();

    void on_pushButton_36_clicked();

    void on_pushButton_37_clicked();

    void on_pushButton_50_clicked();

    void on_pushButton_51_clicked();

    void on_pushButton_56_clicked();

    void on_pushButton_57_clicked();

    void on_pushButton_54_clicked();

    void on_pushButton_60_clicked();

    void on_pushButton_86_clicked();

    void on_pushButton_53_clicked();

    void on_pushButton_52_clicked();

    void on_pushButton_61_clicked();

    void on_pushButton_58_clicked();

    void on_tableWidget_3_cellActivated(int row, int column);

    void on_plot_customContextMenuRequested(const QPoint &pos);

    void on_tabWidget_6_currentChanged(int index);

private:
    Ui::MainWindow *ui;
 QString id,mdp;
fournisseur fournisseurtemp;
stock  stocktemp;
};
#endif // MAINWINDOW_H