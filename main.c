
#include <stdio.h>

#include "pilha.h"
#include "fila.h"
#include "lista.h"
#include "funcionario.h"


void main(){
    
    Lista *l = new_Lista();
    
    addLista(l, new_Funcionario("Daniel", 1000));
    addLista(l, new_Funcionario("Jonas", 2000));
    addLista(l, new_Funcionario("Gabriel", 3000));
    
    int i;
    for(i = 0; i < sizeList(l);i++){
        printf("\nPessoa %d", i+1);
        imprimeFuncionario(getList(l, i));
    }
    
    
}

