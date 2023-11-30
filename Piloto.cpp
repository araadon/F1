#include "Piloto.h"

Piloto::Piloto(std::string nombre)
: nombrePiloto(nombre), puntuacion(0), posicion(0), equipo(), carrera() {}

std::string Piloto::getNombrePiloto() {
    return nombrePiloto;
}

void Piloto::setNombrePiloto(std::string nombre) {
    nombrePiloto = nombre;
}

int Piloto::getPuntuacion() {
    return puntuacion;
}

void Piloto::setPuntuacion(int puntuacion) {
    this->puntuacion = puntuacion;
}

void Piloto::aumentarPuntuacion(int puntuacion) {
    this->puntuacion += puntuacion;
}

void Piloto::disminuirPuntuacion(int puntuacion) {
    this->puntuacion -= puntuacion;
}

int Piloto::getPosicion() {
    return posicion;
}

void Piloto::setPosicion(int posicion) {
    this->posicion = posicion;
}

Equipo Piloto::getEquipo() {
    return equipo;
}

void Piloto::setEquipo(Equipo equipo) {
    this->equipo = equipo;
}

Carrera Piloto::getCarrera() {
    return carrera;
}

void Piloto::setCarrera(Carrera carrera) {
    this->carrera = carrera;
}
