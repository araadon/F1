#ifndef TEMPORADA_H
#define TEMPORADA_H

#include <list>
#include "Carrera.h"
#include "Piloto.h"

class Temporada {
public:
    Temporada(int fecha);

    int getFecha();
    void setFecha(int Fecha);

    void agregarCarrera(Carrera carrera);
    Piloto calcularGanadorTemporada();

private:
    int fecha;
    std::list<Carrera> carreras;
    Piloto ganadorTemporada;
};

#endif // TEMPORADA_H
