#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void operacao(float val1, float val2, int operador);

int main(){
    float v1, v2;
    char operador;

    printf("Tabela operadores:\n +    -\n *    /\n ^    %c \n", 37);
    printf("Insira o valor 1, operador e o valor 2 (ex: 1 + 1):\n");
    scanf("%f %c %f", &v1, &operador, &v2);

    operacao(v1, v2, operador);
}

void operacao(float val1, float val2, int operador){
    float conta = 0;
    switch(operador){
        case(42):
            conta = val1 * val2;
        break;
        case(43):
            conta = val1 + val2;
        break;
        case(45):
            conta = val1 - val2;
        break;
        case(47):
            conta = val1 / val2;
        break;
        case(37):
            //conta = 2 % 1 ; //val1 % val2;
        break;
        case(94):
            conta = pow(val1, val2);
        break;
    }
    printf("\nResultado: %f\n", conta);
}


