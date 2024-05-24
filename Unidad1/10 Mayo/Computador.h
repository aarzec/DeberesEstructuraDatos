/***********************************************************************
 * Module:  Computador.h
 * Author:  Wasa
 * Modified: jueves, 23 de mayo de 2024 09:50:08 p. m.
 * Purpose: Declaration of the class Computador
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Computador_h)
#define __Class_Diagram_1_Computador_h

class Computador
{
public:
protected:
private:
   Monitor monitor;
   Periferico* perifericos;
   Puerto::usb puertosUSB;
   int cantidadRAM;
   int cantidadDisco;
   std::string modeloCPU;
   float frecuenciaCPU;
   bool graficosIntegrados;
   std::string modeloChipset;
   int numeroSerie;
   std::string modeloPlacaBase;


};

#endif
