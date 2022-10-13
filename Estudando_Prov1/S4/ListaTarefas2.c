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
    pLista->pUltimo = pLista->pUltimo->pProx;
    pLista->pUltimo->item = *(item);
    pLista->pUltimo->pProx = NULL;
    return 1;
}

int LERemoveInicio(LETarefas* pLista){
    if(LEEhVazia(pLista))
        return 0;
    pCelulaTarefa pAux;
    pAux = pLista->pPrimeiro->pProx; //primeiro elemento pós celula cabeça
    pLista->pPrimeiro->pProx = pAux->pProx;
    free(pAux);
    return 1;
}

int LEImprimeTarefas(LETarefas *pLista){
    if(LEEhVazia(pLista))
        return 0;

    pCelulaTarefa pAux;
    pAux = pLista->pPrimeiro->pProx; //PEGADO PRIMEIRO ELEMENTO DA LISTA
    printf("\nImprimindo\n");
    while(pAux != NULL){
        ImprimeTarefa(&(pAux->item));
        pAux = pAux->pProx;
    }

    return 1;
}