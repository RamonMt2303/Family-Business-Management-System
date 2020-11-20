//
//  Negocio.h
//  proyecto A01702917
//
//  Created by Ramon Mtz on 19/11/20.
//

#ifndef Negocio_h
#define Negocio_h
#include <iostream>
using namespace std;

/*
 Declaro mi primera clase para el programa, que en este caso es el negocio, introduzco losproductos que se usan, y todo lo que se vea relacionado con ellos, por ejemplo la cantidad de venta o renta, cuánto cuesta cada unidad, datos de clientes, etc.
 */
class Negocio{
    /*
     Declaro los atributos privados de mi clase negocio, enfocado a lo más importante
     */
private:
    string concepto;
    float ingreso;
    int cantidadProductos;
    string direccionCliente;
    string nombreCliente;
    string telefonoCliente;
    float utilidad;
public:
    /*
     Inicializo el constructor
     */
    Negocio(){
        this -> ingreso = 0;
        this -> concepto = "";
        this -> cantidadProductos = 0;
        this -> utilidad = 0;
        this -> direccionCliente = "";
        this -> nombreCliente = "";
        this -> telefonoCliente = "";
    }
    /*
     Inicializo los getters
     */
    float getIngreso(){
        return this -> ingreso;
    }
    string getConcepto(){
        return this -> concepto;
    }
    string getDireccionCliente(){
        return this -> direccionCliente;
    }
    string getNombreCliente(){
        return this -> nombreCliente;
    }
    int getCantidadProductos(){
        return this -> cantidadProductos;
    }
    float getUtilidad(){
        return this -> utilidad;
    }
    string getTelefonoCliente(){
        return this -> telefonoCliente;
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
    void setDireccionCliente(string direccion){
        this -> direccionCliente = direccion;
    }
    void setNombreCliente(string nombre){
        this -> nombreCliente = nombre;
    }
    void setTelefonoCliente(string telefono){
        this -> telefonoCliente = telefono;
    }
    void setCantidadProductos(int cantidad){
        this -> cantidadProductos = cantidad;
    }
    void setUtilidad(float ingreso, int cantidad){
        this -> utilidad = ingreso * cantidad;
        cout << " La utilidad se ha cambiado con éxito " << endl;
    }
    /*
    Esta función me ayuda a imprimir los datos sobre los productos y los respectivos clientes, y me ayuda a mantener de forma más corta mi programa.
     */
    void printInfo(){
        cout <<" El concepto del ingreso es: " << getConcepto() << endl;
        cout <<" El valor de cada producto es: " << getIngreso() << " pesos " << endl;
        cout <<" En total se vendieron: " << getCantidadProductos() << " productos " << endl;
        cout <<" Fueron enviados a: " << getDireccionCliente() << endl;
        cout <<" El cliente se llama: " << getNombreCliente() << endl;
        cout <<" Su teléfono es: " << getTelefonoCliente() << endl;
        cout <<" La utilidad de esta venta fue de: " << getUtilidad() <<" pesos "<< endl;
    }
    /*
    Esta función me ayuda como auxiliar para llenar los datos de los objetos de las
     distintas clases, para ayudarme a no repetir código y ser más eficiente.
    */
    void llenarDatos(){
        float ingreso;
        int cantidadProductos;
        string NombreCliente, telefonoCliente, direccionCliente, concepto;
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
        cout << " ¿A qué dirección fueron enviados? "<< endl;
        cin.ignore();
        getline(cin, direccionCliente);
        setDireccionCliente(direccionCliente);
        cout<< " Nombre del cliente "<< endl;
        cin.ignore();
        getline(cin, NombreCliente);
        setNombreCliente(NombreCliente);
        cout<< " ¿Qué teléfono tiene el cliente? "<< endl;
        cin.ignore();
        getline(cin, telefonoCliente);
        setTelefonoCliente(telefonoCliente);
        setUtilidad(ingreso,cantidadProductos);
    }
};

#endif /* Negocio_h */
