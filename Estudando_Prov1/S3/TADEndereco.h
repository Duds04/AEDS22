#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char rua[100];
    char logradouro[1000];
    int numero;
}Endereco;

void InicializaEndereco(Endereco* pEndereco, char* rua, char* logradouro, int numero);
void ImprimeEndereco(Endereco* pEndereco);

// gets e sets