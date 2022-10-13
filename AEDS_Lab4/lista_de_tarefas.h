#include "Tarefas.h"
#define MaxTam 10000

typedef struct{
    Tarefas tarefas[MaxTam];
    int ultimo; //vai receber o valor do 1º elemento pós o ultimo ocupado
}ListaTarefas;

void LTinicializa(ListaTarefas* lista);
int LTinsercao(ListaTarefas* lista, Tarefas tarefa, int posicaoLista);
int LTremocao(ListaTarefas* lista, int posicaoLista);
int LTintercalar(ListaTarefas* lista1, ListaTarefas* lista2, ListaTarefas* novaLista);
int LTImprimir(ListaTarefas* lista1);
