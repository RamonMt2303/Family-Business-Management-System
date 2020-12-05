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
 * Defino mi clase Empleados.
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
     *Inicializo el constructor.
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
     * La función getNombre, nos regresa el nombre del empleado.
     * @return nombre Nombre del empleado.
     */
    string getNombre(){
        return this -> nombre;
    }
    
    /*
     * La función getEdad, nos regresa la edad del empleado.
     * @return edad Edad del empleado.
     */
    int getEdad(){
        return this -> edad;
    }
    
    /*
     * La función getEspecialidad, nos regresa la especialidad del empleado.
     * @return especialidad Especialidad del empleado.
     */
    string getEspecialidad(){
        return this -> especialidad;
    }
    
    /*
     * La función getProductividad, nos regresa la productividad del empleado
     * dentro del negocio.
     * @return productividad Productividad del empleado.
     */
    string getProductividad(){
        return this -> productividad;
    }
    
    /*
     * La función getPreparacion, nos regresa la preparación educativa del empleado.
     * @return preparacion Nivel de preparación del empleado.
     */
    string getPreparacion(){
        return this -> preparacion;
    }
    
    /*
     * La función getEquipo, nos regresa si el empleado sabe o no trabajar en equipo.
     * @return equipo Sabe o no sabe trabajar en equipo.
     */
    string getEquipo(){
        return this -> equipo;
    }
    
    /*
     * La función getAntiguedad, nos regresa los años de antiguedad del empleado en el negocio.
     * @return antiguedad Años en el negocio.
     */
    int getAntiguedad(){
        return this -> antiguedad;
    }
    
    /*
     * La función getEstadoCivil, nos regresa el estado civil del empleado.
     * @return estadoCivil Estado civil del empleado.
     */
    string getEstadoCivil(){
        return this -> estadoCivil;
    }
    
    /*
     * La función getSueldoEmpleados, nos regresa el sueldo del empleado.
     * @return sueldo Sueldo del empleado.
     */
    SueldoEmpleados getSueldoEmpleados(){
        return this -> sueldo;
    }
    
    /*
     * La función getOcupacion, nos regresa la ocupación del empleado en el negocio.
     * @return ocupacion Ocupación del empleado en el negocio.
     */
    Ocupacion getOcupacion(){
        return this -> ocupacion;
    }
    
    /*
     * La función getOcupacionAdmin, nos regresa la ocupación del empleado en el negocio,
     * en caso de ser de la parte administrativa.
     * @return ocupacionAdmin Ocupación del empleado en el negocio en el área administrativa.
     */
    Administrativo getOcupacionAdmin(){
        return this -> ocupacionAdmin;
    }
    
    /*
     * La función getOcupacionLaboral, nos regresa la ocupación del empleado en el negocio,
     * en caso de ser de la parte laboral.
     * @return ocupacionLaboral Ocupación del empleado en el negocio en el área laboral.
     */
    Laboral getOcupacionLaboral(){
        return this -> ocupacionLaboral;
    }
    
    /*
     * La función setNombre, nos ayuda a asignar el nombre del empleado.
     * @param nombre Nombre del empleado.
     */
    void setNombre(string Nombre){
        this -> nombre = Nombre;
    }
    
    /*
     * La función setEdad, nos ayuda a asignar la edad del empleado.
     * @param edad Edad del empleado.
     */
    void setEdad(int Edad){
        this -> edad = Edad;
    }
    
    /*
     * La función setEspecialidad, nos ayuda a asignar la especialidad del empleado.
     * @param Especialidad Especialidad del empleado.
     */
    void setEspecialidad(string Especialidad){
        this -> especialidad = Especialidad;
    }
    
    /*
     * La función setProductividad, nos ayuda a asignar el nivel de productividad del empleado.
     * @param Productividad Nivel de productividad del empleado.
     */
    void setProductividad(string Productividad){
        this -> productividad = Productividad;
    }
    
    /*
     * La función setPreparacion, nos ayuda a asignar el nivel de preparación
     * educativa del empleado.
     * @param Preparacion Nivel de preparación educativa del empleado.
     */
    void setPreparacion(string Preparacion){
        this -> preparacion = Preparacion;
    }
    
    /*
     * La función setEquipo, nos ayuda a asignar si el empleado sabe trabajar en equipo o no.
     * @param Equipo Sabe o no sabe trabajar en equipo.
     */
    void setEquipo(string Equipo){
        this -> equipo = Equipo;
    }
    
    /*
     * La función setAntiguedad, nos ayuda a asignar los años de antiguedad del empleado en el negocio.
     * @param Antiguedad Años de antiguedad en el negocio.
     */
    void setAntiguedad(int Antiguedad){
        this -> antiguedad = Antiguedad;
    }
    
    /*
     * La función setEstadoCivil, nos ayuda a asignar el estado civil del empleado.
     * @param Estado Estado civil del empleado.
     */
    void setEstadoCivil(string Estado){
        this -> estadoCivil = Estado;
    }
    
    /*
     * La función setSueldoEmpleados, nos ayuda a asignar el sueldo del empleado.
     */
    SueldoEmpleados setSueldoEmpleados;
    
    /*
     * La función setOcupacion, nos ayuda a asignar la ocupación del empleado.
     */
    Ocupacion setOcupacion;
    
    /*
     * La función setOcupacionAdmin, nos ayuda a asignar la ocupación del empleado,
     * en caso de ser parte de el área administrativa.
     */
    Administrativo setOcupacionAdmin;
    
    /*
     * La función setOcupacionLaboral, nos ayuda a asignar la ocupación del empleado,
     * en caso de ser parte de el área laboral.
     */
    Laboral setOcupacionLaboral;
    
    /*
     * La función llenarInfo, nos ayuda a los input de los valores,
     * para después ser asignados a los setters.
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
        int Ocupacion;
        cout << " ¿Cuál es el nombre del empleado? " << endl;
        cin.ignore();
        getline(cin, nombre);
        setNombre(nombre);
        ocupacion.llenarInfo();
        cout << " Si trabaja en el área administrativa ingrese 1, de no ser así ingrese 0 " << endl;
        cin >> Ocupacion;
        if (Ocupacion == 1){
            ocupacionAdmin.llenarInfo();
        }else if (Ocupacion == 0){
            ocupacionLaboral.llenarInfo();
        }
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
    /*
     * La función printInfo, nos ayuda a imprimir los valores que fueron ingresados
     * anteriormente, como el sueldo, IVA, sueldo por hora, etc.
     */
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

