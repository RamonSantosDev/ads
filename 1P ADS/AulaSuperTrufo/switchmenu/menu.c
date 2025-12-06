#include <stdio.h>

int main (){
    int opcao;
    int sim;
    printf("*** Menu Principal ***\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma Opção: ");
    scanf("%d", &opcao);

    switch (opcao){
    case 1:
        printf("execução do Jogo");
        break;
    case 2:
        printf("As regras são......");
        break;
    case 3:
        printf("Sair do Jogo\n");
        printf("1. Sim\n");
        printf("2. Não\n");
        printf("Escolha uma Opção: ");
        scanf("%d", &sim);
        switch (sim){
        case 1:
            printf("saiu do jogo");
            break;
        case 2:
            printf("continua no Jogo");
            break;
        default:
            printf("opção invalida");
            break;
        }
        break;    
    default:
        break;
    }



}