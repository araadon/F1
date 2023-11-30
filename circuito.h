#ifndef CIRCUITO_H
#define CIRCUITO_H
#include <string>

class Circuito {
public:
    Circuito(std::string nombreCircuito, std::string ubicacion, float recordCircuito);

    std::string getNombreCircuito();
    void setNombreCircuito(std::string nombre);

    std::string getUbicacion();
    void setUbicacion(std::string ubicacion);

    void actualizarRecord(float tiempo);

private:
    std::string nombreCircuito;
    std::string ubicacion;
    float recordCircuito;
};

#endif // CIRCUITO_H
