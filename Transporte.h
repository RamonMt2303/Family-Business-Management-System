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
 Inicializo mi segunda clase, que va enfocada principalmente a los métodos de transporte que tiene mi papá dependiendo de la situación, cuenta con una grúa, camionetas de carga y descarga, e intenté hacerlo lo más semejante posible.
 */
class Transporte{
    /*
     Declaro los atributos privados de mi clase transporte, enfocado a lo más importante
     */
private:
    float gasolina;
    string nombre;
    string tipoVehiculo;
    float capacidad;
    string concepto;
    float costoCombustible;
    /*
     Inicializo el constructor
     */
public:
    Transporte(){
        this -> gasolina = 0;
        this -> nombre = "";
        this -> tipoVehiculo = "";
        this -> capacidad = 0;
        this -> concepto = "";
        this -> costoCombustible = 0;
    }
    /*
     Inicializo los getters
     */
    float getGasolina(){
        return this -> gasolina;
    }
    string getNombre(){
        return this -> nombre;
    }
    string getTipoVehiculo(){
        return this -> tipoVehiculo;
    }
    float getCapacidad(){
        return this -> capacidad;
    }
    string getConcepto(){
        return this -> concepto;
    }
    float getCostoCombustible(){
        return this -> costoCombustible;
    }
    /*
     Inicializo los setters
     */
    void setGasolina(float gasolina){
        this -> gasolina = gasolina;
    }
    void setNombre(string nombre){
        this -> nombre = nombre;
    }
    void setTipoVehiculo(string vehiculo){
        this -> tipoVehiculo = vehiculo;
    }
    void setCapacidad(float capacidad){
        this -> capacidad = capacidad;
    }
    void setConcepto(string concepto){
        this -> concepto = concepto;
    }
    void setCostoCombustible(float costo){
        this -> costoCombustible = costo;
    }
    
    /*
     Uso las funciones de imprimir y llenar datos, para hacerlo más sencillo el programa,
     y mantener reusabilidad
     */
    void printInfo(){
        cout << " El vehículo es " <<getNombre() << endl;
        cout << " El tipo del vehículo es " <<getTipoVehiculo() << endl;
        cout << " El vehículo es capáz de cargar " <<getCapacidad() <<" kg " << endl;
        cout << " El concepto del uso para este vehículo es " << getConcepto() << endl;
        cout << " El vehículo tiene actualmente " <<getGasolina() <<" litros de gasolina" << endl;
        cout << " El costo por cada km recorrido de combustible es de " << getCostoCombustible() << " pesos/km " << endl;
        
    }
    void llenarInfo(){
        string nombre = "";
        float gasolina = 0;
        string tipo = "";
        float carga = 0;
        string conceptoUso = "";
        float costoCombustible = 0;
        
        cout << " ¿Cómo se llama el vehículo? " << endl;
        cin.ignore();
        getline(cin, nombre);
        setNombre(nombre);
        cout << " ¿De qué tipo es el vehículo? Carga pesada, transporte de personal, etc" << endl;
        cin.ignore();
        getline(cin, tipo);
        setTipoVehiculo(tipo);
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
