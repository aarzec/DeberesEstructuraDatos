/***********************************************************************
 * Module:  Racional.h
 * Author:  Andrés Romero
 * Modified: 14 de mayo de 2024
 * Purpose: Declaration of the class Racional
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Racional_h)
#define __Class_Diagram_1_Racional_h

#include "Racional.h"
#include <iostream>
#include <functional>

using namespace std;

class Racional
{
public:
   int getDenominador(void);
   void setDenominador(int newDenominador);
   int getNumerador(void);
   void setNumerador(int newNumerador);

   string toString(void);

   Racional();
   Racional(int num, int den);
   // Constructores que toman como parámetros un lambda que los definirá a sí mismos
   Racional(Racional r1, Racional r2, function<Racional(Racional, Racional)> fn);
   Racional(Racional r1, function<Racional(Racional)> fn);

protected:
private:
   int numerador;
   int denominador;
   function<Racional(Racional, Racional)> funcion;
};

#endif