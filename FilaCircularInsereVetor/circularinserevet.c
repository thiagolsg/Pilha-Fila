#include <stdio.h>
#include <stdlib.h>

typedef struct fila{
    int *dados;
    int N, p, u;
} fila;

int enfileira (fila *f, int x){
    int i, j;

    if ((f->u+1)%f->N == f->p){
        f->dados = realloc (f->dados, 2 * f->N *sizeof (int));
        if (f == NULL)
        return 0;
        if (f->p > f->u){
        if (f->N-f->p > f->u){
            for (i = 0, j = f->N; i < f->u; i++, j++){
                f->dados[j] = f->dados[i];
            }
            f->u = f->u+f->N;
        }else {
            for (i = f->N-1, j = 2 * f->N-1; i >= f->p; i--, j--)
            {
                f->dados[j] = f->dados[i]; 
            }
            f->p = j+1;
            }
        }
    f->N = 2 * f->N;
    }
    f->dados[f->u] = x;
    f->u = (f->u+1)%f->N;
    return 1;
}