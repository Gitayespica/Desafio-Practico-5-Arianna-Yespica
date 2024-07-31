Ejercicio 4

#include <iostream>
#include <string>

using namespace std;

// Se declaran las variables

struct Producto {
    string nombre;
    double precio;
    int cantidad;
};

// Función para calcular el porcentaje solicitado

double calcularDescuento(double subtotal, double porcentaje) {
    return subtotal * (porcentaje / 100);
}

// Inicio de proceso de ingreso de los datos

int main() {
    string nombreCliente;
    cout << "Ingrese el nombre del cliente: ";
    getline(cin, nombreCliente);

    int numProductos;
    cout << "Ingrese el numero de productos: ";
    cin >> numProductos;

    Producto productos[numProductos];
    
    // Cálculo de los precios según los productos 

    double subtotal = 0.0;
    for (int i = 0; i < numProductos; i++) {
        cout << "Ingrese el nombre del producto " << (i + 1) << ": ";
        cin.ignore();
        getline(cin, productos[i].nombre);

        cout << "Ingrese el precio del producto " << (i + 1) << ": ";
        cin >> productos[i].precio;

        cout << "Ingrese la cantidad del producto " << (i + 1) << ": ";
        cin >> productos[i].cantidad;

        subtotal += productos[i].precio * productos[i].cantidad;
        cout << endl;
    }

 // Cálculo de la cifra total

    double descuento = 0.0;
    if (subtotal > 1000) {
        descuento = calcularDescuento(subtotal, 20);
    }

    double total = subtotal - descuento;

// Muestra de los datos finales

    cout << "Nombre del cliente: " << nombreCliente << endl;
    cout << "Productos comprados:" << endl;
    for (int i = 0; i < numProductos; i++) {
        cout << "Producto: " << productos[i].nombre << ", Precio: " << productos[i].precio << ", Cantidad: " << productos[i].cantidad << endl;
    }
    cout << "Subtotal: " << subtotal << endl;
    cout << "Descuento: " << descuento << endl;
    cout << "Total a pagar: " << total << endl;

    return 0;
}