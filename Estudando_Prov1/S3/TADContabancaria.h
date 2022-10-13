// Passo 1 importações
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include "TADCliente.h"

// Passo 2 definir estrutura
typedef struct{
    Cliente cliente;
    char tipo[10];
    int anoAbertura; 
} ContaBancaria;


// Passo 3 definir o prototipo das funcoes
void InicializaContaBancaria(ContaBancaria* pContaBancaria, char* tipo, int anoAbertura, Cliente* pCliente); // retorno 0 ou 1
void ImprimeContaBancaria(ContaBancaria* pContaBancaria); // só precisa do ponteiro da Conta Bancaria

// gets e sets