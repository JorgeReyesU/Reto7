/*
 * Autores:
 *  Andrés Valencia
 *  Jorge Reyes
 * Fecha de modificación: 20 de Mayo
 */

#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_boton1Crear_clicked(){
    QString codigo = ui->objCodigo->text();
    QString nombre = ui->objNombre->text();
    double unidades = ui->objUnidades->text().toDouble();
    double valorU = ui->objValorU->text().toDouble();
    QString tipo = ui->objCombo->currentText();
    double subtotal = unidades * valorU;
    double iva;
    if(tipo == "Basico"){
       iva = subtotal * 0.05;
    }
    if(tipo == "Aseo"){
        iva = subtotal * 0.01;
    }
    if(tipo == "General"){
        iva = subtotal * 0.19;
    }

    double valorT = subtotal + iva;




    Producto * objProducto = new Producto(codigo, nombre, unidades, valorU, tipo, subtotal, iva, valorT);

    listaProducto.push_back(objProducto);

    ui->objCodigo->setText("");
    ui->objNombre->setText("");
    ui->objUnidades->setText("");
    ui->objValorU->setText("");

}

void MainWindow::on_boton2Listar_clicked(){
    QString salida = "Codigo\tNombre\tCategoria\tNumero unidades\tCosto unitario\tSubtotal\tIVA\tCosto total\n\n";
    for(int i=0; i<(int)listaProducto.size(); i++){
        salida+=listaProducto[i]->getCodigo();
        salida+="\t";
        salida+=listaProducto[i]->getNombre();
        salida+="\t";
        salida+=listaProducto[i]->getTipo();
        salida+="\t";
        salida+=QString::number(listaProducto[i]->getUnidades());
        salida+="\t\t";
        salida+=QString::number(listaProducto[i]->getValorU());
        salida+="\t\t";
        salida+=QString::number(listaProducto[i]->getSubtotal());
        salida+="\t";
        salida+=QString::number(listaProducto[i]->getIva());
        salida+="\t";
        salida+=QString::number(listaProducto[i]->getValorT());
        salida+="\n";

    }

    ui->salida->setText(salida);
}


