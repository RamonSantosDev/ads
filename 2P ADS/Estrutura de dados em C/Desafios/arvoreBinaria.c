#include <stdio.h> //Biblioteca Padrao de entrada / saida
#include <stdlib.h> // Para malloc() e free()
#include <string.h> // Para manipulação de strings

// definição da estrutura do nó da arvore binaria

typedef struct No {
    char valor[50];        //valor armazena no nó 
    struct No* esquerda;   // Ponteiro para o filho esquerdo
    struct No* direita;    // ponteiro para o filho direito
} No;

/*
Aloca dinamicamente um novo nó, define o valor 
e inicializar os ponteiros dos filhos como NULL

*/
No* criarNo(const char* valor){
    No *novo = (No *)malloc(sizeof(No)); //aloca dinamicamente de memoria
    if (novo == NULL){
        printf("erro ao alocar memoria!\n");
        exit(1); // encerra o programa em caso de erro de memoria
    }
    strcpy(novo->valor, valor);  // copia a string valor para o campo do nó
    novo->esquerda = NULL;       // inicializa filho esquerdo como NULL
    novo->direita = NULL;        // inicializa filho direito como NULL
    return novo;
}

/*
Função inserir

insere um novo valor na arvore binaria de forma recursiva.
aqui usamos ordem alfabetica para organizar os nós
-se valor < nó atual -> vai para subarvore esquerda
-se valor >= nó atual -> vai para a subarvore direita
*/

No* inserir(No* raiz, const char* valor){
    if (raiz == NULL){
        //se a arvore ou subarvore esta vazia,cria um novo nó
        return criarNo(valor);
    }
    if(strcmp(valor, raiz->valor)<0){
        //insere na subarvore esquerda
        raiz->esquerda = inserir(raiz->esquerda, valor);
    } else{
        //insere na subarvore direita
        raiz->direita = inserir(raiz->direita, valor);
    }
    return raiz;
}

/*
Funçoes para PreOrdem

Percorre e imprime a arvore em pre-ordem (Raiz, Esq, dir)
*/
void preOrdem(struct No* raiz){
    if(raiz != NULL){
        printf("%s", raiz->valor); //visita o nó atual (raiz)
    
    preOrdem(raiz->esquerda);       //Visita a subarvore esquerda

    preOrdem(raiz->direita);        //Visita a subarvore direita
    }
}

/*
Função Em Ordem

Percorre e imprime a arvore em ordem (esquerda , raiz, direita)
ideal para exibir valores de ordem alfabetica,
*/
void emOrdem(struct No* raiz){
    if(raiz != NULL){
        emOrdem(raiz->esquerda);   //esquerda primeiro
        printf("%s", raiz->valor); //Depois raiz
        emOrdem(raiz->direita);    //Depois direita
    }
}
/*
Função PosOrdem


*/
void posOrdem(struct No* raiz){
    if(raiz != NULL){
        posOrdem(raiz->esquerda);   //esquerda primeiro
        posOrdem(raiz->direita);    //Depois direita
        printf("%s", raiz->valor); //Depois raiz
    }
}

/*
Função para liberar recursivamente toda a memoria alocada para a arvore.
*/
void liberar(No* raiz){
    if(raiz != NULL){
        liberar(raiz->esquerda);
        liberar(raiz->direita);
        free(raiz); //Libera o nó atual
    }
}

int main(){
    No *raiz = NULL; //inicializa a arvore como vazio

   //inserir elemento na arvore
    raiz = inserir(raiz, " Hall de Entrada ");
    raiz = inserir(raiz, " Sala de Estar ");
    raiz = inserir(raiz, " Biblioteca ");
    raiz = inserir(raiz, " Quarto ");

    printf("Pre-ordem: ");
    preOrdem(raiz);
    printf("\n");

    printf("Em ordem: ");
    emOrdem(raiz);
    printf("\n");

    printf("Pos-ordem: ");
    posOrdem(raiz);
    printf("\n");

    liberar(raiz);

    return 0;
}