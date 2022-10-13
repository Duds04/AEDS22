#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include "ListaTarefas.h"
#include "ListaTarefas2.h"

int main()
{
    printf("\nRodando...\n");
    Tarefa t1, t2, t3, t4, guarda;

    InicializaTarefa(&t1, 1, 0);
    InicializaTarefa(&t2, 2, 1);
    InicializaTarefa(&t3, 3, 0);
    InicializaTarefa(&t4, 4, 0);

    // ImprimeTarefa(&t2);

    // //Teste lista
    // LTarefas l1;
    // LTarefas* pL1 = &l1;
    // printf("\nInicializa\n");
    // LInicializaListaTarefas(pL1, 5); // vai criar a lista
    // printf("É vazia: %d\n", LEhTarefaVazia(pL1));
    // LInsereListaTarefa(pL1, &(t1), 1);
    // printf("É vazia: %d\n", LEhTarefaVazia(pL1));
    // LInsereListaTarefa(pL1, &(t2), 1);
    // LImprimeTarefas(pL1);
    // LRetiraTarefa(pL1, &(guarda), 1);
    // LImprimeTarefas(pL1);
    // printf("\nGuarda: \n");
    // ImprimeTarefa(&(guarda));

    LETarefas le1;
    LETarefas *pLe1 = &le1;
    LEInicializa(pLe1);
    printf("É vazia: %d\n", LEEhVazia(pLe1));
    LEInsereFinal(pLe1, &t1);
    LEInsereFinal(pLe1, &t2);
    // printf("É vazia: %d\n", LEEhVazia(pLe1));
    LEImprimeTarefas(pLe1);
    LEInsereFinal(pLe1, &t3);
    LEInsereFinal(pLe1, &t4);
    printf("É vazia: %d\n", LEEhVazia(pLe1));
    LEImprimeTarefas(pLe1);
    LERemoveInicio(pLe1);
    LEImprimeTarefas(pLe1);

    return 0;
}