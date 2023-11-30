#ifndef EQUIPO_H
#define EQUIPO_H

#include <vector>
#include <string>
#include "Piloto.h"

class Equipo{
    public:
        Equipo(std::string nombreEquipo);

        std::string getNombreEquipo();
        void setNombreEquipo(std::string nombre);

        void agregarPiloto(Piloto piloto);
        int getPuntuacionEquipo();

        void calcularPuntuacionTotal();

    private:
        std::string nombreEquipo;
        std::vector<Piloto> integrantesEquipo;
        int puntuacionEquipo;
};

#endif // EQUIPO_H
