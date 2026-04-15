#include <stdio.h>
#include <stdlib.h>

struct No {
    int dado;
    struct No* proximo;
};
//iNSERE UM NOVO NO NO INCIO DA LISTA.
void inserirNoInicio(struct No** inicio, int valor){
// 1 CRIAMOS NOSSO "NOVO NÓ" ALOCANDO MEMORIA PARA ELE.
    struct No* novo = (struct No*) malloc(sizeof(struct No));
   
    //VERIFICAÇÃO PARA O CASO DE FALHA NA ALOCAÇÃO DE MEMORIA
    if (novo == NULL){
        printf("erro: falha ao alocar memoria. \n");
        return;
    }
    // 2 COLOCAMOS O VALOR DENTRO DELE
    novo->dado = valor;

    // 3 O PROXIMO DO NOSSO NOVO NO SERA O ANTIGO INICIO DA LISTA
    // O PONTEIRO INICIO E UM PONTEIRO PARA PONTEIRO, ENTÃO '*INICIO' NOS DAR O PONTEIRO PARA O PRIMEIRO NO ATUAL

    novo->proximo = *inicio;

    // 4 AGORA O INICIO DA LISTA PASSA A SER O NOSSO NOVO NO!
    // MODIFICAMOS O PONTEIRO ORIGINAL PARA QUE ELE APONTE PARA O NOVO NO.
    *inicio = novo;
}