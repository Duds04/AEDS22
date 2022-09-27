#include "Cliente.h"
typedef struct{
	int numero;
	double saldo;
	char tipo[12];
	int anoAbertura;
	Cliente cliente;
}
ContaBancaria;

void InicializaConta(ContaBancaria* conta, int numero, double saldo, unsigned int anoAbertura, char* tipo, Cliente* cliente);
void Deposito (ContaBancaria* conta, double valor);
void Saque (ContaBancaria* conta, double valor);
void ImprimeConta (ContaBancaria *conta);
int avaliaCliente(ContaBancaria *conta, int anoAtual);
int getNumeroConta(ContaBancaria *conta);
double getSaldo(ContaBancaria *conta);
long unsigned int getCpfConta(ContaBancaria *conta);
char* getTipo(ContaBancaria *conta);
unsigned int getAnoAbertura(ContaBancaria *conta);
void setNumeroConta(ContaBancaria *conta, int newNumero);
void setTipo(ContaBancaria *conta, char* newTipo);
void setAnoAbertura(ContaBancaria *conta, unsigned int newAnoAbertura);

