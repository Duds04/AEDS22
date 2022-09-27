typedef struct{
    float real;
    float imaginario;
} NumComplexos;

void atribuiNumComplexo(NumComplexos* num, float real, float imaginario);
void imprimeNumComplexo(NumComplexos num);
void copiaNumComplexo(NumComplexos origem, NumComplexos* destino);
NumComplexos somaNumComplexos(NumComplexos num1, NumComplexos num2);
int ehReal(NumComplexos num);
