#include <stdio.h>
#include <stdlib.h>

void insertionSort(int vetor[], int tamanho) {

    for (int i = 1; i < tamanho; i++){

        int chave = vetor[i];
        int j = i - 1;



        while (j >= 0 && vetor[j] > chave)
        {
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j + 1] = chave;
    }
}

int main(){
int vetor[] = {5, 3, 8, 4, 2, 10, 9};
    int tamanho = 7;

    insertionSort(vetor, tamanho);

    for(int i = 0; i < tamanho; i++){
        printf("%d ", vetor[i]);
    }

    return 0;

}