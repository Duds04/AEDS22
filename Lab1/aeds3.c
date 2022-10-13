#include <stdio.h>
#include <stdlib.h>
void populaMatriz(int matriz[3][3], int x, int m, int n);
void printarVetor(int matriz[3][3], int x);


int main(){
    int x = 3;
    int n, m;
    int matriz[x][x];
    printf("Escreve: ");
    scanf("%d %d", &m, &n);

    populaMatriz(matriz, x, m, n);
    printarVetor(matriz, x);
    return 0;
}



void populaMatriz(int matriz[3][3], int x, int m, int n){
    int cont = m;

    for(int i = 0; i<x; i++){
        for(int j=0; j<x; j++){
            matriz[i][j] = cont;
            if(cont==n){
                cont = m;
            } else{
                cont++;
            }
        }
    }
}


void printarVetor(int matriz[3][3], int x){
    for(int i = 0; i<x; i++){
        for(int j = 0; j<x; j++){
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }
}
