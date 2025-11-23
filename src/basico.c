

#include "inc/basico.h"

float soma(float a, float b) {
    return a + b;
}

float subtracao(float a, float b) {
    return a - b;
}

float multiplicacao(float a, float b) {
    return a * b;
}

float divisao(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Erro: Divisao por zero!\n");
        return 0;
    }
}

int modulo(int a, int b) {
    if (b != 0) {
        return a % b;
    } else {
        printf("Erro: Modulo por zero!\n");
        return 0;
    }
}

int maior(int a, int b) {
    return (a > b) ? a : b;
}



int menor(int a, int b) {
    return (a < b) ? a : b;
}

float media(float a, float b) {
    return (a + b) / 2.0;
}

float absoluto(float a) {
    return (a < 0) ? -a : a;
}

int potencia_inteira(int base, int expoente) {
    if (expoente < 0) {
        printf("Erro: Expoente negativo nao suportado para potencia inteira!\n");
        return 0;
    }
    int resultado = 1;
    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    return resultado;
}

int raiz_inteira(int n) {
    if (n < 0) {
        printf("Erro: Raiz quadrada de numero negativo!\n");
        return 0;
    }
    int raiz = 0;
    while (raiz * raiz <= n) {
        raiz++;
    }
    return raiz - 1;
}   


int mdc(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return absoluto(a);
}   


int mmc(int a, int b) {
    if (a == 0 || b == 0) {
        printf("Erro: MMC com zero nao e definido!\n");
        return 0;
    }
    return absoluto(a * b) / mdc(a, b);
}   

int eh_primo(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i <= raiz_inteira(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int proximo_primo(int n) {
    int candidato = n + 1;
    while (!eh_primo(candidato)) {
        candidato++;
    }
    return candidato;
}

int anterior_primo(int n) {
    if (n <= 2) {
        printf("Erro: Nao ha primos anteriores a esse numero!\n");
        return -1;
    }
    int candidato = n - 1;
    while (!eh_primo(candidato)) {
        candidato--;
    }
    return candidato;
}


int fatorial_inteiro(int n) {
    if (n < 0) {
        printf("Erro: Fatorial de numero negativo!\n");
        return 0;
    }
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int combinacao(int n, int k) {
    if (k < 0 || k > n) {
        printf("Erro: Valores invalidos para combinacao!\n");
        return 0;
    }
    return fatorial_inteiro(n) / (fatorial_inteiro(k) * fatorial_inteiro(n - k));
}

int permutacao(int n, int k) {
    if (k < 0 || k > n) {
        printf("Erro: Valores invalidos para permutacao!\n");
        return 0;
    }
    return fatorial_inteiro(n) / fatorial_inteiro(n - k);
}


int soma_digitos(int n) {
    n = absoluto(n);
    int soma = 0;
    while (n > 0) {
        soma += n % 10;
        n /= 10;
    }
    return soma;
}

int inverter_numero(int n) {
    int invertido = 0;
    int negativo = n < 0 ? 1 : 0;
    n = absoluto(n);
    while (n > 0) {
        invertido = invertido * 10 + (n % 10);
        n /= 10;
    }
    return negativo ? -invertido : invertido;
}

int contar_digitos(int n) {
    n = absoluto(n);
    if (n == 0) {
        return 1;
    }
    int contador = 0;
    while (n > 0) {
        contador++;
        n /= 10;
    }
    return contador;
}

int eh_palindromo(int n) {
    return n == inverter_numero(n);
}

int mdc_euclides(int a, int b) {
    a = absoluto(a);
    b = absoluto(b);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int mmc_euclides(int a, int b) {
    if (a == 0 || b == 0) {
        printf("Erro: MMC com zero nao e definido!\n");
        return 0;
    }
    return absoluto(a * b) / mdc_euclides(a, b);
}

int raiz_cubica_inteira(int n) {
    int raiz = 0;
    while (raiz * raiz * raiz <= n) {
        raiz++;
    }
    return raiz - 1;
}

int potencia_cubica_inteira(int base, int expoente) {
    if (expoente < 0) {
        printf("Erro: Expoente negativo nao suportado para potencia cubica inteira!\n");
        return 0;
    }
    int resultado = 1;
    for (int i = 0; i < expoente; i++) {
        resultado *= base * base * base;
    }
    return resultado;
}



