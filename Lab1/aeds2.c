#include <stdio.h>
#include <stdlib.h>
void ordena(int* veiculo, int n);
void printarVetor(int* veiculo, int n);

/*int main(){
    int n = 30;
    int veiculos[n], media, somaVeiculos; // mês 30 dias
    somaVeiculos = 0;

    for(int i = 0; i<n; i++){
        scanf("%d", &veiculos[i]);
        somaVeiculos += veiculos[i];
    }

    media = somaVeiculos/n;

    ordena(veiculos, n);
    printf("\nMedia %d\n", media);
    printarVetor(veiculos, n);


    return 0;
}*/

void ordena(int* veiculo, int n){
    int troca = 1;
    int guarda;

    do{
        troca = 0;
        for(int i = 0; i<n-1; i++){
            if(veiculo[i] > veiculo[i+1]){
                troca = 1;
                guarda = veiculo[i];
                veiculo[i] = veiculo[i+1];
                veiculo[i+1] = guarda;
            }
        }

    }while(troca);
}

void printarVetor(int* veiculo, int n){
    for(int i = 0; i<n; i++){
        printf("%d \n", veiculo[i]);
    }
}

