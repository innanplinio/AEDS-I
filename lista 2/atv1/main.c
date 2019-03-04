#include <stdio.h>
#include <stdlib.h>

struct lista{

int info;

struct lista* prox;

};
typedef struct lista Lista;

Lista* lst_cria ( ){

return NULL;

}

Lista* lst_insere (Lista* l, int i) {

Lista* novo = (Lista*) malloc (sizeof (Lista) );
Lista* p;
if(l==NULL){
        novo->info=i;
        novo->prox=NULL;
        return novo;
}
else{
for(p=l; p!=NULL;p=p->prox)
{
    if(p->prox==NULL)
    {
        p->prox=novo;
        novo->info=i;
        novo->prox=NULL;
        return l;
    }
}}

novo->info = i;




}

Lista* lst_imprime (Lista* l) {

Lista* p;

for (p = l ; p != NULL; p = p->prox)
{
   if(p->prox==NULL)
    {
        printf ("info = %d\n", p->info);
        return p->info;
    }

}


}

void lst_libera (Lista* l){

Lista* p = l;

while (p != NULL) {

Lista* t = p->prox;

free(p); /* libera a memória apontada por p */

p = t; /* faz p apontar para o próximo */

}

}


int main()
{
    Lista* l;
    l = lst_cria();
    l = lst_insere(l, 23);
    l = lst_insere(l, 17);
    l = lst_insere(l, 50);
    lst_imprime(l);
    lst_libera(l);

    return 0;
}

