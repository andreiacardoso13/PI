typedef struct lligada {
  int valor;
  struct lligada *prox;
} * LInt;


#include <stdio.h>
//#include <stdlib.h>

// 1
int length(LInt l) {
    int n;
    for (n = 0; l != NULL; n++)
        l=l->prox;
    return n;
}

//2
void freeL (LInt l) {
    LInt aux;
    while (l != NULL){
        aux = l;
        l = l->prox;
        free(aux);
    }
}

//3
void imprimeL (LInt l){
    while (l != NULL){
        printf("%d\n", l->valor);
        l = l->prox;
    }
}

//4
LInt reverseL (LInt l){
    LInt ant = NULL;
    LInt atual = l;
    LInt next = NULL;
    while (atual != NULL){
        next = atual -> prox;
        atual -> prox = ant;
        ant = atual;
        atual = next;
    }
    return ant;
}

//5
void insertOrd (LInt *l, int x){
    LInt new = malloc(sizeof(struct lligada));
    new -> valor = x;
    new -> prox = NULL;

    if (*l == NULL || x < (*l)->valor){
        new->prox = (*l);
        (*l) = new;
    }
    else {
        LInt aux = *l;
        LInt ant = NULL;
        while (aux != NULL && x > aux->valor){
            ant = aux;
            aux = aux->prox;
        }
        if (ant != NULL) ant->prox = new;
        new->prox = aux;
    }
}
