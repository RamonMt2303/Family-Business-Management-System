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

class DatosPersonales{
private:
    string direccionCliente;
    string nombreCliente;
    string telefonoCliente;
public:
    DatosPersonales(){
        this -> direccionCliente = "";
        this -> nombreCliente = "";
        this -> telefonoCliente = "";
    }
    string getDireccionCliente(){
        return this -> direccionCliente;
    }
    string getNombreCliente(){
        return this -> nombreCliente;
    }
    string getTelefonoCliente(){
        return this -> telefonoCliente;
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
    void printInfo(){
        cout <<" Fueron enviados a: " << getDireccionCliente() << endl;
        cout <<" El cliente se llama: " << getNombreCliente() << endl;
        cout <<" Su teléfono es: " << getTelefonoCliente() << endl;
    }
};
