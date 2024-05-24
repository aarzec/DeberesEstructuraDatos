/***********************************************************************
 * Module:  Zoologico.h
 * Author:  Wasa
 * Modified: jueves, 23 de mayo de 2024 09:40:36 p. m.
 * Purpose: Declaration of the class Zoologico
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Zoologico_h)
#define __Class_Diagram_1_Zoologico_h

#include <Persona.h>

class Zoologico
{
public:
protected:
private:
   Persona* cuidadores;
   Persona* visitantes;
   Animal* mamiferos;
   Animal* reptiles;
   Animal* aves;
   Animal* hominidos;


};

#endif
