//
//  Negocio.h
//  proyecto A01702917
//
//  Created by Ramon Mtz on 19/11/20.
//

#ifndef Ventas_h
#define Ventas_h
#include "DatosClientes.h"
#include <iostream>
using namespace std;



/*
 * Defino mi clase Ventas.
 */
class Ventas{
private:
    string concepto;
    float ingreso;
    int cantidadProductos;
    float utilidad;
    DatosPersonales datosClientes;
public:
    /*
     * Inicializo el constructor.
     */
    Ventas(){
        this -> ingreso = 0;
        this -> concepto = "";
        this -> cantidadProductos = 0;
        this -> utilidad = 0;
        this -> datosClientes = DatosPersonales();
    }
    
    /*
     * La función getIngreso, nos regresa el costo por cada unidad de la venta/renta.
     * @return ingreso Costo por cada unidad.
     */
    float getIngreso(){
        return this -> ingreso;
    }
    
    /*
     * La función getConcepto, nos regresa el concepto del ingreso monetario.
     * @return concepto Concepto del ingreso.
     */
    string getConcepto(){
        return this -> concepto;
    }
    
    /*
     * La función getCantidadProductos, nos regresa la cantidad de productos que se vendieron/rentaron.
     * @return cantidadProductos Cantidad de productos vendidos/rentados.
     */
    int getCantidadProductos(){
        return this -> cantidadProductos;
    }
    
    /*
     * La función getUtilidad, nos regresa la utilidad, obtenida de la venta/renta.
     * @return utilidad Utilidad de la venta/renta.
     */
    float getUtilidad(){
        return this -> utilidad;
    }
    
    /*
     * La función DatosPersonales, nos regresa los datos personales de los clientes,
     * para registrarlos.
     * @return datosClientes Datos personales de los clientes para registrarlos,
     * como nombre, teléfono, dirección, etc.
     */
    DatosPersonales getDatosPersonales(){
        return this -> datosClientes;
    }
    
    /*
     * La función setIngreso, nos ayuda a asignar el ingreso por cada peiza vendida/rentada.
     * @param ingreso Costo por cada unidad vendida/rentada.
     */
    void setIngreso(float ingreso){
        this -> ingreso = ingreso;
    }
    
    /*
     * La función setConcepto, nos ayuda a asignar el concepto de la venta/renta.
     * @param concepto Concepto de la venta.
     */
    void setConcepto(string concepto){
        this -> concepto = concepto;
    }
    
    /*
     * La función setCantidadProductos, nos ayuda a asignar la cantidad
     * de piezas vendidas/rentadas.
     * @param cantidadProductos Cantidad de piezas vendidas/rentadas.
     */
    void setCantidadProductos(int cantidad){
        this -> cantidadProductos = cantidad;
    }
    
    /*
     * La función setUtilidad, nos ayuda a asignar el ingreso por cada peiza vendida/rentada,
     * y la cantidad de piezas, para obtener la utilidad.
     * @param ingreso Costo por cada unidad vendida/rentada.
     * @param cantidad Cantidad de piezas vendidas/rentadas.
     */
    void setUtilidad(float ingreso, int cantidad){
        this -> utilidad = ingreso * cantidad;
        cout << " La utilidad se ha cambiado con éxito " << endl;
    }
    
    /*
     * La función setDatosPersonales, nos ayuda a asignar los datos personales
     * de los clientes, a los que se les ofreció el servicio.
     */
    DatosPersonales setDatosPersonales;
    
    /*
     * La función printInfo, nos ayuda a imprimir los valores que fueron ingresados
     * anteriormente, como el concepto, ingreso, cantidad de productos, datos personales, etc.
     */
    void printInfo(){
        cout <<" El concepto del ingreso es: " << getConcepto() << endl;
        cout <<" El valor de cada producto es: " << getIngreso() << " pesos " << endl;
        cout <<" En total se vendieron/rentaron: " << getCantidadProductos() << " productos " << endl;
        getDatosPersonales().printInfo();
        cout <<" La utilidad de esta venta/renta fue de: " << getUtilidad() <<" pesos "<< endl;
    }
    
    /*
     * La función llenarDatos, nos ayuda a los input de los valores,
     * para después ser asignados a los setters.
     */
    void llenarDatos(){
        float ingreso;
        int cantidadProductos;
        string concepto;
        cout << " ¿Cuál es el concepto del ingreso?" << endl;
        cout << "Atriles" << endl;
        cout << "Carretes"<< endl;
        cout << "Tanques de Oxígeno" << endl;
        cin.ignore();
        getline(cin,concepto);
        setConcepto(concepto);
        cout<< " ¿Cuánto cuesta cada uno? "<< endl;
        cin >> ingreso;
        while (ingreso <= 0){
            cout << " Ingrese un dato válido " << endl;
            cin >> ingreso;
        }
            setIngreso(ingreso);
        cout << " ¿Cuántos productos se vendieron o rentaron? "<< endl;
        cin >> cantidadProductos;
        while (cantidadProductos <= 0){
            cout << " Ingrese un dato válido " << endl;
            cin >> cantidadProductos;
        }
            setCantidadProductos(cantidadProductos);
        datosClientes.llenarDatos();
        setUtilidad(ingreso,cantidadProductos);
    }
};

#endif /* Ventas_h */
