#include "lista_de_tarefas.h"

void LTinicializa(ListaTarefas* lista){
    lista->ultimo = 0; //recebe o inicio da lista para a var ultimo
}

int LTinsercao(ListaTarefas* lista, Tarefas tarefa, int posicaoLista){
    posicaoLista--;
    int ultimo = lista->ultimo;
    int antes = 0;

    if(ultimo == MaxTam) return 0; //lista cheia

    if(posicaoLista > (ultimo-1)){
        lista->tarefas[ultimo] = tarefa;
        lista->ultimo++;
        return 1;
    }
    
    for(int i = ultimo; i>=posicaoLista; i--){
        antes = i - 1;
        lista->tarefas[i] = lista->tarefas[antes];
    }

    lista->tarefas[posicaoLista] = tarefa;
    lista->ultimo++;
    return 1;
}

int LTImprimir(ListaTarefas* lista){
    if(lista->ultimo == 0){
        printf("Lista Vazia\n\n");
        return 0;
    }

    for(int i=0; i<(lista->ultimo);i++){
        imprimeTarefa(&(lista->tarefas[i]));
        printf("\n");
    }

    printf("Ultimo index nao ocupado: %d\n", lista->ultimo);

    return 1;
}

int LTremocao(ListaTarefas* lista, int posicaoLista){
    int prox = 0;
    posicaoLista--;

    if(posicaoLista > MaxTam-1) return 0; //tá tentando remover elementos que não estão na lista
    if(posicaoLista+1 == lista->ultimo){
      lista->ultimo--;
      return 1;
    }

    for(int i=posicaoLista; i<(lista->ultimo); i++){
        prox = i+1;
        lista->tarefas[i] = lista->tarefas[prox];
    }

    lista->ultimo--;
    return 1;
}

int LTintercalar(ListaTarefas* lista1, ListaTarefas* lista2, ListaTarefas* listaNova){
    int tamanhoTotal = ((lista1->ultimo) + (lista2->ultimo));
    if(tamanhoTotal == MaxTam) return 0; //lista ultrapassaria o valor max
    int index1, index2;
    index1 = 0;
    index2 = 0;

    if((lista1->ultimo)>(lista2->ultimo)){
         for(int i=0; i<tamanhoTotal; i++){
            if(i%2 && index2!=(lista2->ultimo)){
                listaNova->tarefas[i] = lista2->tarefas[index2];
                index2++;
            }else{
                listaNova->tarefas[i] = lista1->tarefas[index1];
                index1++;
            }  
            (listaNova->ultimo)++;
        }
    }
    else{
        for(int i=0; i<tamanhoTotal; i++){
            if(i%2 && index1!=(lista1->ultimo)){
                listaNova->tarefas[i] = lista1->tarefas[index1];
                index1++;
            }else{
                listaNova->tarefas[i] = lista2->tarefas[index2];
                index2++;
            }  
            (listaNova->ultimo)++;
        }
    }
    return 1;
}

