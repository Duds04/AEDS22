#include "Tarefa.h"
// Com celula cabeça

typedef struct NCelulaTarefa* pCelulaTarefa;

typedef struct NCelulaTarefa{
    Tarefa item;
    struct NCelulaTarefa* pProx;
}CelulaTarefa;

