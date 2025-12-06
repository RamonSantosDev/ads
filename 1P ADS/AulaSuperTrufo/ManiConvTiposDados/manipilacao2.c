#include <stdio.h>

int main (){
    // usando unsigned int
    /*
     int numeroSinal = 3000000000;
     unsigned int numeroSemSinal = 3000000000;

     printf("Numero com Sinal %d\n" , numeroSinal);
     printf("Numero com Sinal %u\n" , numeroSinal);
    */
   
    int numeroNormal = 2147483647; // valor maximo do int
    long int numeroGrande = 2147483647;

    printf("numero regular (int): %d\n", numeroNormal);
    printf("numero grande (long int): %ld\n", numeroGrande);

    numeroGrande++;
    printf("numero grande atualizado (long int): %ld\n", numeroGrande);
}