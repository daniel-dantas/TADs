
#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct nodo{
    int index;
    void *elemento;
    struct nodo *proximo;
};

struct lista{
    Nodo *inicio;
};


Lista *new_Lista(){
    Lista *l = (Lista *)malloc(sizeof(Lista));
    l->inicio = NULL;
    return l;
}

void addLista(Lista *lista, void *elemento){
    Nodo *novo = (Lista *) malloc(sizeof (Lista));
    novo->elemento = elemento;
    novo->proximo = NULL;
    novo->index = sizeList(lista);
    if(isEmptyList(lista)){
        lista->inicio = novo;
    }else{
        Nodo *aux = lista->inicio;

        while (aux->proximo != NULL) {
            aux = aux->proximo;
        }

        aux->proximo = novo;
    }
    
}

int isEmptyList(Lista *lista){
    
    if(lista->inicio == NULL){
        return 1;
    }
    return 0;
}

void *getList(int index){
    
}


int removeLista(Lista *lista, int index){
    
    if(isEmptyList(lista)){
        printf("Lista vazia!");
        return NULL;
    }else{
        Nodo *aux;
        for(aux = lista->inicio; aux != NULL; aux = aux->proximo){
            if(aux->index == index){
                
                Nodo aux2;
                
                
            }
        }
        
        
    }
    
    
    
}

int sizeList(Lista *lista){
    int cont = 0;
    Nodo *aux;
    for(aux = lista->inicio; aux != NULL; aux = aux->proximo){
        cont++;
    }
    
    return cont;
}
