#include <stdio.h>

int main (){

    /*
    Atribuição simples (=)
    atribuição com soma (+=)
    atribuição com subtração (-=)
    atribuição com multiplicação (*=)
    atribuição com divisao (/=)
    */
    int numero1, numero2, resultado;

    
    resultado = 10;
    printf("Resultado: %d\n", resultado);
    // resultado = resultado + 20
    resultado += 20;
    printf("Resultado: %d\n", resultado);
    // resultado = resultado - 5
    resultado -= 5;
    printf("Resultado: %d\n", resultado); 
    // resultado = resultado * 2
    resultado *= 2;
    printf("Resultado: %d\n", resultado);
    // resultado = resultado / 2
    resultado /= 2;
    printf("Resultado: %d\n", resultado);

}