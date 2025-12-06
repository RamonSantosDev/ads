#include <stdio.h>

int main(){
    int idade = 29;
    float altura = 1.65f;

    //idade >= 18 => verdadeiro
    //idade <=30 => verdadeira
    //altura > 1.60 

    if(idade >= 18 && idade <= 30 && altura >=  1.65 - 0.0001){
        printf(" você esta dentro da faixa");
    }else{
        printf("voce esta fora");
    }


}