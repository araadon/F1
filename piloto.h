#include <string>
#include "Equipo.h"
#include "Carrera.h"

class Piloto {
public:
    Piloto(std::string nombre);

    std::string getNombrePiloto();
    void setNombrePiloto(std::string nombre);

    int getPuntuacion();
    void setPuntuacion(int puntuacion);

    void aumentarPuntuacion(int puntuacion);
    void disminuirPuntuacion(int puntuacion);

    int getPosicion();
    void setPosicion(int posicion);

    Equipo getEquipo();
    void setEquipo(Equipo equipo);

    Carrera getCarrera();
    void setCarrera(Carrera carrera);

private:
    std::string nombrePiloto;
    int puntuacion;
    int posicion;
    Equipo equipo;
    Carrera carrera;
};
