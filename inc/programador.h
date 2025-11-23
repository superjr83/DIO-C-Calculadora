
#ifndef PROGRAMADOR_H
#define PROGRAMADOR_H
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    
    int binario_para_decimal(const char* binario);
    void decimal_para_binario(int decimal, char* binario, int tamanho);
    int hexadecimal_para_decimal(const char* hexadecimal);
    void decimal_para_hexadecimal(int decimal, char* hexadecimal, int tamanho);
    int octal_para_decimal(const char* octal);  
    void decimal_para_octal(int decimal, char* octal, int tamanho);
    int contar_bits(int numero);
    int verificar_paridade(int numero);
    int inverter_bits(int numero);
    int deslocar_bits_esquerda(int numero, int deslocamentos);
    int deslocar_bits_direita(int numero, int deslocamentos);
    int aplicar_mascara(int numero, int mascara);
    int remover_mascara(int numero, int mascara);
    int toggle_bits(int numero, int mascara);
    int contar_bits_ativos(int numero);
    int verificar_bit(int numero, int posicao);
    int definir_bit(int numero, int posicao);  
    int limpar_bit(int numero, int posicao);

#endif // PROGRAMADOR_H