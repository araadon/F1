#include "Carrera.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Carrera::Carrera(Circuito circuito, Temporada temporada) {
    this->circuito = circuito;
    this->temporada = temporada;
    this->puntuacionPole = 0;
    this->tiempo = 0;
}

void Carrera::iniciarCarrera() {
    srand(time(0)); // Inicializa la semilla del generador de números aleatorios
    for (auto &piloto : pilotos) {
        int posicionInicial = rand() % 100; // Genera una posición inicial aleatoria entre 0 y 99
        piloto.setPosicion(posicionInicial);
    }

    int tiempoActual = 0;
    while (tiempoActual < circuito.getLongitud()) {
        for (auto &piloto : pilotos) {
            int velocidad = rand() % 100; // Genera una velocidad aleatoria entre 0 y 99
            int posicionActualizada = piloto.getPosicion() + velocidad;
            if (posicionActualizada > circuito.getLongitud()) {
                posicionActualizada = circuito.getLongitud();
            }
            piloto.setPosicion(posicionActualizada);
        }
        tiempoActual += 1; // Simula que un segundo ha pasado
    }
}

void Carrera::registroResultado(Piloto piloto, int posicion) {
    if (resultado.find(piloto) == resultado.end()) {
        resultado[piloto] = posicion;
    }
}

void Carrera::establecerPuntuacionPole(int puntuacion) {
    this->puntuacionPole = puntuacion;
}

void Carrera::establecerTiempo(float tiempo) {
    if (tiempo > circuito.getRecordCircuito()) {
        circuito.establecerRecordCircuito(tiempo);
    }
    this->tiempo = tiempo;
}

std::map<Piloto, int> Carrera::getResultado() {
    return resultado;
}
