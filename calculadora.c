//Desenvolvimento de uma Calculadora em Linguagem C
//Funcionalidades Basicas, Programador e Trigonometria (tem que implementar)
#include "inc/basico.h"

basicoCallback_t callback[] = {
    {soma},
    {subtracao},
    {multiplicacao},
    {divisao},
};

int entrada;


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


void basico(void) {
    
    char *opcao[] = {
        "1 - Adicao",
        "2 - Subtracao",
        "3 - Multiplicacao",
        "4 - Divisao",
    };

    // Chamada da funcao basica
    printf("Funcao Basica selecionada.\n");
    for(int a = 0; a < 4; a++) printf("%s\n", opcao[a]);
    printf("Selecione uma opcao para continuar...\n");
    scanf("%d", &entrada);
    
    if(entrada < 1 || entrada > 4) {
        printf("Opcao invalida. Retornando ao menu principal.\n");
        return;
    }

    float num1, num2, resultado;
    
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1); 
    
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    
    resultado = callback[entrada - 1].fnCallbackBasico(num1, num2);
    printf("Resultado: %.2f\n", resultado);



}   


int main() {
    // Implementacao do menu e chamadas de funcoes aqui
    printf("Calculadora em C - Versao C17\n");

    printf("Funcionalidades basicas, programador e trigonometria estao prontas para uso.\n");
    printf("1 - Basico\n");
    printf("2 - Programador\n");
    printf("3 - Trigonometria\n");

    printf("Selecione uma opcao para continuar...\n");
    scanf("%d", &entrada);

    switch(entrada){
    
        case 1:
            basico();
            break;
        case 2:
        case 3:
            printf("Nao implementado. Encerrando o programa.\n");
            break;

        default:
            printf("Opcao invalida. Encerrando o programa.\n");
            break;
    }


    return 0;
}
