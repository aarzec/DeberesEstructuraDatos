#include "OperacionRacional.h"
#include "Mat.h"
#include "Racional.h"
#include <iostream>

Racional OperacionRacional::suma(Racional r1, Racional r2)
{
    Racional resultado;
    int mcm = OperacionRacional::minimoComunMultiplo(r1, r2);
    resultado.setNumerador(mcm / r1.getDenominador() * r1.getNumerador() + mcm / r2.getDenominador() * r2.getNumerador());
    resultado.setDenominador(mcm);
    return resultado;
}

Racional OperacionRacional::producto(Racional r1, Racional r2)
{
    Racional resultado;
    resultado.setNumerador(r1.getNumerador() * r2.getNumerador());
    resultado.setDenominador(r1.getDenominador() * r2.getDenominador());
    return resultado;
}

int OperacionRacional::minimoComunMultiplo(Racional r1, Racional r2)
{
    int mcm = Mat::minimoComunMultiplo(r1.getDenominador(), r2.getDenominador());
    return mcm;
}

int OperacionRacional::maximoComunDivisor(Racional r1, Racional r2)
{
    int mcd = Mat::maximoComunDivisor(r1.getDenominador(), r2.getDenominador());
    return mcd;
}

void OperacionRacional::imprimirRacional(Racional r)
{
    std::cout << r.toString() << std::endl;
}

void OperacionRacional::simplificarRacional(Racional *r)
{
    int mcd = Mat::maximoComunDivisor(r->getNumerador(), r->getDenominador());
    r->setNumerador(r->getNumerador() / mcd);
    r->setDenominador(r->getDenominador() / mcd);
}
