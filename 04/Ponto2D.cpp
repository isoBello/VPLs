# include <iostream>
# include "Ponto2D.hpp"

Ponto2D::Ponto2D(double a, double b){
    x = a;
    y = b;
}

Ponto2D::Ponto2D(){
    x = 0;
    y = 0;
}

double Ponto2D::calcular_distancia(Ponto2D* ponto){
    double dist; 

    dist = sqrt(pow((x - ponto -> x), 2) + pow((y - ponto -> y), 2));
    return dist; 
}