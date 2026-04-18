#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[30];
    int idade;
} Pessoa;

#define MAX 5

typedef struct
{
    Pessoa itens[MAX];
    int inicio;
    int fim;
    int total;
} Fila;

void inicializarFila(Fila *f){ 
    f->inicio = 0;
    f->fim = 0;
    f->total = 0;
}

int filaCheia(Fila *f){ 
    return f->total == MAX;
}

int filaVazia(Fila *f){
    return f->total == 0;
}

void inserir(Fila *f, Pessoa p){
    if (filaCheia(f)){
        printf("fila cheia. nao e possivel inserir.\n");
        return;
    }
    f->itens[f->fim] = p;
    f->fim = (f->fim + 1) % MAX;
    f->total++;
}

void remover(Fila *f, Pessoa *p){
    if(filaVazia(f)){
        printf("fila vazia. nao é possivel remover.\n");
        return;
    }

    *p = f->itens[f->inicio];
    f->inicio = (f->inicio + 1) % MAX;
    f->total--;
}

void mostrarFila(Fila *f){
    printf("Fila: ");

    int idx = f->inicio;

    for (int i = 0; i < f->total; i++, idx = (idx + 1) % MAX) {
        printf("[%s, %d] ", f->itens[idx].nome, f->itens[idx].idade);
        
    }

    printf("\n");
}






int main(){
    Fila f;
    inicializarFila(&f); // inicializa a fila

    //declaração de variavel do tipo Pessoa
    Pessoa p1 = {"Joao", 25};
    Pessoa p2 = {"Maria", 30};

    //insere algumas pessoas na fila
    inserir(&f, p1);
    inserir(&f, p2);

    mostrarFila(&f); // mostra a fila antes da remocao
    Pessoa removida;
    remover(&f, &removida); // aqui usamos a função de remoção
    printf("Pessoa removida: %s, %d\n", removida.nome, removida.idade);

    mostrarFila(&f); // mostrar fila apos a remoção
    return 0;
}