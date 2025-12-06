#include <stdio.h>

    int main(){
    //2 - Faça um algoritmo para receber um número qualquer e imprimir na tela se o número é par ou ímpar, positivo ou negativo.
    int num;

    printf("Digite um numero: \n");
    scanf("%d", &num);
        // verifica se o numero é par ou impar
    if (num % 2 == 0)
    {
        printf("O numero digitado é par \n");
    } else {
        printf("O numero digitado é impar \n");
    }
        // verifica se o numero é positivo ou negativo
    if (num > 0)
    {
       printf("numero é positivo \n");
    } else {
        printf("numero é negativo \n");
    }
    

    return 0;


}