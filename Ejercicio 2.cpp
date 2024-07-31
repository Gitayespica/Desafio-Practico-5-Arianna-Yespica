Ejercicio 2

#include <iostream>
#include <cstdlib>
#include <ctime>

// Se declara la función que genere un número entero aleatorio entre minimo y maximo
int generarNumeroAleatorio(int min, int max) {
    return min + (rand() % (max - min + 1));
}

int main() {
    int cantidadNumeros, min, max;

    // Se solicita la cantidad de números a generar
    std::cout << "Ingrese la cantidad de numeros a generar: ";
    std::cin >> cantidadNumeros;

    // Se solicita el rango de números
    std::cout << "Ingrese el numero minimo: ";
    std::cin >> min;
    std::cout << "Ingrese el numero maximo: ";
    std::cin >> max;

    // Se inicia la generación de números aleatorios
    srand(time(0));

    // Se calculan y muestran los números aleatorios
    std::cout << "Numeros aleatorios:" << std::endl;
    for (int i = 0; i < cantidadNumeros; i++) {
        int numeroAleatorio = generarNumeroAleatorio(min, max);
        std::cout << numeroAleatorio << std::endl;
    }

    return 0;
}