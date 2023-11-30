
#include "Circuito.h"

Circuito::Circuito(std::string nombreCircuito, std::string ubicacion, float recordCircuito)
    : nombreCircuito(nombreCircuito), ubicacion(ubicacion), recordCircuito(recordCircuito) {}

std::string Circuito::getNombreCircuito() {
    return nombreCircuito;
}

void Circuito::setNombreCircuito(std::string nombre) {
    nombreCircuito = nombre;
}

std::string Circuito::getUbicacion() {
    return ubicacion;
}

void Circuito::setUbicacion(std::string ubicacion) {
    this->ubicacion = ubicacion;
}

void Circuito::actualizarRecord(float tiempo) {
    if (tiempo < recordCircuito) {
        recordCircuito = tiempo;
    }
}


