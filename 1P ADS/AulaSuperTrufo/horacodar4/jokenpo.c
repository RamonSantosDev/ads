#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int escolhaJogador, escolhacomputador;
    
    srand(time(0));

    printf("Jogo de Jokenpô\n");
    printf("Escolha uma opção:\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Escolha: ");
    scanf("%d", &escolhaJogador);

    escolhacomputador = rand() % 3 + 1;

    switch (escolhaJogador)
    {
    case 1:
       printf("Jogador: Pedra \n");
        break;
    case 2:
       printf("Jogador: Papel \n");
        break;
    case 3:
       printf("Jogador: Tesoura \n");
        break;    
    default:
       printf("Opção invalida\n");
        break;
    }
    
    
    switch (escolhacomputador)
    {
    case 1:
        printf("Computador: Pedra \n");
        break;
    case 2:
        printf("Computador: Papel \n");
        break;
    case 3:
        printf("Computador: Tesoura \n");
        break;    
    default:
        break;
    }
    
    if(escolhacomputador == escolhaJogador){
        printf("O jogo Empatou!\n");
    }else if((escolhaJogador == 1) && (escolhacomputador == 3) || 
             (escolhaJogador == 2) && (escolhacomputador == 1) ||
             (escolhaJogador == 3) && (escolhacomputador == 2)){
                printf("### Parabéns, Você ganhou!\n");
               }else{
                printf("### Você perdeu!\n");
               }
    
    /*
    
    switch (escolhaJogador)
    {
    case 1:
        
        if (escolhacomputador == 1) {
            printf("Empatou");
        }else if (escolhacomputador == 2){
            printf("O computador escolheu papel voce perdeu!");
        }else {
            printf("Voce venceu!");
        }
        break;
    case 2:
        if (escolhacomputador == 1){
            printf("Voce venceu!");
        }else if(escolhacomputador == 2){
            printf("Empatou");
        }else{
            printf("O computador escolheu Tesoura voce perdeu!");
        }
        break;
    case 3:
        if (escolhacomputador == 1){
            printf("O computador escolheu Pedra voce perdeu!");
        }else if(escolhacomputador == 2){
            printf("Voce venceu!");
        }else{
            printf("Empatou");
        }
        break;    
    default:
        break;
    }

*/
    
}