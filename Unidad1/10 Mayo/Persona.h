/***********************************************************************
 * Module:  Persona.h
 * Author:  Wasa
 * Modified: jueves, 23 de mayo de 2024 09:28:57 p. m.
 * Purpose: Declaration of the class Persona
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Persona_h)
#define __Class_Diagram_1_Persona_h

class Persona
{
public:
protected:
private:
   int id;
   std::string cedula;
   std::string apellido1;
   std::string apellido2;
   std::string nombre1;
   std::string nombre2;
   std::string nacionalidad;
   Enum estadoCivil;
   Enum tipoSangre;
   std::string actividad;
   Persona padre;
   Persona madre;


};

#endif
