#include "iostream"
#include "string"
//#include "equipo.h"

class Piloto{

    private:
    string nombre;
    string equipo;
    int punto;
    int edad;
    string estadoFisico;

    public:

    Piloto();
    Piloto(string, string, int, int, string);

    string getNombre() const;
    string getEquipo() const;
    int getPuntos() const;
    int getEdad() const;
    string getEstadoFisico() const;
    
    void setNombre(string);
    void setEquipo(string);
    void setPuntos(int);
    void setEdad(int);
    void setEstadoFisico(string);
};

