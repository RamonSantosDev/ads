#include <stdio.h>

int main (){
    int variavel;
   
    printf("digite um valor\n");
    scanf("%d", &variavel);

    switch (variavel) {
    case 1:
        printf("codigo a ser executado se for valor1");
        break;
    case 2:
        printf("codigo a ser executado se for valor2");
        break;
    default:
        printf("quando nao é valor 1 e nem valor 2");
        
    }




}