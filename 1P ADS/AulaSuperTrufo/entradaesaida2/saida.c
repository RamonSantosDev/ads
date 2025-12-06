#include <stdio.h>

int main () {
    int idade;
    char nome[16]; 
    char opcao;
    float altura;

    printf("digite sua idade ");
    scanf("%d", &idade);
    printf("Sua idade é: %d", idade);

    //scanf(''formato'', &variavel);

    // %d: Imprime um inteiro no formato decimal.
    // %i: Equivalente a %d.
    // %f: Imprime um número de ponto flutuante no formato padrão.
    // %e: Imprime um número de ponto flutuante na notação científica.
    // %c: Imprime um único caractere.
    // %s: Imprime uma cadeia (string) de caracteres.
}