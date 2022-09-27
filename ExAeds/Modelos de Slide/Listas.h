#include <stdio.h>
#include <stdlib.h>
#define InicioArranjo 0
#define MaxTam 1000

typedef struct {
 int Chave;
 /* outros componentes */
} TItem;

typedef struct {
 TItem Item[MaxTam];
 int Primeiro, Ultimo;
} TLista;

void FLVazia(TLista* pLista);
int LEhVazia(TLista* pLista);
int LInsere(TLista* pLista, TItem x);
int LRetira(TLista* pLista, int p, TItem *pX);
void LImprime(TLista* pLista);
