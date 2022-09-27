#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int numero;
    int data;
    int hora;
    int estaConcluida;
}Tarefas;

void imprimeTarefa(Tarefas* tarefa);
void inicializaTarefa(Tarefas* tarefa, int numero, int data, int hora, int estaConcluida);

//void setNumero(int numero);
// ...
//int getNumero(Tarefas* tarefa);
// ...
