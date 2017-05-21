/*
 * Autores:
 *  Andrés Valencia
 *  Jorge Reyes
 * Fecha de modificación: 20 de Mayo
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "producto.h"
#include <vector>

using std::vector;

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
    void on_boton1Crear_clicked();
    void on_boton2Listar_clicked();

private:
    Ui::MainWindow *ui;
    vector<Producto*> listaProducto;
};

#endif // MAINWINDOW_H
