#include <stdio.h>

int main (){

    int index;
    char *nomesAlunos[3][3] = {
        {"Aluno 0", "Aluno 1", "aluno 2"},
        {"Pt: 30" , "Pt: 60" , "Pt: 90"},
        {"Mat: 90", "Mat: 60", "Mat: 30"} 
    };

    printf("Digite o numero do aluno que queira ver as notas... \n");
    printf("Para o aluno 0, digite 0\n");
    printf("Para o aluno 1, digite 1\n");
    printf("Para o aluno 2, digite 2\n");
    scanf("%d", &index);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < i; j++){
        printf("%s,%s,%s \n", nomesAlunos[i][j], nomesAlunos[i][j], nomesAlunos[i][j]);
        }
    }
    

    printf("As notas do %s são: %s, %s... \n", nomesAlunos[0][index], nomesAlunos[1][index], nomesAlunos[2][index]);

    return 0;
}
