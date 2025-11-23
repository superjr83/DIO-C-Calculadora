
#include "trigonometria.h"

float seno(float angulo_graus) {
    return sin(angulo_graus * M_PI / 180.0);
}

float cosseno(float angulo_graus) {
    return cos(angulo_graus * M_PI / 180.0);
}

float tangente(float angulo_graus) {
    return tan(angulo_graus * M_PI / 180.0);
}   

float arco_seno(float valor) {
    if (valor < -1 || valor > 1) {
        printf("Erro: Valor fora do intervalo para arco seno!\n");
        return 0;
    }
    return asin(valor) * 180.0 / M_PI;
}   

float arco_cosseno(float valor) {
    if (valor < -1 || valor > 1) {
        printf("Erro: Valor fora do intervalo para arco cosseno!\n");
        return 0;
    }
    return acos(valor) * 180.0 / M_PI;
}   

float arco_tangente(float valor) {
    return atan(valor) * 180.0 / M_PI;
}   


float graus_para_radianos(float graus) {
    return graus * M_PI / 180.0;
}   


float radianos_para_graus(float radianos) {
    return radianos * 180.0 / M_PI;
}

float hipotenusa(float cateto_oposto, float cateto_adjacente) {
    return sqrt(cateto_oposto * cateto_oposto + cateto_adjacente * cateto_adjacente);
}

float area_triangulo(float base, float altura) {
    return (base * altura) / 2.0;
}

float lei_senos_a(float lado_a, float angulo_A, float angulo_B) {
    return (lado_a * sin(angulo_B * M_PI / 180.0)) / sin(angulo_A * M_PI / 180.0);
}


float lei_cossenos_a(float lado_b, float lado_c, float angulo_A) {
    return sqrt(lado_b * lado_b + lado_c * lado_c - 2 * lado_b * lado_c * cos(angulo_A * M_PI / 180.0));
}