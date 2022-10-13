#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ITarefa{
    int numero;
    int estaConcluida;
}Tarefa;

void InicializaTarefa(Tarefa* tarefa, int numero, int estaConcluida);
void ImprimeTarefa(Tarefa* tarefa);