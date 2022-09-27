#include <stdio.h>
#include <stdlib.h>
#include "TADNumerosComplexos.h"

int main(){
    NumComplexos num1, num2, num3, num4;
    atribuiNumComplexo(&num1, 5.5, 2);
    imprimeNumComplexo(num1);

    copiaNumComplexo(num1, &num2);
    imprimeNumComplexo(num2);
    num3 = somaNumComplexos(num1, num2);

    imprimeNumComplexo(num3);
    ehReal(num3);

    atribuiNumComplexo(&num4, 22, 0);
    ehReal(num4);
}
