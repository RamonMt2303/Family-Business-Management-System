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
    SueldoEmpleados(){
        this -> IVA = 0;
        this -> sueldo = 0;
        this -> dias = 0;
        this -> horas = 0;
        this -> minutos = 0;
        this -> segundos = 0;
        this -> semana = 0;
    }
    
    float getIVA(){
        return this -> IVA;
    }
    float getSueldo(){
        return this -> sueldo;
    }
    float getSueldoDias(){
        return this -> dias;
    }
    float getSueldoHoras(){
        return this -> horas;
    }
    float getSueldoMinutos(){
        return this -> minutos;
    }
    float getSueldoSemana(){
        return this -> semana;
    }
    float getSueldoSegundos(){
        return this -> segundos;
    }
    void setIVA(float sueldo){
        this -> IVA = sueldo * 0.16;
    }
    void setSueldo(float Sueldo){
        this -> sueldo = Sueldo;
    }
    void setSueldoDias(float sueldo){
        this -> dias = sueldo / 30;
    }
    void setSueldoSemana(float sueldo){
        this -> semana = sueldo / 4.28571;
    }
    void setSueldoHoras(float sueldo){
        this -> horas = sueldo / 720;
    }
    void setSueldoMinutos(float sueldo){
        this -> minutos = sueldo / 43200;
    }
    void setSueldoSegundos(float sueldo){
        this -> segundos = sueldo / 2592000;
    }
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
