#include  <stdio.h>

int main(){
    /*
    incremento (++)
    Pré-Incremento (++a)
    Pos-Incremento(a++)
    decremento(--)
    Pre decremento (--a)
    pos decremento (a--)
    */
    int numero1 = 1, resultado;

    printf("Antes incremento %d\n", numero1);
    // numero1 = numero1 + 1
    // numero1 += 1
    //numero1++;
    //printf("pos incremento %d\n", numero1);
    
    // numero1 = numero1 - 1
    //numero -= 1
   // numero1--;
    //printf("pos decremento %d\n", numero1);
    
    //resultado = numero1;
    //numero1 + 1; ou numero1++;
    resultado = numero1++;
    printf("Apos Pós-incremento - numero1: %d - Resultado: %d\n", numero1, resultado);

    //numero1++;
    //resultado = numero1;
    resultado = ++numero1;
    printf("Apos pré-incremento - numero1: %d - Resultado: %d\n", numero1, resultado);

    //resultado = numero1
    //numero1--
    resultado = numero1--;
    printf("Apos Pós-Decremento - numero1: %d - Resultado: %d\n", numero1, resultado);
    
    
    //numero1--
    //resultado = numero1
    resultado = --numero1;
    printf("Apos Pré-Decremento - numero1: %d - Resultado: %d\n", numero1, resultado);
}
