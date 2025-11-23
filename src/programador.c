

#include "programador.h"


int binario_para_decimal(const char* binario) {
    int decimal = 0;
    int base = 1; // 2^0

    for (int i = strlen(binario) - 1; i >= 0; i--) {
        if (binario[i] == '1') {
            decimal += base;
        }
        base *= 2;
    }
    return decimal;
}

void decimal_para_binario(int decimal, char* binario, int tamanho) {
    binario[tamanho - 1] = '\0'; // Null-terminador
    for (int i = tamanho - 2; i >= 0; i--) {
        binario[i] = (decimal % 2) ? '1' : '0';
        decimal /= 2;
    }
}

int hexadecimal_para_decimal(const char* hexadecimal) {
    int decimal = 0;
    int base = 1; // 16^0
    int len = strlen(hexadecimal);

    for (int i = len - 1; i >= 0; i--) {
        char ch = hexadecimal[i];
        int valor;

        if (ch >= '0' && ch <= '9') {
            valor = ch - '0';
        } else if (ch >= 'A' && ch <= 'F') {
            valor = ch - 'A' + 10;
        } else if (ch >= 'a' && ch <= 'f') {
            valor = ch - 'a' + 10;
        } else {
            printf("Erro: Caracter invalido em hexadecimal!\n");
            return -1;
        }

        decimal += valor * base;
        base *= 16;
    }
    return decimal;
}

void decimal_para_hexadecimal(int decimal, char* hexadecimal, int tamanho) {
    const char* caracteres = "0123456789ABCDEF";
    hexadecimal[tamanho - 1] = '\0'; // Null-terminador
    for (int i = tamanho - 2; i >= 0; i--) {
        hexadecimal[i] = caracteres[decimal % 16];
        decimal /= 16;
    }
}

int octal_para_decimal(const char* octal) {
    int decimal = 0;
    int base = 1; // 8^0

    for (int i = strlen(octal) - 1; i >= 0; i--) {
        if (octal[i] < '0' || octal[i] > '7') {
            printf("Erro: Caracter invalido em octal!\n");
            return -1;
        }
        decimal += (octal[i] - '0') * base;
        base *= 8;
    }
    return decimal;
}   


void decimal_para_octal(int decimal, char* octal, int tamanho) {
    octal[tamanho - 1] = '\0'; // Null-terminador
    for (int i = tamanho - 2; i >= 0; i--) {
        octal[i] = (decimal % 8) + '0';
        decimal /= 8;
    }
}

int contar_bits(int numero) {
    int contador = 0;
    while (numero) {
        contador++;
        numero >>= 1;
    }
    return contador;
}

int verificar_paridade(int numero) {
    return numero % 2 == 0;
}

int inverter_bits(int numero) {
    int resultado = 0;
    int bits = contar_bits(numero);

    for (int i = 0; i < bits; i++) {
        if (numero & (1 << i)) {
            resultado |= (1 << (bits - 1 - i));
        }
    }
    return resultado;
}

int deslocar_bits_esquerda(int numero, int deslocamentos) {
    return numero << deslocamentos;
}

int deslocar_bits_direita(int numero, int deslocamentos) {
    return numero >> deslocamentos;
}

int aplicar_mascara(int numero, int mascara) {
    return numero & mascara;
}

int remover_mascara(int numero, int mascara) {
    return numero & ~mascara;
}

int toggle_bits(int numero, int mascara) {
    return numero ^ mascara;
}   

int contar_bits_ativos(int numero) {
    int contador = 0;
    while (numero) {
        contador += numero & 1;
        numero >>= 1;
    }
    return contador;
}

int verificar_bit(int numero, int posicao) {
    return (numero >> posicao) & 1;
}   

int definir_bit(int numero, int posicao) {
    return numero | (1 << posicao);
}   

int limpar_bit(int numero, int posicao) {
    return numero & ~(1 << posicao);
}


