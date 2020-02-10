#include <stdio.h>
#include <stdlib.h>


typedef struct pilha {
int *dados;
int N, topo;
} pilha;
/*
void inicializa(pilha *p){
    p->N=10;
    p->dados=malloc(p->N*sizeof(int));
    
    if(p->dados==NULL){
        exit(EXIT_FAILURE);
    }
    p->topo=0;
}

*/
/*void imprime(pilha *p){
    for(int i=0;p->dados!=NULL;i++){
        printf("%d\n",p->dados[i]);
    }
}
*/

/*
int empilha (pilha *p, int x){

    if(p->topo==p->N){
        p->dados=realloc(p->dados,2*p->N*sizeof(int));

        if(p->dados==NULL)
            return 0;
    p->N*=2;
    }

    p->dados[p->topo]=x;

    p->topo++;

    return 1;
}
*/

int desempilha (pilha *p, int *y){ 
    
    if(p->topo!=NULL){
    p->topo--;
    *y=p->dados[p->topo];
    return 1;
    }
else return 0;
        

}



/*
int main(){
    pilha *p;
    inicializa(p);
    int x;
    int *y;

    while(scanf("%d",&x)!=EOF){
        empilha(p,x);
    }

//    imprime(p);

    desempilha(p,y);

    return 0;
}
*/