//
//  Empleados.h
//  proyecto A01702917
//
//  Created by Ramon Mtz on 19/11/20.
//

#ifndef Empleados_h
#define Empleados_h
#include <iostream>
using namespace std;
/*
 Declaro mi tercera clase para el programa, que en este caso son los empleados, se introducen datos personales, para llevar un seguimiento de ellos, y estar al tanto
 */

class Empleados{
    /*
     Declaro los atributos privados de mi clase empleados, enfocado a lo más importante
     */
private:
    float sueldo;
    string nombre;
    int edad;
    string ocupacion;
    string especialidad;
    string productividad;
    string preparacion;
    string equipo;
    int antiguedad;
    string estadoCivil;
public:
    /*
     Inicializo el constructor
     */
    Empleados(){
        this -> sueldo = 0;
        this -> nombre = "";
        this -> edad = 0;
        this -> ocupacion = "";
        this -> especialidad = "";
        this -> productividad = "";
        this -> preparacion = "";
        this -> equipo = "";
        this -> antiguedad = 0;
        this -> estadoCivil = "";
    }
    
    /*
     Inicializo los getters
     */
    
    float getSueldo(){
        return this -> sueldo;
    }
    string getNombre(){
        return this -> nombre;
    }
    int getEdad(){
        return this -> edad;
    }
    string getOcupacion(){
        return this -> ocupacion;
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
    
    /*
     Inicializo los setters
     */
    
    void setSueldo(float sueldo){
        this -> sueldo = sueldo;
    }
    void setNombre(string nombre){
        this -> nombre = nombre;
    }
    void setEdad(int edad){
        this -> edad = edad;
    }
    void setOcupacion(string ocupacion){
        this -> ocupacion = ocupacion;
    }
    void setEspecialidad(string especialidad){
        this -> especialidad = especialidad;
    }
    void setProductividad(string productividad){
        this -> productividad = productividad;
    }
    void setPreparacion(string preparacion){
        this -> preparacion = preparacion;
    }
    void setEquipo(string equipo){
        this -> equipo = equipo;
    }
    void setAntiguedad(int antiguedad){
        this -> antiguedad = antiguedad;
    }
    void setEstadoCivil(string estado){
        this -> estadoCivil = estado;
    }
    /*
     Uso las funciones de imprimir y llenar datos, para hacerlo más sencillo el programa,
     y mantener reusabilidad
     */
    void llenarInfo(){
        float sueldo = 0;
        string nombre = "";
        int edad = 0;
        string ocupacion = "";
        ocupacion = "";
        string especialidad = "";
        string productividad = "";
        string preparacion = "";
        string equipo = "";
        int antiguedad = 0;
        string estadoCivil = "";
        cout << " ¿Cuál es el nombre del empleado? " << endl;
        cin.ignore();
        getline(cin, nombre);
        setNombre(nombre);
        cout << " ¿Cuál es su sueldo? " << endl;
        cin >> sueldo;
        setSueldo(sueldo);
        cout << " ¿Cuál es su ocupación en el negocio? " << endl;
        cin.ignore();
        getline(cin, ocupacion);
        setOcupacion(ocupacion);
        cout << " ¿Cuál es su edad? " << endl;
        cin.ignore();
        cin >> edad;
        setEdad(edad);
        cout << " ¿Cuenta con alguna especialidad? (buen soldador, inciativa, buenas decisiones, etc) " << endl;
        cin.ignore();
        getline(cin,especialidad);
        setEspecialidad(especialidad);
        cout << " ¿Qué tan productivo es? (bajo, medio o alto) " << endl;
        cin.ignore();
        getline(cin, productividad);
        setProductividad(productividad);
        cout << " ¿Cuenta con algún nivel de preparación escolar? " << endl;
        cin.ignore();
        getline(cin, preparacion);
        setPreparacion(preparacion);
        cout << " ¿Sabe trabajar en equipo? " << endl;
        cin.ignore();
        getline(cin, equipo);
        setEquipo(equipo);
        cout << " ¿Cuánto lleva en el negocio? " << endl;
        cin >> antiguedad;
        setAntiguedad(antiguedad);
        cout << " ¿Cuál es su estado civil (casado, soltero, viudo, divorciado, etc)? " << endl;
        cin.ignore();
        getline(cin, estadoCivil);
        setEstadoCivil(estadoCivil);
    }
    void printInfo(){
        cout << " El nombre del empleado es " << getNombre() << endl;
        cout << " Su sueldo es de " << getSueldo() << endl;
        cout << " Su ocupación es " << getOcupacion() << endl;
        cout << " Su edad es " << getEdad() <<endl;
        cout << " Su especialidad es " << getEspecialidad() << endl;
        cout << " Su nivel de productividad es " << getProductividad() << endl;
        cout << " Su nivel de preparación es " << getPreparacion() << endl;
        cout << getNombre() << "" << getEquipo() << " sabe trabajar en equipo " << endl;
        cout << " Sus años de antiguedad en la empresa son " << getAntiguedad() << "años" << endl;
    }
};
#endif /* Empleados_h */
