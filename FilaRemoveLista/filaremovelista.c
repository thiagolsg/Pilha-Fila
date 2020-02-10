#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
int dado;
struct celula *prox;
} celula;

//complexidade O(1)
/*celula *inicializa(){
    celula *nova=malloc(sizeof(celula));
    if(nova!=NULL){
        nova->prox=nova;
        return nova;
    }
}
*/

/*
celula *enfileira (celula *f, int x){
    celula *nova=malloc(sizeof(celula));
    if(nova!=NULL){
        nova->prox=f->prox;
        f->prox=nova;
        f->dado=x;
    }
    return nova;
}
*/

//complexidade O(1)
int desenfileira (celula *f, int *y){

   if(f->prox==f) return 0;
   celula *lixo=f->prox;
   *y=lixo->dado;
   f->prox=lixo->prox;
   free(lixo);
   return 1; 

}
