#include <stdio.h>
#include <stdlib.h>

struct lista {

float info;

struct lista* prox;

};
typedef struct lista Lista;

Lista* lst_insere (Lista* l, int z) {

Lista* novo = (Lista*) malloc (sizeof (Lista) );

novo->info = z;

novo->prox = l;

return novo;

}

Lista* lst_cria ( ){

return NULL;

}

void lst_imprime (Lista* l) {

Lista* p;

for (p = l ; p != NULL; p = p->prox)

printf ("info = %d\n", p->info);

}

void lst_libera (Lista* l){

Lista* p = l;

while (p != NULL) {

Lista* t = p->prox;

free(p); /* libera a memória apontada por p */

p = t; /* faz p apontar para o próximo */

}

}

Lista* retira_prefixo (Lista* l, int num)
{
    Lista* aux;
    int x=1, y=0;
    for(aux=l;aux!=NULL;aux=aux->prox)
    {
        x++;
    }
    aux=l;
    if(num>=x)
    {
        while(l!=NULL)
        {
            free(l);
        }
        return l;
    }
    else{
        for(y=0;y<num;y++)
        {
            aux=l->prox;
            free(l);
            l=aux;

        }
        return l;
    }
}

int main()
{
    Lista* l;
    int num = 2;
    l=lst_cria();
    l=lst_insere(l, 10);
    l=lst_insere(l, 20);
    l=lst_insere(l, 30);
    l=lst_insere(l, 40);
    lst_imprime(l);
    system("PAUSE");
    l=retira_prefixo(l, num);
    lst_imprime(l);
    system("PAUSE");
    return 0;
}
