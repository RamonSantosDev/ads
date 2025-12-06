#include <stdio.h>

int main (){
    int nota;

    printf("digite a sua nota: ");
    scanf("%d", &nota);

    if (nota >= 90){
        printf("A");
    } else if (nota >= 80) {
        printf("B");
    } else if(nota >= 70){
        printf("C");
    }else if (nota >= 60){
        printf("D");
    }else if (nota >= 50){
        printf("E");
    }else{
        printf("F");
    }




}