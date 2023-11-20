Equipo(string nombre, int puntuacion, string nombreDeIntegrante){
  nombre = nombre;
  puntuacion = puntuacion;
  nombreDeIntegrante = nombreDeIntegrante;
};

string getNombreDeIntegrante() const{
  return nombreDeIntegrante;
};

int getPuntuacion() const{
  return puntuacion;
};

string getNombre() const{
  return nombre;
};

void setNombre(string nombre){
  nombre = nombre;
};

void setPuntuacion(int puntuacion){
  puntuacion = puntuacion;
};

void setNombreDeIntegrante(string nombreDeIntegrante){
  nombreDeIntegrante = nombreDeIntegrante;
};

void aumentarPuntuacion(int puntos){
  puntuacion += puntos;
};

void disminuirPuntuacion(int puntos){
  puntuacion -= puntos;
};

void mostrarDetalles() const{
  cout << "Nombre del Equipo: " << nombre << endl;
  cout << "Puntuacion: " << puntuacion << endl;
  cout << "Nombre del Integrante: " << nombreDeIntegrante << endl;
};
