// Importaçoes
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TADEndereco.h"

// Definir estrutura 
typedef struct{
    char nome[800];
    char cpf[12];
    int idade;
    Endereco endereco;
}Cliente;

// Define prototipos
void InicializaCliente(Cliente* pCliente, char* nome, char* cpf, int idade, Endereco* pEndereco);
void ImprimeCliente(Cliente* pCliente);

// get (tipo das vars) e set void