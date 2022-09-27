#include <stdio.h>
#include <stdlib.h>
#include "Contabancaria.h"

int main(){
    Endereco endereco;

    InicializaEndereco(&endereco, 60, "Rua Zé da Gaita", "São Francisco", "Belo Horizonte", "MG");

    Cliente cliente;
    Cliente *ptrCliente = &cliente;

    InicializaCliente(ptrCliente, 918556, 11122233300, "Maria", endereco);
    ImprimeCliente(ptrCliente);
	ContaBancaria conta1;


    char nome[100] = "Roberto Carlos";

	InicializaConta(&conta1, 918556, 300.00, 2021, "Corrente", ptrCliente);
	printf("\nAntes da movimentacao:\n");
	ImprimeConta(&conta1);

	Deposito(&conta1,20.00);
	Saque(&conta1, 70.00);
	printf("\nDepois da movimentacao:\n");
	ImprimeConta(&conta1);

	avaliaCliente(&conta1, 2022);

    printf("\n");

}
