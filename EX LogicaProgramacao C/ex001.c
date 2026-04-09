
#include <stdio.h>
    int main (){
    int A;
    int B;
    int C;
    int soma;
    printf("Exercicio 1 \n");
    printf("Digite o valor de A: \n");
    scanf("%d", &A);

    printf("Digite o valor de B: \n");
    scanf("%d", &B);

    printf("Digite o valor de C: \n");
    scanf("%d", &C);

    soma = A + B;
    printf("Soma de A mais B é igual %d \n", soma);

    if (soma < C)
    {
        printf("Soma de A + B é menor que C\n");

    } else {
        printf("A soma de A + B Não é menor que C\n");
    }

    return 0;

}