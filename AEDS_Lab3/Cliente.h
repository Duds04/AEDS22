#include <stdio.h>
#include <string.h>
#include "Endereco.h"

typedef struct{
    char nome[800];
    long unsigned int cpf;
    int numeroConta;
    Endereco endereco;
}Cliente;


void Inicializa(Cliente* cliente, int numeroConta, long unsigned int cpf, char nome[], Endereco endereco);
void ImprimeCliente(Cliente* cliente);
int getNumeroContaCl(Cliente* cliente);
char* getNomeCliente(Cliente* cliente);
void setNumeroContaCl(Cliente* cliente, int newNumero);
void setNomeCliente(Cliente* cliente, char* newNome);
void setCpf(Cliente* cliente, long unsigned int newCpf);
Endereco getEndereco(Cliente* cliente);
void setEndereco(Cliente* cliente, Endereco newEndereco);

