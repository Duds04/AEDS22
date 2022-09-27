#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//#include "Tarefas.h"
#include "lista_de_tarefas.c"


int main(){
    Tarefas t1,t2, t3, t4, t5, t6, t7;
    int data, hora, i;

    for(i=1; i<=6; i++){
        if(i=1)
            inicializaTarefa(&t1, i, 1122, 11, 0);
        if(i=2)
            inicializaTarefa(&t2, i, 1453, 12, 1);
        if(i=3)
            inicializaTarefa(&t3, i, 5415, 4, 0);
        if(i=4)
            inicializaTarefa(&t4, i, 2145, 9, 0);
        if(i=5)
            inicializaTarefa(&t5, i, 1234, 2, 1);
        if(i=6)
            inicializaTarefa(&t6, i, 2134, 3, 0);
        if(i=7)
            inicializaTarefa(&t7, i, 1582, 19, 0);
    }

    ListaTarefas l1, l2, l3;

    LTinicializa(&l1);
    LTinsercao(&l1, t1, 1); //inserindo posição de vetor +1
    LTinsercao(&l1, t2, 2);
    LTinsercao(&l1, t3, 3);
    LTinsercao(&l1, t7, 4);
    LTinsercao(&l1, t2, 2);
    LTinsercao(&l1, t3, 3);
    LTinsercao(&l1, t7, 4);
    LTremocao(&l1, 1); //posicao é igual a pVetor + 1 (remove o 1º elemento)
    //LTImprimir(&l1);

    LTinicializa(&l2);
    LTinsercao(&l2, t4, 1); //inserindo posição de vetor +1
    LTinsercao(&l2, t5, 2);
    LTinsercao(&l2, t6, 2);
    LTinsercao(&l2, t1, 4);
    //LTImprimir(&l2);
    

    //printf("\n\nPós remoção: \n");
    //LTImprimir(&l1);

    LTinicializa(&l3);

    LTintercalar(&l1, &l2, &l3);
    LTImprimir(&l3);

    return 0;
}
