#include "CelulaTarefas.h"

typedef struct{
    pCelulaTarefa pPrimeiro;
    pCelulaTarefa pUltimo;
}LETarefas;

int LEInicializa(LETarefas* pLista); //cria celula cabeça e seta apontadores para ela
int LEEhVazia(LETarefas* pLista);
int LEInsereFinal(LETarefas* pLista, Tarefa* item);
int LERemoveFinal(LETarefas* pLista);
int LERemoveInicio(LETarefas* pLista);
int LEImprimeTarefas(LETarefas *pLista);