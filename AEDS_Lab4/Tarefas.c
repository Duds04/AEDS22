#include "Tarefas.h"

void imprimeTarefa(Tarefas* tarefa){
    printf("Numero: %d\n", tarefa->numero);
    printf("Dia-mês-ano: %d\n", tarefa->data);
    printf("Hora: %d\n", tarefa->hora);
    printf("A tarefa já foi concluida: %d\n", tarefa->estaConcluida);
}

void inicializaTarefa(Tarefas* tarefa, int numero, int data, int hora, int estaConcluida){
    tarefa->numero = numero;
    tarefa->data = data;
    tarefa->hora = hora;
    tarefa->estaConcluida = estaConcluida;
}
