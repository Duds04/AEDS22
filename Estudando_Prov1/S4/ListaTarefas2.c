#include "ListaTarefas2.h"

int LEInicializa(LETarefas* pLista){
    //criando celula cabeça
    pLista->pPrimeiro = (pCelulaTarefa)(malloc(sizeof(CelulaTarefa)));
    pLista->pUltimo = pLista->pPrimeiro;
    pLista->pUltimo->pProx = NULL;
}

int LEEhVazia(LETarefas* pLista){
    if (pLista->pPrimeiro == pLista->pUltimo)
        return 1;
    return 0;
}

int LEInsereFinal(LETarefas* pLista, Tarefa* item){
    // cria uma nova celula
    pLista->pUltimo->pProx = (pCelulaTarefa)malloc(sizeof(CelulaTarefa));
    // popula a celula
    pLista->pUltimo->pProx->item = *(item);
    pLista->pUltimo->pProx->pProx = NULL;
    return 1;
}

int LERetiraFinal(LETarefas* pLista){
    if(LEEhVazia)
        return 0;
    pCelulaTarefa pAux;
    pAux = pLista->pUltimo;
    pLista->pUltimo = NULL;
    free(pAux); // desalocando a memoria do que foi retirado
    return 1;
}

int LERetiraInicio(LETarefas* pLista){
    if(LEEhVazia)
        return 0;
    pCelulaTarefa pAux;
    pAux = pLista->pPrimeiro->pProx; //primeiro elemento pós celula cabeça
    pLista->pPrimeiro->pProx = pAux->pProx;
    free(pAux);
    return 1;
}

int LEImprimeTarefas(LETarefas *pLista){
    if(LEEhVazia)
        return 0;

    pCelulaTarefa pAux;
    pAux = pLista->pPrimeiro->pProx; //PEGADO PRIMEIRO ELEMENTO DA LISTA
    while(pAux!=NULL){
        ImprimeTarefa(&(pAux->item));
        pAux = pAux->pProx;
    }

    return 1;
}