#include <stdio.h>
#include <string.h>
#include "Cliente.h"

void InicializaCliente(Cliente* cliente, int numeroConta, long unsigned int cpf, char nome[], Endereco endereco){
    cliente->numeroConta = numeroConta;
    cliente->cpf=cpf;
    strcpy(cliente->nome, nome);
    cliente->endereco =  endereco; //atribuindo uma copia do endereco
}
void ImprimeCliente(Cliente* cliente){
	printf("Numero: %d\n", cliente->numeroConta);;
	printf("CPF: %lu\n", cliente->cpf);
	printf("Nome: %s\n", cliente->nome);
	ImprimeEndereco(&(cliente->endereco));
}

int getNumeroContaCl(Cliente* cliente){
    return cliente->numeroConta;
}
char* getNomeCliente(Cliente* cliente){
    return cliente->nome;
}
long unsigned int getCpfCliente(Cliente* cliente){
    return cliente->cpf;
}
Endereco getEndereco(Cliente* cliente){
    return cliente->endereco;
}
void setNumeroContaCl(Cliente* cliente, int newNumero){
    cliente->numeroConta = newNumero;
}
void setNomeCliente(Cliente* cliente, char* newNome){
    strcpy(cliente->nome, newNome);
}
void setCpfCliente(Cliente* cliente, long unsigned int newCpf){
    cliente->cpf = newCpf;
}

void setEndereco(Cliente* cliente, Endereco newEndereco){
    cliente->endereco =  newEndereco;
}

