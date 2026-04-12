
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
#define MAX_EMPRESTIMOS 100 // Definimos uma capacidade para emprestimos.
#define TAM_STRING 100

struct Livros // Definição de estrutura (Struct)
{
    char nome[TAM_STRING];
    char autor[TAM_STRING];
    char editora[TAM_STRING];
    int edicao;
    int disponivel; // 1 para sim, 0 para não.
};

//nova struct para armazenar informaçoes do emprestimos.
struct Emprestimo{
    int indeceLivros;
    char nomeUsuario[TAM_STRING];
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

                biblioteca[totalLivros].nome[strcspn(biblioteca[totalLivros].nome, "\n")] = '\0';
                biblioteca[totalLivros].autor[strcspn(biblioteca[totalLivros].autor, "\n")] = '\0';
                biblioteca[totalLivros].editora[strcspn(biblioteca[totalLivros].editora, "\n")] = '\0';

                printf("digite a edição: ");
                scanf("%d", &biblioteca[totalLivros].edicao);
                limparbufferEntrada();
                
                totalLivros++;

                printf("Livro cadastrado com sucesso!\n");

            } else {
                printf("Limite de livros atingido!\n");
            }
            break;

        case 2:
            printf("\nLista de livros:\n");

            if (totalLivros == 0) {
                printf("Nenhum livro cadastrado.\n");
            } else {
                for (int i = 0; i < totalLivros; i++) {
                    printf("\nLivro %d:\n", i + 1);
                    printf("Nome: %s\n", biblioteca[i].nome);
                    printf("Autor: %s\n", biblioteca[i].autor);
                    printf("Editora: %s\n", biblioteca[i].editora);
                    printf("Edicao: %d\n", biblioteca[i].edicao);
                }
            }
            break;

        case 0:
            printf("Saindo...\n");
            break;

        default:
            printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}