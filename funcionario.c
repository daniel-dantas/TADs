#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcionario.h"

struct funcionario{
    char nome[100];
    float salario;
};

Funcionario *new_Funcionario(char nome[], float salario){
    Funcionario *f = (Funcionario *) malloc (sizeof(Funcionario));
    strcpy(f->nome, nome);
    f->salario = salario;
    return f;
}

void imprimeFuncionario(Funcionario *funcionario){
    printf("\nNome: %s", funcionario->nome);
    printf("\nSalario: R$%.2f", funcionario->salario);
}
