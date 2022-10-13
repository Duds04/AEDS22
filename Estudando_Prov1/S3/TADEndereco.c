
#include "TADEndereco.h"
void InicializaEndereco(Endereco* pEndereco, char* rua, char* logradouro, int numero){
    strcpy(pEndereco->rua, rua); //inicializa string
    strcpy(pEndereco->logradouro, logradouro);
    pEndereco->numero = numero;
}
void ImprimeEndereco(Endereco* pEndereco){
    printf("%s\n", pEndereco->rua);
    printf("%s\n", pEndereco->logradouro);
    printf("%d\n", pEndereco->numero);
}