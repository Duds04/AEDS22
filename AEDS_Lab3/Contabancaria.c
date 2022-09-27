#include <stdio.h>
#include <time.h>
#include <string.h>
#include "Contabancaria.h"

void InicializaConta(ContaBancaria* conta, int numero, double saldo, unsigned int anoAbertura,char* tipo, Cliente* cliente){
	(*conta).numero = numero;
	(*conta).saldo = saldo;
	(*conta).anoAbertura = anoAbertura;
	strcpy((*conta).tipo, tipo);
	conta->cliente = *cliente; //passamos como parametro o ponteiro do cliente por isso estamos convertendo o valor novamente p/ estrutura
}
void Deposito (ContaBancaria* conta, double valor){
	(*conta).saldo += valor;
}
void Saque (ContaBancaria* conta, double valor){
	(*conta).saldo -= valor;
}
void ImprimeConta (ContaBancaria *conta){
	printf("Numero: %d\n", conta->numero);
	printf("Saldo: %f\n", conta->saldo);
	printf("Ano Abertura: %u\n", conta->anoAbertura);
	printf("Tipo: %s\n", conta->tipo);
	ImprimeCliente(&(conta->cliente));
}

int avaliaCliente(ContaBancaria *conta, int anoAtual){
    if((anoAtual-(conta->anoAbertura))>5){
        printf("Pode pegar emprestimo\n");
        return 1;
    }
    printf("Nao pode pegar emprestimo\n");
    return 0;
}


int getNumeroConta(ContaBancaria *conta){
    return conta->numero;
}
double getSaldo(ContaBancaria *conta){
    return conta->saldo;
}
char* getTipo(ContaBancaria *conta){
    return conta->tipo;
}
unsigned int getAnoAbertura(ContaBancaria *conta){
    return conta->anoAbertura;
}
void setNumeroConta(ContaBancaria *conta, int newNumero){
    conta->numero = newNumero;
}
void setTipo(ContaBancaria *conta, char* newTipo){
    strcpy(conta->tipo, newTipo);
}
void setAnoAbertura(ContaBancaria *conta, unsigned int newAnoAbertura){
    conta->anoAbertura = newAnoAbertura;
}

