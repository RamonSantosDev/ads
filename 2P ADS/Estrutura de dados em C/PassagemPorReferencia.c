#include <stdio.h>

void dobrar(int* x){
    *x = (*x) * 2;
}

int main(){

    int numero = 5;
    printf("%d\n", numero);

    dobrar(&numero);

    printf("%d\n", numero);
}