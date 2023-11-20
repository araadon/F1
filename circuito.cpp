#include "circuito.h"

    Circuito() {
        nombre = "";
        longitud = 0;
        curva = 0;
        recordDelCircuito = 0.0;
        ultimoPoledelCircuito = "";
    }

    Circuito(string n, int l, int c, double r, string u) {
        nombre = n;
        longitud = l;
        curva = c;
        recordDelCircuito = r;
        ultimoPoledelCircuito = u;
    }

    string getNombre() const {
        return nombre;
    }

    int getLongitud() const {
        return longitud;
    }

    int getCurva() const {
        return curva;
    }

    double getRecordDelCircuito() const {
        return recordDelCircuito;
    }

    string getUltimoPoledelCircuito() const {
        return ultimoPoledelCircuito;
    }

    void setLongitud(int l) {
        longitud = l;
    }

    void setNombre(string n) {
        nombre = n;
    }

    void setCurva(int c) {
        curva = c;
    }

    void setRecordDelCircuito(double r) {
        recordDelCircuito = r;
    }

    void setUltimoPoledelCircuito(string u) {
        ultimoPoledelCircuito = u;
    }
};
