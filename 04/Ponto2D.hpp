/* TAD: Ponto2D */
# ifndef PONTO2D_H
# define PONTO2D_H

# include <cmath> 

struct Ponto2D{
    double x, y;

    Ponto2D(double, double);
    Ponto2D(); 

    double calcular_distancia(Ponto2D* ponto);
};

#endif