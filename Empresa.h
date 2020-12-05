//
//  Empresa.h
//  proyecto A01702917
//
//  Created by Ramon Mtz on 04/12/20.
//

#ifndef Empresa_h
#define Empresa_h
#include<iostream>
#include <string>
#include "Transporte.h"
#include "Ventas.h"
#include "Empleados.h"
using namespace std;

/*
 * La función menú imprime las múltiples opciones.
 */

void printMenu(){
    cout << " ¿Qué deseas hacer?" << endl;
    cout << " 1 para entrar al sistema de ventas/rentas " << endl;
    cout << " 2 para los vehículos " << endl;
    cout << " 3 para los empleados " << endl;
    cout << " ó 0 para salir " << endl;
}

/*
 * Creo la clase empresa, que va a llamar a los archivos
 * donde están las clases guardadas por separado, para tener más limpio el main
 */

class Empresa{
private:
    int confirmacion;
public:
    /*
     * Inicio el constructor de la clase
     */
    Empresa(){
        this -> confirmacion = 0;
    }
    /*
     * La función menú me va a ayudar a hacer la función de un menú,
     * para acceder a las diferentes clases.
     */
    void menu(){
        int confirmacion = 0;
        printMenu();
        cin >> confirmacion;
        if (confirmacion == 0){cout << " Gracias por usar el sistema " << endl;}
        else{
            while (confirmacion != 0){
                if(confirmacion == 1){
                    Ventas producto;
                    producto.llenarDatos();
                    producto.getDatosPersonales();
                    producto.printInfo();
                    printMenu();
                    cin >> confirmacion;}
                else if(confirmacion == 2){
                    Transporte vehiculo;
                    vehiculo.llenarInfo();
                    vehiculo.printInfo();
                    printMenu();
                    cin >> confirmacion;}
                else if (confirmacion == 3){
                    Empleados empleado;
                    empleado.llenarInfo();
                    empleado.printInfo();
                    printMenu();
                    cin >> confirmacion;}
                else if (confirmacion == 0){
                    cout << " Gracias por usar el sistema " << endl;
                    break;}
            }
        }
    }
};


#endif /* Empresa_h */
