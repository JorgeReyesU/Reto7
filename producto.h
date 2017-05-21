/*
 * Autores:
 *  Andrés Valencia
 *  Jorge Reyes
 * Fecha de modificación: 20 de Mayo
 */

#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <QString>

class Producto{
    private:
     QString codigo;
     QString nombre;
     double unidades;
     double valorU;
     QString tipo;
     double subtotal;
     double iva;
     double valorT;

    public:
     Producto();
     Producto(QString codigo, QString nombre, double unidades, double valorU, QString tipo, double subtotal, double iva, double valorT);

     QString getCodigo();
     QString getNombre();
     double getUnidades();
     double getValorU();
     QString getTipo();
     double getSubtotal();
     double getIva();
     double getValorT();

     void setCodigo(QString codigo);
     void setNombre(QString nombre);
     void setUnidades(double unidades);
     void setValorU(double valorU);
     void setTipo(QString tipo);
     void setSubtotal(double subtotal);
     void setIva(double iva);
     void setValorT(double valorT);
};

#endif // PRODUCTO_H
