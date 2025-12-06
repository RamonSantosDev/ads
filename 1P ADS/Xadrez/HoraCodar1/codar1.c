#include <stdio.h>

int main (){
    /* int i = 0;

    while (i <= 10) "exemplo while"
    {
       

        if(i % 2 != 0){
            printf("O numero %d é Par\n", i);
        }

        i++; */


    // exemplo do-while


       /* int numero;


        do{
            printf("Digite um numero par para sair do Programa...\n");
            scanf("%d", &numero);

            if(numero % 2 == 0){
                printf("o numero %d é par\n", numero);
            }else {
                printf("O numero %d é impar\n", numero);
            }



        }while (numero % 2 != 0);
        
        printf("saindo do programa\n"); */


        //for

        int numero, i;

        printf("digite um numero para calcularmos a tabuada...\n");
        scanf("%d", &numero);

        for(i = 0; i <= 10; i++)
        {
            
            printf("%d x %d = %d\n", i, numero, i + numero);
        }




        return 0;
    }
    






