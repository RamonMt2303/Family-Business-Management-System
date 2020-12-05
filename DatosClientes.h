//
//  DatosClientes.h
//  proyecto A01702917
//
//  Created by Ramon Mtz on 26/11/20.
//

#ifndef DatosClientes_h
#define DatosClientes_h
#include <iostream>
using namespace std;

#endif /* DatosClientes_h */
/*
 * Defino la clase Datos personales.
 */
class DatosPersonales{
private:
    string direccionCliente;
    string nombreCliente;
    string telefonoCliente;
public:
    /*
     * Inicializo el constructor.
     */
    DatosPersonales(){
        this -> direccionCliente = "";
        this -> nombreCliente = "";
        this -> telefonoCliente = "";
    }
    
    /*
     * La función getDireccionCliente, nos regresa la dirección del cliente.
     * @return direccionCliente Dirección del cliente a la que se entregó la venta/renta.
     */
    string getDireccionCliente(){
        return this -> direccionCliente;
    }
    
    /*
     * La función getNombreClientes, nos regresa el nombre de los clientes.
     * @return nombreCliente Nombre del cliente.
     */
    string getNombreCliente(){
        return this -> nombreCliente;
    }
    
    /*
     * La función getTelefonoCliente, nos regresa el teléfono del cliente.
     * @return telefonoCliente Teléfono del cliente.
     */
    string getTelefonoCliente(){
        return this -> telefonoCliente;
    }
    
    /*
     * La función setIngreso, nos ayuda a asignar la dirección del cliente.
     * @param direccion Dirección a la que se envió la venta/renta.
     */
    void setDireccionCliente(string direccion){
        this -> direccionCliente = direccion;
    }
    
    /*
     * La función setNombreCliente, nos ayuda a asignar el nombre del cliente.
     * @param nombre Nombre del cliente a el que se envió la venta/renta.
     */
    void setNombreCliente(string nombre){
        this -> nombreCliente = nombre;
    }
    
    /*
     * La función setTelefonoCliente, nos ayuda a asignar el teléfono del cliente.
     * @param telefono Teléfono del cliente a el que se envió la venta/renta.
     */
    void setTelefonoCliente(string telefono){
        this -> telefonoCliente = telefono;
    }
    
    /*
     * La función llenarDatos, nos ayuda a los input de los valores,
     * para después ser asignados a los setters.
     */
    void llenarDatos(){
        string NombreCliente, telefonoCliente, direccionCliente;
        cout<< " Nombre del cliente "<< endl;
        cin.ignore();
        getline(cin, NombreCliente);
        setNombreCliente(NombreCliente);
        cout << " ¿A qué dirección fueron enviados? "<< endl;
        cin.ignore();
        getline(cin, direccionCliente);
        setDireccionCliente(direccionCliente);
        cout<< " ¿Qué teléfono tiene el cliente? "<< endl;
        cin.ignore();
        getline(cin, telefonoCliente);
        setTelefonoCliente(telefonoCliente);
    }
    
    /*
     * La función printInfo, nos ayuda a imprimir los valores que fueron ingresados
     * anteriormente, como el teléfono, nombre, dirección.
     */
    void printInfo(){
        cout <<" Fueron enviados a: " << getDireccionCliente() << endl;
        cout <<" El cliente se llama: " << getNombreCliente() << endl;
        cout <<" Su teléfono es: " << getTelefonoCliente() << endl;
    }
};
