#include "Listas.h"

void FLVazia(TLista *pLista){
    pLista->Primeiro = InicioArranjo;
    pLista->Ultimo = pLista->Primeiro;
} /* FLVazia */

int LEhVazia(TLista *pLista){
    return (pLista->Ultimo == pLista->Primeiro);
} /* LEhVazia */

int LInsere(TLista *pLista, TItem x){
    if (pLista->Ultimo == MaxTam)
        return 0; /* lista cheia */
    pLista->Item[pLista->Ultimo++] = x;
    return 1;
} /* LInsere */

int LRetira(TLista *pLista, int p, TItem *pX){
    int cont;
    if (LEhVazia(pLista) || p >= pLista->Ultimo || p < 0)
        return 0;
    *pX = pLista->Item[p];
    pLista->Ultimo--;
    for (cont = p + 1; cont <= pLista->Ultimo; cont++)
        pLista->Item[cont - 1] = pLista->Item[cont];
    return 1;
} /* LRetira */

int LRetira(TLista *pLista, int p, TItem *pX){
    int cont;
    if (LEhVazia(pLista) || p >= pLista->Ultimo || p < 0)
        return 0;
    *pX = pLista->Item[p];
    pLista->Ultimo--;
    for (cont = p + 1; cont <= pLista->Ultimo; cont++)
        pLista->Item[cont - 1] = pLista->Item[cont];
    return 1;
} /* LRetira */