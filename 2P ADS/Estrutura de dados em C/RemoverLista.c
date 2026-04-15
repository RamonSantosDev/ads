#include <stdio.h>
#include <stdlib.h>

struct No {
    int dado;
    struct No* proximo;
};

void removerDoInicio(struct No** inicio) {
    // 1 Primeiro, checamos se a lista nao esta vazia!
    //se inicio for null ou apontar para null nao ha nada a remover.

    if (inicio == NULL || *inicio == NULL){
        printf("A lista ja esta vazia. nada a remover.\n");
        return;
    }

    // 2 Guardamos o endereço do nó que vamos remover (o primeiro nó)
    struct No* noParaRemover = *inicio;

    // 3 O inicio da lista agora passa a ser o segundo nó
    // o ponteiro inicio passa a apontar para o no seguinte ao que sera removido

    *inicio = (*inicio)->proximo;
    // 4 liberamos a memoria do no que foi guardado e removido da lista

    free(noParaRemover);
}