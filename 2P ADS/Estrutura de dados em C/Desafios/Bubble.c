#include <stdio.h>
#include <stdlib.h>

void trocar(int* a, int* b){

    int temp = *a;

    *a = *b;

    *b = temp;
}

void bubbleSort(int vetor[], int tamanho){

        for (int i = 0; i < tamanho - 1; i++){
            
            for (int j = 0; j < tamanho - 1 - i; j++){
                
                if (vetor[j] > vetor[j + 1]){
                    trocar(&vetor[j], &vetor[j + 1]);
                }
            }            
        }
    }

int main(){
 int vetor[] = {5, 3, 8, 4, 2};
    int tamanho = 5;

    bubbleSort(vetor, tamanho);

    for(int i = 0; i < tamanho; i++){
        printf("%d ", vetor[i]);
    }

    return 0;
    
}