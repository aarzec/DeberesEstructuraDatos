/***********************************************************************
 * Universidad de las Fuerzas Armadas - ESPE
 * Module:  Racional.h
 * Author:  Andrés Romero
 * Modified: jueves, 9 de mayo de 2024 04:16:58 p. m.
 * Purpose: Declaration of the class Racional
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Racional_h)
#define __Class_Diagram_1_Racional_h

#include "Racional.h"
#include <iostream>

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

protected:
private:
   int numerador;
   int denominador;
};

#endif