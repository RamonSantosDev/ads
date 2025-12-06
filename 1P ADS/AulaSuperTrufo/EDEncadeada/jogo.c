#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (){
    int numerojogador, numerocomputador, resultado;
    char tipoComparacao;

    srand(time(0));
    numerocomputador = rand() % 100 + 1;

    printf("Bem vindo ao jogo Maior Menor ou Igual\n");
    printf("Você escolhe um numero e um tipo de comparação\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Escolha a comparação\n");
    scanf(" %c", &tipoComparacao);

    printf("Escolha um Numero\n");
    scanf("%d", &numerojogador);


    switch (tipoComparacao)
    {
    case 'M':
    case 'm':
        resultado = numerojogador > numerocomputador ? 1 : 0;
        break;
    case 'N':
    case 'n':
        resultado = numerojogador < numerocomputador ? 1 : 0;
        break;
    case 'I':
    case 'i':
        resultado = numerojogador == numerocomputador ? 1 : 0;
        break;    
    default:
        printf("opção invalida!\n");
        break;
    }
    
    printf("numero do computador é: %d\n", numerocomputador);

    if(resultado == 1){
        printf("parabens voce venceu!\n");
    }else{
        printf("Infelizmente você Perdeu\n");
    }
}