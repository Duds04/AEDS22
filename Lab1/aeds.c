#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void converteData(int num);

/*int main(){
    int num;

    scanf("%d", &num);

    converteData(num);

    return 0;
}*/

void converteData(int num){
    int mes, dia;
    char nomeMes[20];
    mes = 1;
    dia = 0;

    while(num/30!=0){
        mes +=1;
        num = num - 30;
    }

    dia = num;

    switch(mes){
        case 1:
        strcpy(nomeMes, "Janeiro");
        //nomeMes = "";
        break;

        case 2:
        strcpy(nomeMes, "Fevereiro");
        break;

        case 3:
        strcpy(nomeMes, "Marco");
        break;

        case 4:
        strcpy(nomeMes, "Abril");
        break;

        case 5:
        strcpy(nomeMes, "Maio");
        break;

        case 6:
        strcpy(nomeMes, "Junho");
        break;

        case 7:
        strcpy(nomeMes, "Julho");
        break;

        case 8:
        strcpy(nomeMes, "Agosto");
        break;

        case 9:
        strcpy(nomeMes, "Setembro");
        break;

        case 10:
        strcpy(nomeMes, "Outubro");
        break;

        case 11:
        strcpy(nomeMes, "Novembro");
        break;

        case 12:
        strcpy(nomeMes, "Dezembro");
        break;
    }

    printf("%d de %s", dia, nomeMes);
}
