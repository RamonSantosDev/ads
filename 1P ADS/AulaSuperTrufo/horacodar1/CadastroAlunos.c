#include <stdio.h>

int main () {
    int idade, matricula;
    float altura;
    char nome[20];
   

    printf("Digite seu nome: \n");
    scanf ("%s" , nome);

    printf ("Digite sua idade: \n");
    scanf ("%d", &idade);

    printf("Digite sua altura \n");
    scanf("%f", &altura); 

    printf("Digite sua matricula: \n");
    scanf("%d", &matricula);

    printf("Nome do Aluno é: %s\n e sua idade é: %d\n e sua altura é: %.2f\n e sua matricular é: %d\n", nome, idade, altura, matricula);
    

    return 0;

}