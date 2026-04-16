#include <stdio.h>
#include <stdlib.h>

void trocar(int* a, int* b){

    int temp = *a;

    *a = *b;

    *b = temp;
}

void selectionSort(int vetor[], int tamanho){


    for (int i = 0; i < tamanho - 1; i++)
    {
        int indiceMenor = i;

        for (int j = i + 1; j < tamanho; j++)
        {
           if(vetor[j] < vetor[indiceMenor]){
               
            indiceMenor = j;

           }
        }
        if (indiceMenor != i){
            trocar(&vetor[i], &vetor[indiceMenor]);
        }
    }
    
}

int main(){
 int vetor[] = {5, 3, 8, 4, 2};
    int tamanho = 5;

    selectionSort(vetor, tamanho);

    for(int i = 0; i < tamanho; i++){
        printf("%d ", vetor[i]);
    }

    return 0;
    
}