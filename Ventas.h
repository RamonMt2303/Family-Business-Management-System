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
 * Primera clase del programa. Ventas
 * @param string concepto, float ingreso, int cantidadProductos, float utilidad
 * @return 
 */


class Ventas{
    /*
     * Declaro los atributos privados de mi clase negocio, enfocado a lo más importante
     */
private:
    string concepto;
    float ingreso;
    int cantidadProductos;
    float utilidad;
    DatosPersonales datosClientes;
public:
    /*
     * Inicializo el constructor
     */
    Ventas(){
        this -> ingreso = 0;
        this -> concepto = "";
        this -> cantidadProductos = 0;
        this -> utilidad = 0;
        this -> datosClientes = DatosPersonales();
    }
    
    /*
     * Inicializo los getters
     */
    float getIngreso(){
        return this -> ingreso;
    }
    string getConcepto(){
        return this -> concepto;
    }
    int getCantidadProductos(){
        return this -> cantidadProductos;
    }
    float getUtilidad(){
        return this -> utilidad;
    }
    DatosPersonales getDatosPersonales(){
        return this -> datosClientes;
    }
    /*
     Inicializo los setters
     */
    void setIngreso(float ingreso){
        this -> ingreso = ingreso;
    }
    void setConcepto(string concepto){
        this -> concepto = concepto;
    }
    void setCantidadProductos(int cantidad){
        this -> cantidadProductos = cantidad;
    }
    void setUtilidad(float ingreso, int cantidad){
        this -> utilidad = ingreso * cantidad;
        cout << " La utilidad se ha cambiado con éxito " << endl;
    }
    DatosPersonales setDatosPersonales;
        
    /*
    Esta función me ayuda a imprimir los datos sobre los productos y los respectivos clientes, y me ayuda a mantener de forma más corta mi programa.
     */
    void printInfo(){
        cout <<" El concepto del ingreso es: " << getConcepto() << endl;
        cout <<" El valor de cada producto es: " << getIngreso() << " pesos " << endl;
        cout <<" En total se vendieron/rentaron: " << getCantidadProductos() << " productos " << endl;
        getDatosPersonales().printInfo();
        cout <<" La utilidad de esta venta/renta fue de: " << getUtilidad() <<" pesos "<< endl;
    }
    /*
    Esta función me ayuda como auxiliar para llenar los datos de los objetos de las
     distintas clases, para ayudarme a no repetir código y ser más eficiente.
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
