# include "Ponto2D.hpp"
# include "Triangulo.hpp"

Triangulo::Triangulo(Ponto2D a, Ponto2D b, Ponto2D c){
    p1 = a;
    p2 = b;
    p3 = c;
}

double Triangulo::calcular_area(){
    double area, A, B;

    A = (p1.x * p2.y) + (p2. x * p3.y) + (p3.x * p1. y);
    B = (p2.y * p3.x) + (p3.y * p1.x) + (p1.y * p2.x);

    area = sqrt(pow((A - B), 2));
    
    return area/2;
}

double Triangulo::calcular_perimetro(){
    double perimetro;

    perimetro = p1.calcular_distancia(&p2) + p2.calcular_distancia(&p3) + p3.calcular_distancia(&p1);

    return perimetro;
}


int Triangulo::comparar_area(Triangulo *t){
    double areaA = calcular_area();
    double areaB = t -> calcular_area();
    
    if(areaB == areaA) return 0;
    else if(areaB > areaA) return -1;
    else return 1;
}