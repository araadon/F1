#include "iostream"
#include "string"

class Vehiculo{

  private:
    string modelo;
    string marca;
    float velocidad;
    string color;

  public:
    Vehiculo();
    Vehiculo(string, int, string);

    string getModelo() const;
    string getMarca() const;
    float getVelocidad() const;
    string getColor() const;

    void setModelo(string);
    void setMarca(string);
    void setVelocidad(int);
    void setColor(string);

};