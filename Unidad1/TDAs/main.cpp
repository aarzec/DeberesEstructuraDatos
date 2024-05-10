#include "Racional.h"
#include "OperacionRacional.h"
#include <iostream>

using namespace std;

int main() {
    Racional r1(1, 2);
    Racional r2(2, 3);

    cout << "--- Números racionales ---" << endl;
    cout << "Racional 1: " << r1.toString() << endl;
    cout << "Racional 2: " << r2.toString() << endl << endl;

    Racional suma = OperacionRacional::suma(r1, r2);
    cout << r1.toString() << " + " << r2.toString() << " = " << suma.toString() << endl;

    Racional producto, productoOriginal;
    producto = productoOriginal = OperacionRacional::producto(r1, r2);
    cout << r1.toString() << " * " << r2.toString() << " = " << producto.toString() << endl;
    OperacionRacional::simplificarRacional(&producto);
    cout << "Simplificar " << productoOriginal.toString() << " = " << producto.toString() << endl << endl;

    cout << "Mín. común múltiplo entre " << r1.toString() << " y " << r2.toString() << " = " << OperacionRacional::minimoComunMultiplo(r1, r2) << endl;
    cout << "Máx. común divisor entre " << r1.toString() << " y " << r2.toString() << " = " << OperacionRacional::maximoComunDivisor(r1, r2) << endl;
    return 0;
}
