//
// Created by maria jose pava on 11/10/22.
//

#include "Triangulo.h"


Triangulo::Triangulo() {

    ladoA = 0;
    ladoB = 0;
    ladoC = 0;
    altura = 0;
    nombreFigura = "Triangulo";
}

Triangulo::Triangulo(float ladoA, float ladoB,float ladoC,float altura) : Triangulo() {

    this->ladoA = ladoA;
    this->ladoB = ladoB;
    this->ladoC = ladoC;
    this->altura = altura;
}


float Triangulo::calcularArea() {

    area = (ladoA * altura)/2;

    return area;
}

float Triangulo::calcularPerimetro() {
    perimetro = (ladoA + ladoB + ladoC);

    return perimetro;
}


void Triangulo::dibujarFigura() {

    cout << nombreFigura;
    cout << "\n";

    for (int i = 1; i <= 7; i++)
    {
        //3
        for (int j = 1; j <= (7 - i); j++)
        {
            cout << " ";
        }

        //4
        for (int k = 1; k <= i * 2 - 1; k++)
        {
            //5
            if (k == 1 || k == i * 2 - 1)
            {
                cout << "*";
            }
            else if (i == 7)
            {
                //6
                cout << "*";
            }
            else
            {
                //7
                cout << " ";
            }

        }
        //8
        cout << std::endl;
    }
}