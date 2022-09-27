#include "TADNumerosComplexos.h"

void atribuiNumComplexo(NumComplexos* num, float real, float imaginario){
    num -> imaginario = imaginario;
    num -> real = real;
}
void imprimeNumComplexo(NumComplexos num){
    printf("\n%.2f + %.2fi", num.real, num.imaginario);
}
void copiaNumComplexo(NumComplexos origem, NumComplexos* destino){
    (*destino) = origem;
}
NumComplexos somaNumComplexos(NumComplexos num1, NumComplexos num2){
    NumComplexos result;
    result.imaginario = num1.imaginario + num2.imaginario;
    result.real = num1.real + num2.real;
    return result;
}
int ehReal(NumComplexos num){
    if(num.imaginario == 0){
        printf("\nO numero complexo informado é real");
        return 1;
    }

    printf("\nO numero complexo informado nao é real");
    return 0;
}
