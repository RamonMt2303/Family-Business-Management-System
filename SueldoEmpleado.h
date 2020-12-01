//
//  SueldoEmpleado.h
//  proyecto A01702917
//
//  Created by Ramon Mtz on 24/11/20.
//

#ifndef SueldoEmpleado_h
#define SueldoEmpleado_h
#include <iostream>
using namespace std;
/*
 * Defino mi clase Sueldo empleados.
 */
class SueldoEmpleados{
private:
    float IVA;
    float sueldo;
    float dias;
    float semana;
    float horas;
    float minutos;
    float segundos;
public:
    /*
     * Inicializo el constructor.
     */
    SueldoEmpleados(){
        this -> IVA = 0;
        this -> sueldo = 0;
        this -> dias = 0;
        this -> horas = 0;
        this -> minutos = 0;
        this -> segundos = 0;
        this -> semana = 0;
    }
    /*
     * La función getIVA, nos regresa el IVA sobre el sueldo del empleado.
     * @return IVA Cantidad de dinero, que representa el IVA en el sueldo.
     */
    float getIVA(){
        return this -> IVA;
    }
    /*
     * La función getSueldo, nos regresa el salario del empleado.
     * @return sueldo Sueldo del empleado.
     */
    float getSueldo(){
        return this -> sueldo;
    }
    /*
     * La función getSueldoDias, nos regresa el salario del empleado por cada día.
     * @return dias Sueldo del empleado por día.
     */
    float getSueldoDias(){
        return this -> dias;
    }
    /*
     * La función getSueldoHoras, nos regresa el salario del empleado por cada hora.
     * @return horas Sueldo del empleado por hora.
     */
    float getSueldoHoras(){
        return this -> horas;
    }
    /*
     * La función getSueldoMinutos, nos regresa el salario del empleado por cada minuto.
     * @return minutos Sueldo del empleado por cada minuto.
     */
    float getSueldoMinutos(){
        return this -> minutos;
    }
    /*
     * La función getSueldoSemana, nos regresa el salario del empleado por cada semana.
     * @return semana Sueldo del empleado por semana.
     */
    float getSueldoSemana(){
        return this -> semana;
    }
    /*
     * La función getSueldoSegundos, nos regresa el salario del empleado por cada segundo.
     * @return segundos Sueldo del empleado por segundo.
     */
    float getSueldoSegundos(){
        return this -> segundos;
    }
    /*
     * La función setIVA, nos ayuda a asignar el IVA sobre el sueldo.
     * @param sueldo Porcentaje de IVA sobre el sueldo.
     */
    void setIVA(float sueldo){
        this -> IVA = sueldo * 0.16;
    }
    /*
     * La función setSueldo, nos ayuda a asignar el sueldo del empleado.
     * @param Sueldo Sueldo del empleado.
     */
    void setSueldo(float Sueldo){
        this -> sueldo = Sueldo;
    }
    /*
     * La función setSueldoDias, nos ayuda a asignar el sueldo del empleado por día.
     * @param sueldo Sueldo del empleado por cada día.
     */
    void setSueldoDias(float sueldo){
        this -> dias = sueldo / 30;
    }
    /*
     * La función setSueldoSemana, nos ayuda a asignar el sueldo del empleado por semana.
     * @param sueldo Sueldo del empleado por cada semana.
     */
    void setSueldoSemana(float sueldo){
        this -> semana = sueldo / 4.28571;
    }
    /*
     * La función setSueldoHoras, nos ayuda a asignar el sueldo del empleado por hora.
     * @param sueldo Sueldo del empleado por cada hora.
     */
    void setSueldoHoras(float sueldo){
        this -> horas = sueldo / 720;
    }
    /*
     * La función setSueldoMinutos, nos ayuda a asignar el sueldo del empleado por minuto.
     * @param sueldo Sueldo del empleado por cada minuto.
     */
    void setSueldoMinutos(float sueldo){
        this -> minutos = sueldo / 43200;
    }
    /*
     * La función setSueldoSegundos, nos ayuda a asignar el sueldo del empleado por segundo.
     * @param sueldo Sueldo del empleado por cada segundo.
     */
    void setSueldoSegundos(float sueldo){
        this -> segundos = sueldo / 2592000;
    }
    /*
     * La función llenarInfo, nos ayuda a los input de los valores, para después ser asignados a los setters.
     */
    void llenarInfo(){
        float sueldo;
        cout << " ¿Cuál es el sueldo del empleado? " << endl;
        cin >> sueldo;
        setSueldo(sueldo);
        setIVA(sueldo);
        setSueldoDias(sueldo);
        setSueldoHoras(sueldo);
        setSueldoSemana(sueldo);
        setSueldoMinutos(sueldo);
        setSueldoSegundos(sueldo);
    }
    /*
     * La función printInfo, nos ayuda a imprimir los valores que fueron ingresados anteriormente, como el sueldo, IVA, sueldo por hora, etc.
     */
    void printInfo(){
        cout << " El sueldo es de: " << getSueldo() << " pesos " << endl;
        cout << " El 16% de su sueldo que va para el SAT es de: " <<getIVA() << " pesos " << endl;
        cout << " Gana al día: " << getSueldoDias() << " pesos " << endl;
        cout << " A la semana: " << getSueldoSemana() << " pesos " << endl;
        cout << " Por hora " << getSueldoHoras() << " pesos " << endl;
        cout << " Por minuto " << getSueldoMinutos() << " pesos " << endl;
        cout << " Por segundo " << getSueldoSegundos() << " pesos " << endl;
    }
    
};
#endif /* SueldoEmpleado_h */
