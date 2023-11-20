#include "iostream"
#include "string"

class Circuito{

  private:
    string nombre;
    int longitud;
    int curva;
    double recordDelCircuito;
    string ultimoPoledelCircuito; 

  public:
    Circuito();
    Circuito(string, int, int, double, string);


    string getNombre() const;
    int getLongitud() const;
    int getCurva() const;
    double getRecordDelCircuito() const;
    string getUltimoPoledelCircuito() const;
    
    void setNombre(string);
    void setLongitud(int);
    void setCurva(int);
    void setRecordDelCircuito(double);
    void setUltimoPoledelCircuito(string);
};