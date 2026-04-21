#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct NoBST
{
    char valor[50];
    struct NoBST* esquerda; // ponteiro aponta para o nó filho à esquerda
    struct NoBST* direita; // ponteiro aponta para o nó filho à direita
} NoBST;

NoBST* criarNoBST(const char* valor){
    NoBST *novo = (NoBST *)malloc(sizeof(NoBST)); //Ponteiro malloc retorna o endereço do no criado que sera manipulado via ponteiro
    strcpy(novo->valor, valor);
    novo->esquerda = NULL; //ponteiro um ponteiro nulo indica nao tem filho
    novo->direita = NULL;  //Idem acima
    return novo; // retorna o endereço do no criado
}

//insere elemento na BST(ordem alfabetica)
NoBST* inserirBST(NoBST* raiz, const char* valor){
    if (raiz == NULL){
        return criarNoBST(valor);
    }
    if (strcmp(valor, raiz->valor) < 0){
        raiz->esquerda = inserirBST(raiz->esquerda, valor);
    }else {
        raiz->direita = inserirBST(raiz->direita, valor);
        
    }
    return raiz;
}

//busca na BST
bool buscarBST(NoBST* raiz, const char* chave){
    if (raiz == NULL)
        return false;
    if (strcmp(chave, raiz->valor) == 0)
        return true;
    if (strcmp(chave, raiz->valor) < 0)
        return buscarBST(raiz->esquerda, chave);
    else
        return buscarBST(raiz->direita, chave);
}

//Percurso em ordem
void emOrdemBST(NoBST* raiz){
    if(raiz != NULL){
        emOrdemBST(raiz->esquerda);
        printf("%s", raiz->valor);
        emOrdemBST(raiz->direita);
    }
}

//liberar memoria
void liberarBST(NoBST* raiz){
    if (raiz != NULL){
        liberarBST(raiz->esquerda);
        liberarBST(raiz->direita);
        free(raiz);
    }
}

//----------TRIE-------------------

#define TAMANHO_ALFABETO 26

typedef struct NoTrie{
    struct NoTrie *filho[TAMANHO_ALFABETO];
    bool ehFimDePalavra;

} NoTrie;

NoTrie* criarNoTrie(){
    NoTrie *novo = (NoTrie *)malloc(sizeof(NoTrie));
    novo->ehFimDePalavra = false;
    for (int i = 0; i < TAMANHO_ALFABETO; i++)
        novo->filho[i] = NULL;
    return novo;
}

void normalizar(const char* entrada, char* saida){
    int j = 0;
    for (int i = 0; entrada[i] != '\0'; i++) {
        char c = entrada[i];
        if (c >= 'A' && c <= 'Z') 
            c += 32;
        if (c>= 'a' && c <= 'z')
            saida[j++] = c;
    }
    saida[j] = '\0';
}

void inserirTrie(NoTrie* raiz, const char* palavra){
    NoTrie* atual = raiz;
    for (int i = 0; palavra[i] != '\0'; i++){
        int indice = palavra[i] - 'a';
        if (atual->filho[indice] == NULL)
            atual->filho[indice] = criarNoTrie();
        atual = atual->filho[indice];
    }
    atual->ehFimDePalavra = true;
}

bool buscarTrie(NoTrie* raiz, const char* palavra){
    NoTrie *atual = raiz;
    for (int i = 0; palavra[i] != '\0'; i++){
        int indice = palavra[i] - 'a';
        if (atual->filho[indice] == NULL)
            return false;
        atual = atual->filho[indice];
    }
    return atual != NULL && atual->ehFimDePalavra;
}

void listaPalavras(NoTrie* no, char* buffer, int nivel){
    if (no->ehFimDePalavra){
        buffer[nivel] = '\0';
        printf("%s", buffer);
    }
    for (int i = 0; i < TAMANHO_ALFABETO; i++)
    {
        if(no->filho[i] != NULL){
            buffer[nivel] = 'a' + i;
            listaPalavras(no->filho[i], buffer, nivel + 1);
        }
    }
    
}

int liberarTrie(NoTrie* no){
    for (int i = 0; i < TAMANHO_ALFABETO; i++)
    if (no->filho[i] != NULL)
        liberarTrie(no->filho[i]);
    free(no);
}


int main(){
    //BST
    printf("\nBST\n");
    NoBST *raizBST = NULL;
    raizBST = inserirBST(raizBST, "Pegadas de Lama");
    raizBST = inserirBST(raizBST, "Chave perdida");
    raizBST = inserirBST(raizBST, "Livro com pagina faltando");
    raizBST = inserirBST(raizBST, "Lencol manchado");
    raizBST = inserirBST(raizBST, "Gaveta perdida");

    printf("Em ordem (BST)");
    emOrdemBST(raizBST);
    printf("\nBuscar 'Lencol manchado' (BST): %s\n", buscarBST(raizBST, "Lencol manchado") ? " Encontrado" : "Não encontrado");
    printf("buscar 'oculos' (BST): %s\n", buscarBST(raizBST, "oculos") ? "encontrado" : "Não encontrado");


    // TRIE

    printf("TRIE\n");
    NoTrie* raizTrie = criarNoTrie();
    char normalizada[100];
    normalizar("Pegadas de Lama", normalizada);
    inserirTrie(raizTrie, normalizada);
    normalizar("Chave perdida", normalizada);
    inserirTrie(raizTrie, normalizada);
    normalizar("Livro com pagina faltando", normalizada);
    inserirTrie(raizTrie, normalizada);
    normalizar("Lencol manchado", normalizada);
    inserirTrie(raizTrie, normalizada);
    normalizar("Gaveta perdida", normalizada);
    inserirTrie(raizTrie, normalizada);

    printf("Palavra na Trie: ");
    char buffer[100];
    listaPalavras(raizTrie, buffer, 0);
    printf("\n");
    normalizar("Lencol manchado", normalizada);
    printf("Buscar 'lencolmanchado' (TRIE): %s\n", buscarTrie(raizTrie, normalizada) ? " Encontrado" : "Não encontrado");
    normalizar("oculos", normalizada);
    printf("buscar 'oculos' (BST): %s\n", buscarTrie(raizTrie, normalizada) ? "encontrado" : "Não encontrado");

    liberarBST(raizBST);
    liberarTrie(raizTrie);
}