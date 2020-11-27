//
//  Ocupacion.h
//  proyecto A01702917
//
//  Created by Ramon Mtz on 27/11/20.
//

#ifndef Ocupacion_h
#define Ocupacion_h
#include <iostream>
using namespace std;

class Ocupacion{
private:
    string posicion;
    float horasTrabajo;
public:
    Ocupacion(){
        this -> posicion = "";
        this -> horasTrabajo = 0;
    }
    string getPosicion(){
        return this -> posicion;
    }
    float getHorasTrabajo(){
        return this -> horasTrabajo;
    }
    void setPosicion(string posicion){
        this -> posicion = posicion;
    }
    void setHorasTrabajo(float horasTrabajo){
        this -> horasTrabajo = horasTrabajo;
    }
    void llenarInfo(){
        string posicion;
        string actividades;
        float horasTrabajo;
        cout << " ¿Qué posición ocupa en el negocio? " << endl;
        cin >> posicion;
        setPosicion(posicion);
        cout << " ¿Cuántas horas trabaja al día? " << endl;
        cin >> horasTrabajo;
        setHorasTrabajo(horasTrabajo);
    }
    void printInfo(){
        cout << " Su posición en el negocio es: " << getPosicion() << endl;
        cout << " Trabaja " << getHorasTrabajo() << " horas al día " << endl;
    }
};
class Administrativo : public Ocupacion{
private:
    int administrarCuentas;
    int correos;
    int realizarDocumentos;
public:
    Administrativo():Ocupacion(){
    this -> administrarCuentas = 0;
    this -> correos = 0;
    this -> realizarDocumentos = 0;
    }
    int getAdministrarCuentas(){
        return this -> administrarCuentas;
    }
    int getCorreosEnviados(){
        return this -> correos;
    }
    int getDocumentosRealizados(){
        return this -> realizarDocumentos;
    }
    void setAdministrarCuentas(int cuentas){
        this -> administrarCuentas = cuentas;
    }
    void setCorreosEnviados(int correo){
        this -> correos = correo;
    }
    void setDocumentosRealizados(int realizar){
        this -> realizarDocumentos = realizar;
    }
    void llenarInfo(){
        int administrarCuentas;
        int correos;
        int realizarDocumentos;
        cout << " ¿Cuántas cuentas maneja del negocio? " << endl;
        cin >> administrarCuentas;
        setAdministrarCuentas(administrarCuentas);
        cout << " ¿Cuántos correos manda al día? " << endl;
        cin >> correos;
        setCorreosEnviados(correos);
        cout << " ¿Cuántos documentos realiza al día? " << endl;
        cin >> realizarDocumentos;
        setDocumentosRealizados(realizarDocumentos);
    }
    void printInfo(){
        cout << " Maneja en total " << getAdministrarCuentas() << " cuentas del negocio " << endl;
        cout << " Al día manda " << getCorreosEnviados() << " correos " << endl;
        cout << " Al día realiza " << getDocumentosRealizados() << " documentos administrativos " << endl;
    }
};
class Laboral : public Ocupacion{
private:
    string actividades;
    int maniobrasDiarias;
    int entregaOxigenoDiario;
public:
    Laboral():Ocupacion(){
        this -> actividades = "";
        this -> maniobrasDiarias = 0;
        this -> entregaOxigenoDiario = 0;
    }
    string getActividades(){
        return this -> actividades;
    }
    int getManiobras(){
        return this -> maniobrasDiarias;
    }
    int getEntregaOxigeno(){
        return this -> entregaOxigenoDiario;
    }
    void setActividades(string acts){
        this -> actividades = acts;
    }
    void setManiobras(int maniobras){
        this -> maniobrasDiarias = maniobras;
    }
    void setEntregaOxigeno(int entrega){
        this -> entregaOxigenoDiario = entrega;
    }
    void llenarInfo(){
        string actividades;
        int maniobrasDiarias;
        int entregaOxigenoDiario;
        cout << " ¿Qué actividades realiza? " << endl;
        cin.ignore();
        getline(cin,actividades);
        setActividades(actividades);
        cout << " ¿Cuántas maniobras realiza diario? " << endl;
        cin >> maniobrasDiarias;
        setManiobras(maniobrasDiarias);
        cout << " ¿Cuántos tanques de oxigeno entrega diario? " << endl;
        cin >> entregaOxigenoDiario;
        setEntregaOxigeno(entregaOxigenoDiario);
    }
    void printInfo(){
        cout << " En el día realiza " << getActividades() << endl;
        cout << " Al día realiza " << getManiobras() << " maniobras " << endl;
        cout << " Entrega " << getEntregaOxigeno() << " tanques de oxígeno diarios " << endl;
    }
};
#endif /* Ocupacion_h */
