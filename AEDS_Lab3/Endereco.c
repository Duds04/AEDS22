#include <stdio.h>
#include <string.h>
#include "Endereco.h"

void InicializaEndereco(Endereco* endereco, int numero, char* rua, char* bairro, char* cidade, char* UF){
    endereco->numero = numero;
    strcpy(endereco->rua, rua);
    strcpy(endereco->bairro, bairro);
    strcpy(endereco->cidade, cidade);
    strcpy(endereco->UF, UF);
}
void ImprimeEndereco(Endereco* endereco){
    printf("Numero: %d\n", endereco->numero);;
	printf("Rua: %s\n", endereco->rua);
	printf("Bairro: %s\n", endereco->bairro);
	printf("Cidade: %s\n", endereco->cidade);
	printf("Bairro: %s\n", endereco->UF);
}
int getNumero(Endereco* endereco){
    return endereco->numero;
}
char* getRua(Endereco* endereco){
    return endereco->rua;
}
char* getBairro(Endereco* endereco){
    return  endereco->bairro;
}
char* getCidade(Endereco* endereco){
    return endereco->cidade;
}
char* getUF(Endereco* endereco){
    return endereco->UF;
}
void setNumero(Endereco* endereco, int newNumero){
    endereco->numero = newNumero;
}
void setRua(Endereco* endereco, char* newRua){
    strcpy(endereco->rua, newRua);
}
void setBairro(Endereco* endereco, char* newBairro){
    strcpy(endereco->bairro, newBairro);
}
void setCidade(Endereco* endereco, char* newCidade){
    strcpy(endereco->cidade, newCidade);
}
void setUF(Endereco* endereco, char* newUF){
    strcpy(endereco->UF, newUF);
}
