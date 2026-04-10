#include <stdio.h>
#include <stdalign.h>
#include <string.h>

#define MAX_TERRI 5
#define TAM_STRING 100

struct Territorio
{
    char nome[TAM_STRING];
    char cor[TAM_STRING];
    int tropas;
};

void limparbufferEntrada(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(){
    struct Territorio mundo[MAX_TERRI];
    int totalTerritorio = 0;
    
       printf("==============================\n");
       printf("Vamos cadastrar os 5 territorios iniciais do nosso Mundo.\n");
    
        for (int i = 0; i < MAX_TERRI; i++)
        {
        
        printf("--- Cadastrando Territorio %d ---\n", i + 1);
        printf("Nome do territorio: ");
        fgets(mundo[totalTerritorio].nome, TAM_STRING, stdin);
        printf("cor do exercito (ex: Azul, Verde) ");
        fgets(mundo[totalTerritorio].cor, TAM_STRING, stdin);
        printf("Numero de Tropas: ");
        scanf("%d", &mundo[totalTerritorio].tropas);
        limparbufferEntrada();
        totalTerritorio++;
        }

        if (totalTerritorio > 0)
        {
            printf("====================================");
            printf("MAPA DO MUNDO - ESTADO ATUAL");
            printf("====================================");
            for (int i = 0; i < totalTerritorio; i++)
            {
                printf("\nTERRITORIO %d:\n", i + 1);
                printf("- Nome: %s", mundo[i].nome);
                printf("- Dominado por: Exercito %s", mundo[i].cor);
                printf("- Tropas: %d", mundo[i].tropas);
            }
            
        }
        
    }
    

