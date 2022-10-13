#include "Tarefa.h"
void InicializaTarefa(Tarefa* tarefa, int numero, int estaConcluida){
    tarefa->estaConcluida = estaConcluida;
    tarefa->numero = numero;
}
void ImprimeTarefa(Tarefa* tarefa){
    printf("Número: [%d]\n", tarefa->numero);
    printf("Está: %d\n", tarefa->estaConcluida);

}