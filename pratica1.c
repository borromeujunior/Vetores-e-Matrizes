#include <stdio.h>

int main(){

    int index;

    char *nomesAlunos [3] [3]= {
        {"Aluno 0", "Port: 30", "Mat: 90"},
        {"Aluno 1", "Port: 60", "Mat: 90"},
        {"Aluno 2", "Port: 90", "Mat: 30"}
    };

    printf("Digite o número do aluno que queira ver as notas: \n");
    printf("P/ Aluno 0 digite 0\n");
    printf("P/ Aluno 1 digite 1\n");
    printf("P/ Aluno 2 digite 2\n");

    scanf("%d", &index);

    printf("As notas do %s são: %s , %s \n", nomesAlunos[index][0], nomesAlunos[index][1], nomesAlunos[index][2]);

    return 0;
}