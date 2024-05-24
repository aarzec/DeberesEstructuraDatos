#include "Racional.h"
#include "OperacionRacional.h"
#include <iostream>

using namespace std;

int main() {
    Racional r1(1, 2);
    Racional r2(2, 3);

    // Las siguientes funciones Lambda operan como parámetro del constructor
    // - Suma de dos racionales
    Racional r3(r1, r2, [](Racional r_1, Racional r_2) {
        Racional resultado = OperacionRacional::suma(r_1, r_2);
        return  resultado;
    });
    // - Resta de dos racionales
    Racional r4(r1, r2, [](Racional r_1, Racional r_2) {
        r_2.setNumerador(r_2.getNumerador() * -1);
        Racional resultado = OperacionRacional::suma(r_1, r_2);
        return  resultado;
    });
    // - Representación de un racional simplificado
    Racional r5(r1, [](Racional r_1) {
        OperacionRacional::simplificarRacional(&r_1);
        return r_1;
    });
    // - Cuadrado de la suma de dos racionales
    Racional r6(r1, r2, [](Racional r_1, Racional r_2) {
        Racional resultado = OperacionRacional::suma(r_1, r_2);
        resultado.setNumerador(resultado.getNumerador() * resultado.getNumerador());
        resultado.setDenominador(resultado.getDenominador() * resultado.getDenominador());
        return  resultado;
    });

    cout << "--- Números racionales ---" << endl;
    cout << "Racional 1: " << r1.toString() << endl;
    cout << "Racional 2: " << r2.toString() << endl;
    cout << "Racional 3: " << r3.toString() << endl;
    cout << "Racional 4: " << r4.toString() << endl;
    cout << "Racional 5: " << r5.toString() << endl;
    cout << "Racional 6: " << r6.toString() << endl;
    cout << endl;

    cout << "--- Lambdas ---" << endl;
    // Las siguientes funciones Lambda operan como funciones independientes
    cout << "Suma de 2 números: " << [](int a, int b) -> int {return a + b;}(1, 2) << endl;
    cout << "Producto de 3 números: " << [](int a, int b, int c) -> int {return a * b * c;}(1, 2, 3) << endl;
    cout << "Mínimo de 3 números: " << [](int a, int b, int c) -> int {
            if (a < b && a < c) {
                return a;
            } else if (b < a && b < c) {
                return b;
            } else {
                return c;
            }
        }(4, 8, 2) << endl;
    cout << "Máximo de 3 números: " << [](int a, int b, int c) -> int {
        if (a > b && a > c) {
            return a;
        } else if (b > a && b > c) {
            return b;
        } else {
            return c;
        }
    }(4, 8, 2) << endl;
    cout << endl; 

    cout << "--- Normales ---" << endl;
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
