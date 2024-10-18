#include <stdio.h>

typedef struct{
    char nome[20];
    int matricula;
    float media;
}Aluno;

void Situacao(Aluno alunos[]){
     
    Aluno alunosAprovados[10];
    Aluno alunosReprovados[10];

    int aprovados=0;
    int reprovados=0;

    for(int i=0;i<3;i++){
        if(alunos[i].media>5.0){
            alunosAprovados[aprovados]=alunos[i];
            aprovados++;
        }else{
            alunosReprovados[reprovados]=alunos[i];
            reprovados++;
        }
    }

    printf("\nAlunos Aprovados\n");
    for (int i = 0; i < aprovados; i++)
    {
        printf("Nome: %s, Matrícula: %d, Média Final: %.2f\n",alunosAprovados[i].nome, alunosAprovados[i].matricula, alunosAprovados[i].media);
    }
    printf("\nAlunos Reprovados\n");
    for (int i = 0; i < reprovados; i++)
    {
        printf("Nome: %s, Matrícula: %d, Média Final: %.2f\n",alunosReprovados[i].nome, alunosReprovados[i].matricula, alunosReprovados[i].media);
    }
}

int main(){

    Aluno alunos[10]={};
    
    do{
    
        for(int i=0;i<3;i++){
            printf("Digite o nome do aluno: ");
            scanf(" %s",&alunos[i].nome);
            printf("Digite a matricula do aluno: ");
            scanf("%d",&alunos[i].matricula);
            printf("Digite a média final do aluno: ");
            scanf("%f",&alunos[i].media);
        }

        Situacao(alunos);
    }while(1!=0);
}