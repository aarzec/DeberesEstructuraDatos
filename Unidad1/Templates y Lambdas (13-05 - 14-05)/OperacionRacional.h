/***********************************************************************
 * Module:  Racional.h
 * Author:  Andrés Romero
 * Modified: jueves, 9 de mayo de 2024 04:16:58 p. m.
 * Purpose: Declaration of the class Racional
 ***********************************************************************/

#if !defined(_OperacionRacionalHeader)
#define _OperacionRacionalHeader

#include "Racional.h"

class OperacionRacional
{
public:
    static Racional suma(Racional r1, Racional r2);
    static Racional producto(Racional r1, Racional r2);

    static int minimoComunMultiplo(Racional r1, Racional r2);
    static int maximoComunDivisor(Racional r1, Racional r2);

    static void imprimirRacional(Racional r);
    static void simplificarRacional(Racional *r);
protected:
private:
};

#endif
