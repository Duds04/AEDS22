
#include "ListaTarefas.h"

// o primeiro elemento vai apontar pro ultimo elemento da nossa lista
int LInicializaListaTarefas(LTarefas *pLista, int tamanho){
    pLista->tarefas = (Tarefa*)malloc((sizeof(Tarefa)*tamanho));
    pLista->Primeiro = 0;
    pLista->Ultimo = pLista->Primeiro;
    pLista->tamanho = tamanho;
    return 1;
}
int LEhTarefaVazia(LTarefas *pLista){
    if(pLista->Primeiro == pLista->Ultimo)
        return 1;
    return 0;
}

int LInsereListaTarefa(LTarefas *pLista, Tarefa* item, int posicaoLista){
    //se tentar inserir em um espaço a mais
    if(posicaoLista == pLista->tamanho){
        printf("Lista Cheia\n");
        return 0;
    }
    int index = posicaoLista-1; // lista começa do 1

    if(index < pLista->Ultimo){
        for (int i = index+1; i <= pLista->Ultimo; i++)
        {
            pLista->tarefas[i] = pLista->tarefas[i-1]; // move do elemento ate o ultimo para frente
        }
        pLista->Ultimo++;
    }else pLista->Ultimo = posicaoLista;

    pLista->tarefas[index] = *(item);
    
    return 1;
}

int LRetiraTarefa(LTarefas *pLista, Tarefa* guarda, int posicaoLista){
    if(posicaoLista == pLista->Ultimo){
        pLista->Ultimo = pLista->Ultimo-1; //vai sobrescrever o ultimo
        return 1;
    }

    int index = posicaoLista-1;

    *(guarda) = pLista->tarefas[index];
    for (int i = index; i < pLista->Ultimo; i++)
    {
        pLista->tarefas[i] = pLista->tarefas[i+1]; // atual recebe o posterior
    }

    pLista->Ultimo = pLista->Ultimo-1;
    return 1;
}

int LImprimeTarefas(LTarefas *pLista){
    printf("Imprimindo %d\n", pLista->Ultimo);
    for (int i = 0; i < (pLista->Ultimo); i++)
    {
        ImprimeTarefa((&pLista->tarefas[i]));
    }
    return 1;
}