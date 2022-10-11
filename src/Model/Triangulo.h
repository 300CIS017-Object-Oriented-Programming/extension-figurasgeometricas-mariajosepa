//
// Created by maria jose pava on 11/10/22.
//

#ifndef EJERCICIO_POLIMORFISMO_TRIANGULO_H
#define EJERCICIO_POLIMORFISMO_TRIANGULO_H

#include "FiguraGeometrica.h"


class Triangulo: public FiguraGeometrica {

private:
    float ladoA;
    float ladoB;
    float ladoC;
    float altura;

public:

    Triangulo();
    Triangulo(float ladoA, float ladoB, float ladoC,float altura);
    void dibujarFigura() override;
    float calcularArea() override;
    float calcularPerimetro() override;


};


#endif //EJERCICIO_POLIMORFISMO_TRIANGULO_H
