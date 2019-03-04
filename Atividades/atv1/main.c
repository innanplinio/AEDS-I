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
    aluno a;
    printf("Digite as informacoes do aluno\n");
    printf("Nome:");
    gets(a.nome);
    printf("Matricula:");
    gets(a.matricula);
    printf("Endereco:");
    gets(a.endereco);
    printf("Curso:");
    gets(a.curso);
    printf("\nInformacoes fornecidas:\n");
    printf("\nNome:");
    puts(a.nome);
    printf("\nMatricula:");
    puts(a.matricula);
    printf("\nEndereco:");
    puts(a.endereco);
    printf("\nCurso:");
    puts(a.curso);
    return 0;
}
