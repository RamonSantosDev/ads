#include <stdio.h>

int main (){
    int idade;

    printf("Digite sua Idade: ");
    scanf("%d", &idade);

    /*
    if (idade < 12){
        printf("Você é uma criança");
    }else if(idade >= 12 && idade < 18 ){
        printf("você é adolecente");
    }else if(idade >= 18 && idade < 60 ){
        printf("você é adulto");
    }else{
        printf("você é idoso");
    }
    */

    if(idade > 60){
        printf("Você é um Idoso!\n");
    }else if (idade <= 60 && idade > 18){
        printf("Você é adulto!\n");
    }else if(idade <= 18 && idade > 12){
        printf("você é um Adolecente!\n");
    }else{
        printf("voce é uma criança!\n");
    }




}