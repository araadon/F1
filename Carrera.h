
#include <map>
#include "Circuito.h"
#include "Temporada.h"
#include "Piloto.h"

class Carrera {
public:
    Carrera(Circuito circuito, Temporada temporada);

    void iniciarCarrera();
    void registroResultado(Piloto piloto, int posicion);
    void establecerPuntuacionPole(int puntuacion);
    void establecerTiempo(float tiempo);

    std::map<Piloto, int> getResultado();

private:
    Circuito circuito;
    std::map<Piloto, int> resultado;
    int puntuacionPole;
    float tiempo;
    Temporada temporada;
};
