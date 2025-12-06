#include <stdio.h>

int main (){
    float nota1, nota2, nota3;
    float media;
   

    printf("Digite a Primeira Nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda Nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira Nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;
    

    printf("Sua media é: %.2f", media);

    return 0;


}