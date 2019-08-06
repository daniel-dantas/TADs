/* 
 * File:   funcionario.h
 * Author: daniel
 *
 * Created on 6 de Agosto de 2019, 13:41
 */

typedef struct funcionario Funcionario;

Funcionario *new_Funcionario(char nome[], float salario);
void imprimeFuncionario(Funcionario *funcionario);



