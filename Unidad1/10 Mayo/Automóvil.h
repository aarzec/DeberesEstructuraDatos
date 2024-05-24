/***********************************************************************
 * Module:  Automovil.h
 * Author:  Wasa
 * Modified: jueves, 23 de mayo de 2024 09:44:39 p. m.
 * Purpose: Declaration of the class Automovil
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Automovil_h)
#define __Class_Diagram_1_Automovil_h

class Automovil
{
public:
protected:
private:
   std::string marca;
   std::string chassis;
   Llanta[4] Llantas;
   int nPuertas;
   std::string modeloMotor;
   float cilindrajeMotor;
   float consumoGasolinaKm;
   Enum tipoDeCambios;


};

#endif
