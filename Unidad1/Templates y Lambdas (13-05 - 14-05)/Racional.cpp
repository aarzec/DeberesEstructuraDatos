/***********************************************************************
 * Module:  Racional.cpp
 * Author:  Andrés Romero
 * Modified: jueves, 9 de mayo de 2024 04:16:58 p. m.
 * Purpose: Implementation of the class Racional
 ***********************************************************************/

#include "Racional.h"
#include <iostream>
#include <functional>

using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       Racional::getDenominador()
// Purpose:    Implementation of Racional::getDenominador()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Racional::getDenominador(void)
{
   return denominador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Racional::setDenominador(int newDenominador)
// Purpose:    Implementation of Racional::setDenominador()
// Parameters:
// - newDenominador
// Return:     void
////////////////////////////////////////////////////////////////////////

void Racional::setDenominador(int newDenominador)
{
   denominador = newDenominador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Racional::Racional()
// Purpose:    Implementation of Racional::Racional()
// Return:     
////////////////////////////////////////////////////////////////////////

Racional::Racional()
{
}

////////////////////////////////////////////////////////////////////////
// Name:       Racional::Racional(int num, int den)
// Purpose:    Implementation of Racional::Racional()
// Parameters:
// - num
// - den
// Return:     Racional
////////////////////////////////////////////////////////////////////////

Racional::Racional(int num, int den){
   numerador = num;
   denominador = den;
}

Racional::Racional(Racional r1, Racional r2, function<Racional(Racional, Racional)> fn){
   Racional res = fn(r1, r2);
   numerador = res.getNumerador();
   denominador = res.getDenominador();
}

Racional::Racional(Racional r1, function<Racional(Racional)> fn){
   Racional res = fn(r1);
   numerador = res.getNumerador();
   denominador = res.getDenominador();
}

////////////////////////////////////////////////////////////////////////
// Name:       Racional::getNumerador()
// Purpose:    Implementation of Racional::getNumerador()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Racional::getNumerador(void)
{
   return numerador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Racional::setNumerador(int newNumerador)
// Purpose:    Implementation of Racional::setNumerador()
// Parameters:
// - newNumerador
// Return:     void
////////////////////////////////////////////////////////////////////////

void Racional::setNumerador(int newNumerador)
{
   numerador = newNumerador;
}

string Racional::toString() {
   return to_string(numerador) + "/" + to_string(denominador);
}