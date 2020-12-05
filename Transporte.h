//
//  Tansporte.h
//  proyecto A01702917
//
//  Created by Ramon Mtz on 19/11/20.
//

#ifndef Transporte_h
#define Transporte_h
#include <iostream>
using namespace std;

/*
* Defino mi clase Transporte, que obtiene los datos generales de los vehículos
* en el negocio y sus funciones que desempeñan.
*/
class Transporte{
private:
    float gasolina;
    string nombre;
    string tipoVehiculo;
    float capacidad;
    string concepto;
    float costoCombustible;
public:
    /*
     * Inicio el constructor de la clase.
     */
    Transporte(){
        this -> gasolina = 0;
        this -> nombre = "";
        this -> tipoVehiculo = "";
        this -> capacidad = 0;
        this -> concepto = "";
        this -> costoCombustible = 0;
    }
    
    /*
     * La función getGasolina, nos regresa la cantidad que tiene el tanque del
     * vehículo a registrar
     * @return gasolina Cantidad de combustible en el tanque del vehículo.
     */
    float getGasolina(){
        return this -> gasolina;
    }
    
    /*
     * La función getNombre, nos regresa el nombre del vehículo a registrar.
     * @return nombre Nombre del vehículo.
     */
    string getNombre(){
        return this -> nombre;
    }
    
    /*
     * La función getCapacidad, nos regresa la capacidad que puede cargar el vehículo.
     * @return capacidad Capacidad que puede cargar el vehículo.
     */
    float getCapacidad(){
        return this -> capacidad;
    }
    
    /*
     * La función getConcepto, nos regresa el concepto con el que será usado el vehículo.
     * @return concepto Concepto con el que se va a utilizar el vehículo.
     */
    string getConcepto(){
        return this -> concepto;
    }
    
    /*
     * La función getCostoCombustible, nos regresa el costo por kilómetro recorrido del
     * vehículo, para así sacar su rendimiento de combustible.
     * @return costoCombustible Costo por cada kilómetro recorrido.
     */
    float getCostoCombustible(){
        return this -> costoCombustible;
    }
    
    /*
     * La función setGasolina, nos ayuda a asignarle un valor a la gasolina dentro del vehículo.
     *@param gasolina Cantidad de asolina que está dentro del tanque de combustible.
     */
    void setGasolina(float gasolina){
        this -> gasolina = gasolina;
    }
    
    /*
     * La función setNombre, nos ayuda a asignar el nombre del vehículo.
     *@param nombre Nombre del vehículo.
     */
    void setNombre(string nombre){
        this -> nombre = nombre;
    }
    
    /*
     * La función setCapacidad, nos ayuda a asignar la capacidad que tiene cada vehículo,
     * y cuánto personal puede transportar.
     *@param capacidad Capacidad de espacios dentro del vehículo.
     */
    void setCapacidad(float capacidad){
        this -> capacidad = capacidad;
    }
    
    /*
     * La función setConcepto, nos ayuda a asignar el concepto del uso del vehículo.
     *@param concepto Concepto con el que será utilizado el vehículo.
     */
    void setConcepto(string concepto){
        this -> concepto = concepto;
    }
    
    /*
     * La función setCostoCombustible, nos ayuda a asignar el costo en pesos por cada kilómetro recorrido.
     *@param costo Costo por cada kilómetro recorrido.
     */
    void setCostoCombustible(float costo){
        this -> costoCombustible = costo;
    }
    
    /*
     * La función printInfo, nos ayuda a imprimir los valores que fueron ingresados
     * anteriormente, como el nombre, capacidad, gasolina, etc.
     */
    void printInfo(){
        cout << " El vehículo es " <<getNombre() << endl;
        cout << " El vehículo es capáz de cargar " <<getCapacidad() <<" kg " << endl;
        cout << " El concepto del uso para este vehículo es " << getConcepto() << endl;
        cout << " El vehículo tiene actualmente " <<getGasolina() <<" litros de gasolina" << endl;
        cout << " El costo por cada km recorrido de combustible es de " << getCostoCombustible() << " pesos/km " << endl;
    }
    
    /*
     * La función llenarInfo, nos ayuda a los input de los valores,
     * para después ser asignados a los setters.
     */
    void llenarInfo(){
        string nombre = "";
        float gasolina = 0;
        float carga = 0;
        string conceptoUso = "";
        float costoCombustible = 0;
        
        cout << " ¿Cómo se llama el vehículo? " << endl;
        cin.ignore();
        getline(cin, nombre);
        setNombre(nombre);
        cout << " ¿Cuánto puede cargar aprox (en kg)? " << endl;
        cin >> carga;
        setCapacidad(carga);
        cout << " ¿Cuál va a ser el concepto de uso del vehículo? (entregar material, recoger material, entregar productos terminados) " << endl;
        cin.ignore();
        getline(cin, conceptoUso);
        setConcepto(conceptoUso);
        cout << " ¿Cuánta gasolina tiene el vehículo? " << endl;
        cin >> gasolina;
        setGasolina(gasolina);
        cout << " ¿Cuánto cuesta cada km de combustible recorrido? " << endl;
        cin >> costoCombustible;
        setCostoCombustible(costoCombustible);
    }
};

#endif /* Transporte_h */
