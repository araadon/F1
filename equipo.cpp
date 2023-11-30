#include "Equipo.h"

Equipo::Equipo(std::string nombreEquipo)
: nombreEquipo(nombreEquipo), integrantesEquipo(), puntuacionEquipo(0) {}

std::string Equipo::getNombreEquipo() {
    return nombreEquipo;
}

void Equipo::setNombreEquipo(std::string nombre) {
    nombreEquipo = nombre;
}

void Equipo::agregarPiloto(Piloto piloto) {
    integrantesEquipo.push_back(piloto);
}

int Equipo::getPuntuacionEquipo() {
    return puntuacionEquipo;
}

void Equipo::calcularPuntuacionTotal() {
    puntuacionEquipo = 0;
    for (Piloto piloto : integrantesEquipo) {
        puntuacionEquipo += piloto.getPuntuacion();
    }
}
