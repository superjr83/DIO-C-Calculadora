#ifndef BASICO_H
#define BASICO_H

    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>

    typedef struct{
        float (*fnCallbackBasico)(float, float);
    }basicoCallback_t; 

    float soma(float a, float b);
    float subtracao(float a, float b);
    float multiplicacao(float a, float b);
    float divisao(float a, float b);
    int modulo(int a, int b);
    int maior(int a, int b);
    int menor(int a, int b);
    float media(float a, float b);
    float absoluto(float a);
    int potencia_inteira(int base, int expoente);
    int raiz_inteira(int n);  
    int mdc(int a, int b);
    int mmc(int a, int b);   
    int eh_primo(int n);
    int proximo_primo(int n);
    int anterior_primo(int n);
    int fatorial_inteiro(int n);
    int combinacao(int n, int k);
    int permutacao(int n, int k);
    int soma_digitos(int n);
    int inverter_numero(int n);
    int contar_digitos(int n);
    int eh_palindromo(int n);
    int mdc_euclides(int a, int b);
    int mmc_euclides(int a, int b);
    int raiz_cubica_inteira(int n);
    int potencia_cubica_inteira(int base, int expoente);

#endif // BASICO_H