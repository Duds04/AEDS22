#include <stdio.h>
#include <stdlib.h>
#include "TADContabancaria.h"

int main(){
    printf("\nRodando programa...\n");
    Endereco endereco;

    InicializaEndereco(&endereco, "Rua Zé da Gaita", "São Francisco, BH, MG", 60);

    Endereco endereco2;

    InicializaEndereco(&endereco2, "Rua Zé da Gaita2", "São Francisco2, LG, MG", 620);

    Cliente cliente;
    Cliente *ptrCliente = &cliente;

    InicializaCliente(ptrCliente, "Maria", "111.111.111-20", 22, &endereco);
    ImprimeCliente(ptrCliente);
    printf("\n");

    Cliente cliente2;
    Cliente *ptrCliente2 = &cliente2;

    InicializaCliente(ptrCliente2, "jÃO", "111.222.111-20", 54, &endereco2);
    ImprimeCliente(ptrCliente2);
    printf("\n");

	ContaBancaria conta1;

	InicializaContaBancaria(&conta1, "Corrente", 2010, ptrCliente);
	printf("\nAntes da movimentacao:\n");
	ImprimeContaBancaria(&conta1);

    return 0;
}