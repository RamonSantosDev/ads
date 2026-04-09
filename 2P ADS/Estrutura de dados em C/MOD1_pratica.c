
/*====================================================
  PRÁTICA: SISTEMA DE BIBLIOTECA - PARTE 1

  OBEJETIVO DESTA PARTE:
  Implementar o cadastro e a listagem de livros usando um arrau estático 
  Foco em struct, entrada/saida de dados e organização basica

*/

#include <stdio.h>
#include <stdalign.h>
#include <string.h> // Para strcspn()

//Constantes Globais
#define MAX_LIVROS 50
#define TAM_STRING 100

struct Livros // Definição de estrutura (Struct)
{
    char nome[TAM_STRING];
    char autor[TAM_STRING];
    char editora[TAM_STRING];
    int edicao;
};

// função para limpar o buffer de entrada
void limparbufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
// função Principal
 int main(){
     struct Livros biblioteca[MAX_LIVROS];
     int totalLivros = 0;
     int opcao;

     // laço principal do Menu
    do {
        printf("BIBLIOTECA - PARTE 1\n");
        printf("1 - cadastro novo livro\n");
        printf("2 - Lista todos os livros\n");
        printf("0 - Sair\n");

        scanf("%d", &opcao);
        limparbufferEntrada();
        // processamento da opção
        switch (opcao)
        {
        case 1: // cadastro de livros
            printf(" cadastro de novo livro\n\n");

            if(totalLivros < MAX_LIVROS){
                printf("digitar o nome do livro: ");
                fgets(biblioteca[totalLivros].nome, TAM_STRING, stdin);

                printf("digite o autor: ");
                fgets(biblioteca[totalLivros].autor, TAM_STRING, stdin);

                printf("Digite a editora: ");
                fgets(biblioteca[totalLivros].editora, TAM_STRING, stdin);

                biblioteca[totalLivros].nome[strcspn(biblioteca[totalLivros].nome, "\n")] =
            }
            break;
        
        default:
            break;
        }
    }





 }