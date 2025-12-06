#include <stdio.h>

int main (){
    int idade;
    float renda;
    int dependentes;

    printf("digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite a sua renda mensal: ");
    scanf("%f", &renda);
    printf("digite o numeros de dependentes: ");
    scanf("%d", &dependentes);

    if (idade >= 18 && idade <= 65){
        if(renda < 3000){
            if(dependentes >= 2){
                printf("Você esta apto para receber o beneficio");
            }else{
                printf("vc nao compriu uma das condicoes o numero de dependentes é maior que 2");
            }
        }else{
            printf("sua renda nao é compativel");
        }
    }else{
        printf("Sua idade nao é compativel");
    }















/*
    if(idade >= 60 || idade <= 18){
        if(renda < 2000){
            printf("você esta apto para receber o desconto!");
        }else{
            printf("Sua renda é acima de 2000 nao esta apto para o desconto");
        }
    }else{
        printf("sua idade nao esta dentro do paramentro");
    }
    */









}