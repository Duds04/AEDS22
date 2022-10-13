
#include "TADCliente.h"
void InicializaCliente(Cliente* pCliente, char* nome, char* cpf, int idade, Endereco* pEndereco){
    strcpy(pCliente->nome, nome); //inicializa string
    strcpy(pCliente->cpf, cpf);
    pCliente->idade = idade;
    pCliente->endereco = *(pEndereco);
}
void ImprimeCliente(Cliente* pCliente){
    printf("%s\n", pCliente->nome);
    printf("%s\n", pCliente->cpf);
    printf("%d\n", pCliente->idade);
    ImprimeEndereco(&(pCliente->endereco));
}