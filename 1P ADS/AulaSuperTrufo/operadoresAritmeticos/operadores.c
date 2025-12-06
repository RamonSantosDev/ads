#include <stdio.h>

int main (){

    /*
    Soma (+)
    subtração (-)
    Multiplicação (*)
    Divisão (/)    
    */

    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

    printf("Entre com o numero 1: \n");
    scanf("%d", &numero1);
    printf("Entre com o numero 2: \n");
    scanf("%d", &numero2);

    // Operação soma
    soma = numero1 + numero2;
    // Operção subtração
    subtracao = numero1 - numero2;
    // Operação multiplicação
    multiplicacao = numero1 * numero2;
    // operação divisão
    divisao = numero1 / numero2;

    printf("Resultado das operaçães aritmeticas: \n");
    printf("A Soma dos Numeros %d + %d é igual a: %d\n", numero1, numero2, soma);
    printf("A subtração é: %d\n", subtracao);
    printf("A multiplicação é: %d\n", multiplicacao);
    printf("A divisao é: %d\n", divisao);



}