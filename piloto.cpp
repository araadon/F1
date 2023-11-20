#include "iostream"
#include "string"
#include "Piloto.h"

    Piloto() {
        nombre = "";
        equipo = "";
        punto = 0;
        edad = 0;
        estadoFisico = "";
    }
    
    Piloto(string n, string e, int p, int ed, string ef) {
        nombre = n;
        equipo = e;
        punto = p;
        edad = ed;
        estadoFisico = ef;
    }

    string getNombre() const {
        return nombre;
    }
    
    string getEquipo() const {
        return equipo;
    }
    
    int getPuntos() const {
        return punto;
    }
    
    int getEdad() const {
        return edad;
    }
    
    string getEstadoFisico() const {
        return estadoFisico;
    }
    
    void setNombre(string n) {
        nombre = n;
    }
    
    void setEquipo(string e) {
        equipo = e;
    }
    
    void setPuntos(int p) {
        punto = p;
    }
    
    void setEdad(int ed) {
        edad = ed;
    }
    
    void setEstadoFisico(string ef) {
        estadoFisico = ef;
    }
};
