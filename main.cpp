#include <iostream>
#include "Circuito.h"
#include "Temporada.h"
#include "Piloto.h"
#include "Equipo.h"
#include "Carrera.h"
int main() {
    // Crear circuito, temporada y pilotos
    Circuito circuito("Monza", "Italia", 1);
    Temporada temporada(2022);

    Equipo equipo1("Ferrari");
    Equipo equipo2("Mercedes");

    Piloto piloto1("Piloto 1", 25, equipo1);
    Piloto piloto2("Piloto 2", 24, equipo1);
    Piloto piloto3("Piloto 3", 23, equipo2);
    Piloto piloto4("Piloto 4", 22, equipo2);

    // Crear carreras
    Carrera carrera1(circuito, temporada);
    Carrera carrera2(circuito, temporada);

    // Iniciar carreras y registrar resultados
    carrera1.iniciarCarrera();
    carrera1.registroResultado(piloto1, 1);
    carrera1.registroResultado(piloto2, 2);
    carrera1.registroResultado(piloto3, 3);
    carrera1.registroResultado(piloto4, 4);

    carrera2.iniciarCarrera();
    carrera2.registroResultado(piloto4, 1);
    carrera2.registroResultado(piloto3, 2);
    carrera2.registroResultado(piloto2, 3);
    carrera2.registroResultado(piloto1, 4);

    // Agregar carreras a la temporada
    temporada.agregarCarrera(carrera1);
    temporada.agregarCarrera(carrera2);

    // Calcular y mostrar el ganador de la temporada
    Piloto ganador = temporada.calcularGanadorTemporada();
    std::cout << "El ganador de la temporada " << temporada.getFecha() << " es: " << ganador.getNombrePiloto() << std::endl;

    return 0;
}

int opcion;
    bool salir = false;

    do {
        std::cout << "Menu principal:" << std::endl;
        std::cout << "1. Iniciar carreras" << std::endl;
        std::cout << "2. Registrar resultados" << std::endl;
        std::cout << "3. Calcular y mostrar el ganador de la temporada" << std::endl;
        std::cout << "4. Salir" << std::endl;
        std::cout << "Seleccione una opcion: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                carrera1.iniciarCarrera();
                carrera2.iniciarCarrera();
                break;
            case 2:
                carrera1.registroResultado(piloto1, 1);
                carrera1.registroResultado(piloto2, 2);
                carrera1.registroResultado(piloto3, 3);
                carrera1.registroResultado(piloto4, 4);

                carrera2.registroResultado(piloto4, 1);
                carrera2.registroResultado(piloto3, 2);
                carrera2.registroResultado(piloto2, 3);
                carrera2.registroResultado(piloto1, 4);
                break;
            case 3:
                temporada.agregarCarrera(carrera1);
                temporada.agregarCarrera(carrera2);

                Piloto ganador = temporada.calcularGanadorTemporada();
                std::cout << "El ganador de la temporada " << temporada.getFecha() << " es: " << ganador.getNombrePiloto() << std::endl;
                break;
            case 4:
                salir = true;
                break;
            default:
                std::cout << "Opcion no valida" << std::endl;
                break;
        }
    } while (!salir);

    return 0;
