#include "Temporada.h"

Temporada::Temporada(int fecha)
: fecha(fecha), ganadorTemporada() {}

int Temporada::getFecha() {
    return fecha;
}

void Temporada::setFecha(int Fecha) {
    fecha = Fecha;
}

void Temporada::agregarCarrera(Carrera carrera) {
    carreras.push_back(carrera);
}

Piloto Temporada::calcularGanadorTemporada() {
    std::map<Piloto, int> puntosPorPiloto;

    for (const Carrera& carrera : carreras) {
        std::vector<Piloto> resultado = carrera.getResultado();
        int puntos = 25;
        for (const Piloto& piloto : resultado) {
            puntosPorPiloto[piloto] += puntos;
            if (puntos > 1) {
                puntos -= 1;
            }
        }
    }

    Piloto ganador;
    int maxPuntos = 0;

    for (const auto& pair : puntosPorPiloto) {
        if (pair.second > maxPuntos) {
            maxPuntos = pair.second;
            ganador = pair.first;
        }
    }

    ganadorTemporada = ganador;
    return ganador;
}
