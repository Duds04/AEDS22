
#include "TADContabancaria.h"

void InicializaContaBancaria(ContaBancaria* pContaBancaria, char* tipo, int anoAbertura, Cliente* pCliente){
    strcpy(pContaBancaria->tipo, tipo); //inicializa string
    pContaBancaria->anoAbertura = anoAbertura;
    pContaBancaria->cliente = *(pCliente);
}

void ImprimeContaBancaria(ContaBancaria* pContaBancaria){
    printf("%s\n", pContaBancaria->tipo);
    printf("%d\n", pContaBancaria->anoAbertura);
    ImprimeCliente(&(pContaBancaria->cliente));
}