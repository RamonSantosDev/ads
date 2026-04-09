#include <stdio.h>
#include <stdalign.h>
#include <string.h>

#define MAX_LIVROS 50
#define TAM_STRING 100

struct Livros
{
    char nome[TAM_STRING];
    char autor[TAM_STRING];
    char editora[TAM_STRING];
    int edicao;
};


void limparbufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

 int main(){
     struct Livros biblioteca[MAX_LIVROS];
     int totalLivros = 0;
     int opcao;

     do {
         printf("=========================");
     }
 }