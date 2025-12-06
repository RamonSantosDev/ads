#include <stdio.h>


/* int main (){

    for (int i = 0, j = 10; i <= j; i++ , j-- )
    {
        printf("i = %d, j = %d \n", i, j);
    }
    



    return 0;
} */

 

int main() {
    int segundos;
   
    for (segundos = 10; segundos >= 0; segundos--) {
        printf("%d\n", segundos);
       
        // Loop aninhado para simular um atraso
        for (int i = 0; i < 100000000; i++) {
            // Apenas para simular um atraso
        }
    }
 
    printf("Fogos de artifício!\n");
   
    return 0;
}