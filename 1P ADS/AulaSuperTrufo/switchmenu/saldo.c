#include <stdio.h>
#include <string.h>

int main (){
    float saldo = 1000.00, sacar, valor;
    int opcao, agencia, conta;
    char banco[50]; 

    printf("Escolha uma Opção:\n");
    printf("1. Verificar saldo\n");
    printf("2. fazer deposito\n");
    printf("3. fazer saque\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("O seu saldo é: R$ %.2f", saldo);
        break;
    case 2:
        
        int c;
        while ((c = getchar()) != '\n' && c != EOF) {}
        
        printf("Digite o banco que você deseja depositar\n");
        fgets(banco, sizeof(banco), stdin);

        printf("Digite a agencia que deseja depositar\n");
        scanf("%d", &agencia);

        printf("digite a conta que deseja depositar\n");
        scanf("%d", &conta);
        
        printf("digite o valor que deseja depositar\n");
        scanf("%f", &valor);

        printf("o banco que vc escolheu foi %s a agencia %d a conta %d e depositou o valor de R$ %.2f", banco, agencia, conta, valor);
        break;
    case 3:
        printf("Digite o valor a sacar:\n");
        scanf("%f", &sacar);
        break;
    default:
        break;
    }



}