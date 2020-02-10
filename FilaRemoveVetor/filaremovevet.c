#include <stdio.h>
#include <stdlib.h>

typedef struct fila {
int *dados;
int N, p, u;
} fila;

/*
void inicializa(fila *f){
    f->N=10;
    f->dados=malloc(f->N*sizeof(int));
    if(f->dados==NULL) exit(EXIT_FAILURE);
    f->p=f->u=0;
}
*/
/*
int enfileira (fila *f, int x){
    if(f->u==f->N){
        f->N*=2;
        f->dados=realloc(f->dados,f->N*sizeof(int));
        if(f->dados==NULL) return 0;
    }
    f->dados[f->u]=x;
    f->u++;
    return 1;
}
*/

int desenfileira (fila *f, int *y){
    if(f->p==f->u) return 0;
    *y=f->dados[f->p];
    f->p++;
    return 1;
}