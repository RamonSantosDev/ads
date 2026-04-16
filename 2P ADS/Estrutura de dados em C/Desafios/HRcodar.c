#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 10 //tamanho da lista que vai ser ordenada

//Declaração das funções (Prototipos)
//informa ao compilador sobre a existencia e a assinatura das funções
//que serao implementadas mais abaixo

//Funções para gerar os diferente tipos de lista

void gerarListaOrdenada(int lista[], int n);
void gerarListaInversa(int lista[], int n);
void gerarListaAleatoria(int lista[], int n);

//funcoes de ordenação
void bubbleSort(int lista[], int n);
void inserctinSort(int lista[], int n);
void selectionSort(int lista[], int n);

//funçoes auxiliares
void imprimirLista(const char *titulo, const int lista[], int n);
void copiarLista(int destino[], const int origem[], int n);


//Função principal

int main(){

    srand(time(NULL));

    int listaOrdenada[TAMANHO];
    int listaInversa[TAMANHO];
    int listaAleatoria[TAMANHO];

    printf(" gerar lista de entrada \n");
    gerarListaOrdenada(listaOrdenada, TAMANHO);
    gerarListaInversa(listaInversa, TAMANHO);
    gerarListaAleatoria(listaAleatoria, TAMANHO);

    int listatemp[TAMANHO];

    // a) lista ja ordenada
    copiarLista(listatemp, listaOrdenada, TAMANHO);
    bubbleSort(listatemp, TAMANHO);
    imprimirLista("bubble sort melhor caso ja ordenado", listatemp, TAMANHO);

    copiarLista(listatemp, listaInversa, TAMANHO);
    bubbleSort(listatemp, TAMANHO);
    imprimirLista("bubble sort pior caso ordem inversa", listatemp, TAMANHO);

    copiarLista(listatemp, listaAleatoria, TAMANHO);
    bubbleSort(listatemp, TAMANHO);
    imprimirLista("bubble sort caso medio", listatemp, TAMANHO);
}