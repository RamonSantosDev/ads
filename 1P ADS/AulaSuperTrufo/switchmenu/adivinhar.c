#include <stdio.h>
#include <stdlib.h> 
/*A biblioteca <stdlib.h> é um header da linguagem C que faz parte da biblioteca padrão.
O nome vem de "standard library" (biblioteca padrão).
Ela contém funções utilitárias gerais, como:
Gerenciamento de memória dinâmica:
malloc(), calloc(), realloc(), free()
Conversão de strings para números:
atoi() (string → int),
atof() (string → double),
strtol(), strtod() etc.
Geração de números aleatórios:
rand(), srand()
Controle de processos:
exit(), abort(), system()
Ordenação e busca em arrays:
qsort(), bsearch()*/ 
#include <time.h>
/*Principais recursos do <time.h>
Tipos definidos:
time_t → usado para representar o tempo em segundos desde a epoch (1º de janeiro de 1970, UTC).
struct tm → estrutura que guarda data/hora detalhada (ano, mês, dia, hora, minuto, segundo...).
clock_t → usado para medir tempo de CPU.
Funções mais usadas:
time() → obtém o tempo atual em segundos desde 1970.
localtime() → converte time_t para uma struct tm com hora local.
gmtime() → converte time_t para UTC.
strftime() → formata data/hora em string.
difftime() → calcula diferença entre dois tempos.
clock() → mede o tempo de execução do programa.*/

int main (){
    int opcao;
    int numeroSecreto, palpite;

    printf("*** Menu Principal ***\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma Opção: ");
    scanf("%d", &opcao);



    switch (opcao)
    {
    case 1:
       srand(time(0));
       numeroSecreto = rand() % 10;
       printf("Digite um Numero de 0 a 9:" );
       scanf("%d", &palpite);
       if (numeroSecreto == palpite)
       {
        printf("Você acertou!\n");
       }else{
        printf("Você errou!\n");
       }
       
       printf("numero secreto %d", numeroSecreto);
        break;
    case 2:
        /* code */
        break;
    case 3:
        /* code */
        break;    
    default:
        printf("Opção invalida");
        break;
    }








}