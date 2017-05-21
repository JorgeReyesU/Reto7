/*
 * Autores:
 *  Andrés Valencia
 *  Jorge Reyes
 * Fecha de modificación: 20 de Mayo
 */

#include "producto.h"

Producto::Producto()
{
    this->codigo = "";
    this->nombre = "";
    this->unidades = 0.0;
    this->valorU = 0.0;
    this->tipo = tipo;
    this->subtotal = 0;
    this->iva = 0;
    this->valorT = 0;

}

Producto::Producto(QString codigo, QString nombre, double unidades, double valorU, QString tipo, double subtotal, double iva, double valorT){

     this->codigo = codigo;
     this->nombre = nombre;
     this->unidades = unidades;
     this->valorU = valorU;
     this->tipo = tipo;
     this->subtotal = subtotal;
     this->iva = iva;
     this->valorT = valorT;
}

QString Producto::getCodigo(){
    return codigo;
}

QString Producto::getNombre(){
    return nombre;
}

double Producto::getUnidades(){
    return unidades;
}

double Producto::getValorU(){
    return valorU;
}

QString Producto::getTipo(){
    return tipo;
}

double Producto::getSubtotal(){
    return subtotal;
}

double Producto::getIva(){
    return iva;
}

double Producto::getValorT(){
    return valorT;
}



void Producto::setCodigo(QString codigo){
    this->codigo = codigo;
}

void Producto::setNombre(QString nombre){
    this->nombre = nombre;
}

void Producto::setUnidades(double unidades){
    this->unidades = unidades;
}

void Producto::setValorU(double valorU){
    this->valorU = valorU;
}

void Producto::setTipo(QString tipo){
    this->tipo = tipo;
}

void Producto::setSubtotal(double subtotal){
    this->subtotal = subtotal;
}

void Producto::setIva(double iva){
    this->iva = iva;
}

void Producto::setValorT(double valorT){
    this->valorT = valorT;
}























