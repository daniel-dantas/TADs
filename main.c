
#include <stdio.h>

#include "pilha.h"
#include "fila.h"
#include "lista.h"


void main(){
    
    Lista *l = new_Lista();
    
    addLista(l, 2);
    addLista(l, 3);
    addLista(l, 5);
    
    printf("\nTamanho: %d", sizeList(l));
    
    printf("\nPosição 1: %d", getList(l, 1));
    removeLista(l, 1);
    
    printf("\nTamanho: %d", sizeList(l));
    printf("\nPosição 1: %d", getList(l, 1));
    
}

