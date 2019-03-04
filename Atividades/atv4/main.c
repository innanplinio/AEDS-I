#include <stdio.h>
#include <stdlib.h>

typedef struct cliente
{
    char nome[30];
    char codigo[20];
    char endereco[30];
    char telefone[15];
    char nascimento[10];


}cliente;

int main()
{
    cliente c[10];
    int i;
    char mes[10];
    printf("Entre com o cadastro dos clientes\n");
    for(i=0;i<10;i++)
    {
        printf("\nNome:");
        gets(c[i].nome);
        printf("Codigo:");
        gets(c[i].codigo);
        printf("Endereco:");
        gets(c[i].endereco);
        printf("Telefone:");
        gets(c[i].telefone);
        printf("Mes do nascimento:");
        gets(c[i].nascimento);
    }
    printf("\nEntre com o mes atual:");
    gets(mes);
    printf("\n\nAniversariantes do Mes\n\n");
    for(i=0;i<10;i++)
    {
        if(strcmp(c[i].nascimento,mes)==0)
        {
            printf("\n-------------------\n");
            puts(c[i].nome);
            puts(c[i].codigo);
            puts(c[i].endereco);
            puts(c[i].telefone);
            puts(c[i].nascimento);
        }
    }
    return 0;
}
