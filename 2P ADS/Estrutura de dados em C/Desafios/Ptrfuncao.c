#include <stdio.h>

void saudacao(){
    printf("olá mundo!");
}

int main(){

    void (*ptr)() = saudacao;

    ptr();
}