#include "Tarefa.h"

typedef struct{
    Tarefa *tarefas;      // vetor de tarefas dinamicamente alocado
    int Primeiro, Ultimo; // index do primeiro e do ultimo elemento
    int tamanho;
} LTarefas;

int LInicializaListaTarefas(LTarefas *pLista, int tamanho); // vai criar a lista
int LInsereListaTarefa(LTarefas *pLista, Tarefa* item, int posicaoLista);
int LEhTarefaVazia(LTarefas *pLista);
int LRetiraTarefa(LTarefas *pLista, Tarefa* guarda, int posicaoLista);
int LImprimeTarefas(LTarefas *pLista);