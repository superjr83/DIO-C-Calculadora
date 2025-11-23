
#ifndef TRIGONOMETRIA_H
#define TRIGONOMETRIA_H

    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>

    #define M_PI 3.14159265358979323846

float seno(float angulo_graus);
float cosseno(float angulo_graus);
float tangente(float angulo_graus); 
float arco_seno(float valor); 
float arco_cosseno(float valor);  
float arco_tangente(float valor); 
float graus_para_radianos(float graus); 
float radianos_para_graus(float radianos);
float hipotenusa(float cateto_oposto, float cateto_adjacente);
float area_triangulo(float base, float altura);
float lei_senos_a(float lado_a, float angulo_A, float angulo_B);
float lei_cossenos_a(float lado_b, float lado_c, float angulo_A);

#endif // TRIGONOMETRIA_H