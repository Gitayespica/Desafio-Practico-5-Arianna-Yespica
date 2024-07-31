Ejercicio 3

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>

// Se genera el procedimiento para simular el ascensor subiendo
void subirAscensor(int pisoActual, int pisoDestino) {
    for (int i = pisoActual; i <= pisoDestino; i++) {
        std::cout << "El ascensor se encuentra en el piso " << i << std::endl;
        
        // Se simula un retraso para que se vea el proceso
        usleep(1000000); 
    }
}

// Se genera el procedimiento para simular el ascensor bajando
void bajarAscensor(int pisoActual, int pisoDestino) {
    for (int i = pisoActual; i >= pisoDestino; i--) {
        std::cout << "El ascensor se encuentra en el piso " << i << std::endl;
        
        // Se simula un retraso para que se vea el proceso
        usleep(1000000); 
    }
}

// Procedimiento para abrir y cerrar las puertas del ascensor
void abrirCerrarPuertas() {
    std::cout << "Se han abierto las puertas del ascensor" << std::endl;
    
    // Se simula un retraso para que se vea el proceso
    usleep(2000000); 
    std::cout << "Se han cerrado las puertas del ascensor" << std::endl;
}

int main() {
    int pisoActual = 1;
    int pisoDestino;

    // Empieza el ascensor en el piso 1
    std::cout << "El ascensor se encuentra en el piso " << pisoActual << std::endl;

    //Se solicita el piso al que desea ir
    std::cout << "Ingrese el piso al que desea ir: ";
    std::cin >> pisoDestino;

    // Se abren las puertas del ascensor
    abrirCerrarPuertas();

    // Se sube o baja el ascensor según sea necesario
    if (pisoDestino > pisoActual) {
        std::cout << "El ascensor va subiendo" << std::endl;
        subirAscensor(pisoActual, pisoDestino);
    } else if (pisoDestino < pisoActual) {
        std::cout << "El ascensor va bajando" << std::endl;
        bajarAscensor(pisoActual, pisoDestino);
    } else {
        std::cout << "Ya se encuentra en el piso " << pisoDestino << std::endl;
    }

    // Se abren las puertas del ascensor al llegar al destino
    abrirCerrarPuertas();

    return 0;
}