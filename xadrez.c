#include <stdio.h>

int main() {
   
    // utilizando o for 
    int casasTorre = 5;
    printf("\nMovimento da Torre:\n");

    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    };

    // utilizando o while
    int casasBispo = 5;
    int casasB = 0;
    printf("\nmovimento do Bispo:\n");
    while (casasB < casasBispo) {
        printf("Cima Direita\n");
        casasB++;
    }

    // utilizando o do while
    int casasRainha = 8;
    int casasR = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        casasR++;
    } while (casasR < casasRainha);
    
    

    return 0;
}
