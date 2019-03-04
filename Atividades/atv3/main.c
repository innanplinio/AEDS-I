#include <stdio.h>
#include <stdlib.h>

typedef struct funcionario
{
    char codigo[20];
    char nome[30];
    char sexo[10];
    char endereco[50];
    char telefone[15];
    char cargo[20];
    char salario[15];
    char nascimento[10];

}funcionario;

int main()
{
    funcionario f[5];
    int i;
    printf("Entre com os dados dos funcionarios\n");
    for (i=0;i<5;i++) /*Entra com os dados dos funcionarios*/
    {
        printf("\nNome:");
        gets(f[i].nome);
        printf("Codigo:");
        gets(f[i].codigo);
        printf("Sexo:");
        gets(f[i].sexo);
        printf("Endereco:");
        gets(f[i].endereco);
        printf("Telefone:");
        gets(f[i].telefone);
        printf("Cargo:");
        gets(f[i].cargo);
        printf("Salario:");
        gets(f[i].salario);
        printf("Nascimento:");
        gets(f[i].nascimento);
    }
    printf("\nDados dos funcionarios cadastrados:\n");
    for(i=0;i<5;i++) /*Exibe os dados dos funcionarios*/
    {
        printf("\n---------------------\n");
        puts(f[i].nome);
        puts(f[i].codigo);
        puts(f[i].sexo);
        puts(f[i].endereco);
        puts(f[i].telefone);
        puts(f[i].cargo);
        puts(f[i].salario);
        puts(f[i].nascimento);
    }
    return 0;
}
