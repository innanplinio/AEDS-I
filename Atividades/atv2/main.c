#include <stdio.h>
#include <stdlib.h>

typedef struct aluno
{
    char matricula[10];
    char nome[30];
    char endereco[50];;
    char curso[30];
}aluno;

int main()
{
    aluno a[10];
    int i;
    for(i=0;i<10;i++)
    {
        printf("Digite as informacoes do aluno\n");
        printf("Nome:");
        gets(a[i].nome);
        printf("Matricula:");
        gets(a[i].matricula);
        printf("Endereco:");
        gets(a[i].endereco);
        printf("Curso:");
        gets(a[i].curso);
        printf("\n");
    }
    printf("\nInformacoes fornecidas:\n");
    for(i=0;i<10;i++)
    {
        printf("---------------------------------------------------------------------------------------");
        printf("\nNome:");
        puts(a[i].nome);
        printf("\nMatricula:");
        puts(a[i].matricula);
        printf("\nEndereco:");
        puts(a[i].endereco);
        printf("\nCurso:");
        puts(a[i].curso);
        printf("\n");
    }
    return 0;
}
