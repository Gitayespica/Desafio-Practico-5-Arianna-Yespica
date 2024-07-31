Ejercicio 1

#include <iostream>
#include <cmath>

// Constante para PI
const double PI = 3.141592653589793238463;

// Función de cálculo de área de un círculo
double calcularAreaCirculo(double radio) {
    return pow(radio, 2) * PI;
}

// Función de cálculo de área de un cuadrado
double calcularAreaCuadrado(double lado) {
    return lado * lado;
}

/// Función de cálculo de área de un triángulo
double calcularAreaTriangulo(double base, double altura) {
    return (base * altura) / 2;
}

// Declarar variables

int main() {
    int opcion;
    double radio, lado, base, altura;

    std::cout << "Calculadora de areas" << std::endl;
    std::cout << "--------------------" << std::endl;
    std::cout << "1. Circulo" << std::endl;
    std::cout << "2. Cuadrado" << std::endl;
    std::cout << "3. Triangulo" << std::endl;
    std::cout << "Ingrese la opcion que solicita: ";
    std::cin >> opcion;

    // Inicio de adjuntar datos y mostrar resultados

    switch (opcion) {
        case 1:
            std::cout << "Ingrese el radio del circulo: ";
            std::cin >> radio;
            std::cout << "El area del circulo es: " << calcularAreaCirculo(radio) << std::endl;
            break;
        case 2:
            std::cout << "Ingrese el lado del cuadrado: ";
            std::cin >> lado;
            std::cout << "El area del cuadrado es: " << calcularAreaCuadrado(lado) << std::endl;
            break;
        case 3:
            std::cout << "Ingrese la base del triangulo: ";
            std::cin >> base;
            std::cout << "Ingrese la altura del triangulo: ";
            std::cin >> altura;
            std::cout << "El area del triángulo es: " << calcularAreaTriangulo(base, altura) << std::endl;
            break;
        default:
            std::cout << "Opcion invalida" << std::endl;
            break;
    }

    return 0;
}