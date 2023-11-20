#include "iostream"
#include "string"

class Equipo{

  private:
    string nombre;
    int puntuacion;
    string nombreDeIntegrante;

  public:
    Equipo();
    Equipo(string, int, string);

    string getNombreDeIntegrante() const;
    int getPuntuacion() const;
    string getNombre() const;

    void setNombre(string);
    void setPuntuacion(int);
    void setNombreDeIntegrante(string);

    void aumentarPuntuacion(int);
    void disminuirPuntuacion(int);
    void mostrarDetalles() const;


};