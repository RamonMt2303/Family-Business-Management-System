//
//  Empleados.h
//  proyecto A01702917
//
//  Created by Ramon Mtz on 19/11/20.
//

#ifndef Empleados_h
#define Empleados_h
#include "SueldoEmpleado.h"
#include <iostream>
#include "Ocupacion.h"

using namespace std;
/*
 * Declaro mi tercera clase para el programa, que en este caso son los empleados, se introducen datos personales, para llevar un seguimiento de ellos, y estar al tanto
 */

class Empleados{
    /*
     Declaro los atributos privados de mi clase empleados, enfocado a lo más importante
     */
private:
    string nombre;
    int edad;
    string especialidad;
    string productividad;
    string preparacion;
    string equipo;
    int antiguedad;
    string estadoCivil;
    SueldoEmpleados sueldo;
    Ocupacion ocupacion;
    Administrativo ocupacionAdmin;
    Laboral ocupacionLaboral;
public:
    /*
     *Inicializo el constructor
     */
    Empleados(){
        this -> nombre = " ";
        this -> edad = 0;
        this -> especialidad = " ";
        this -> productividad = " ";
        this -> preparacion = " ";
        this -> equipo = " ";
        this -> antiguedad = 0;
        this -> estadoCivil = " ";
    }
    
    /*
     * Inicializo los getters
     */
 
    string getNombre(){
        return this -> nombre;
    }
    int getEdad(){
        return this -> edad;
    }
    string getEspecialidad(){
        return this -> especialidad;
    }
    string getProductividad(){
        return this -> productividad;
    }
    string getPreparacion(){
        return this -> preparacion;
    }
    string getEquipo(){
        return this -> equipo;
    }
    int getAntiguedad(){
        return this -> antiguedad;
    }
    string getEstadoCivil(){
        return this -> estadoCivil;
    }
    SueldoEmpleados getSueldoEmpleados(){
        return this -> sueldo;
    }
    Ocupacion getOcupacion(){
        return this -> ocupacion;
    }
    Administrativo getOcupacionAdmin(){
        return this -> ocupacionAdmin;
    }
    Laboral getOcupacionLaboral(){
        return this -> ocupacionLaboral;
    }
    /*
     * Inicializo los setters
     */
    
    void setNombre(string Nombre){
        this -> nombre = Nombre;
    }
    void setEdad(int Edad){
        this -> edad = Edad;
    }
    void setEspecialidad(string Especialidad){
        this -> especialidad = Especialidad;
    }
    void setProductividad(string Productividad){
        this -> productividad = Productividad;
    }
    void setPreparacion(string Preparacion){
        this -> preparacion = Preparacion;
    }
    void setEquipo(string Equipo){
        this -> equipo = Equipo;
    }
    void setAntiguedad(int Antiguedad){
        this -> antiguedad = Antiguedad;
    }
    void setEstadoCivil(string Estado){
        this -> estadoCivil = Estado;
    }
    SueldoEmpleados setSueldoEmpleados;
    
    Ocupacion setOcupacion;
    
    Administrativo setOcupacionAdmin;
    
    Laboral setOcupacionLaboral;
    
    /*
     * Uso las funciones de imprimir y llenar datos, para hacerlo más sencillo el programa,
     * y mantener reusabilidad
     *@param string nombre, int edad, string ocupacion, string especialidad, string productividad, string preparacion, string equipo, int antiguedad, string estadoCivil
     @return 
     */
    void llenarInfo(){
        string nombre;
        int edad;
        string especialidad;
        string productividad;
        string preparacion;
        string equipo;
        int antiguedad;
        string estadoCivil;
        cout << " ¿Cuál es el nombre del empleado? " << endl;
        cin.ignore();
        getline(cin, nombre);
        setNombre(nombre);
        ocupacion.llenarInfo();
        ocupacionAdmin.llenarInfo();
        ocupacionLaboral.llenarInfo();
        cout << " ¿Cuál es su edad? " << endl;
        cin >> edad;
        setEdad(edad);
        sueldo.llenarInfo();
        cout << " ¿Cuenta con alguna especialidad? " << endl;
        cin.ignore();
        getline(cin,especialidad);
        setEspecialidad(especialidad);
        cout << " ¿Qué tan productivo es? (bajo, medio o alto) " << endl;
        cin >> productividad;
        setProductividad(productividad);
        cout << " ¿Cuenta con algún nivel de preparación escolar? (primaria, secundaria, universidad, etc)" << endl;
        cin >> preparacion;
        setPreparacion(preparacion);
        cout << " ¿Sabe trabajar en equipo? " << endl;
        cin >> equipo;
        setEquipo(equipo);
        cout << " ¿Cuántos años lleva en el negocio? " << endl;
        cin >> antiguedad;
        setAntiguedad(antiguedad);
        cout << " ¿Cuál es su estado civil (casado, soltero, viudo, divorciado, etc)? " << endl;
        cin >> estadoCivil;
        setEstadoCivil(estadoCivil);
    }
    void printInfo(){
        
        cout << " El nombre del empleado es " << getNombre() << endl;
        getSueldoEmpleados().printInfo();
        getOcupacion().printInfo();
        getOcupacionAdmin().printInfo();
        getOcupacionLaboral().printInfo();
        cout << " Su edad es: " << getEdad() <<endl;
        cout << " Su especialidad es: " << getEspecialidad() << endl;
        cout << " Su nivel de productividad es: " << getProductividad() << endl;
        cout << " Su nivel de preparación es: " << getPreparacion() << endl;
        cout << getNombre() << " " << getEquipo() << " sabe trabajar en equipo " << endl;
        cout << " Sus años de antiguedad en la empresa son: " << getAntiguedad() << endl;
    }
};


#endif /* Empleados_h */

