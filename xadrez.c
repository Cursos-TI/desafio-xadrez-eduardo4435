#include <stdio.h>
#include <string.h>

// Movimento recursivo da Torre
void movimentoTorre(int casas) {
    if (casas > 0) {
        printf("Cima\n");
        movimentoTorre(casas - 1);
    }
}

// Movimento recursivo do Bispo
void movimentoBispo(int casas) {
    if (casas > 0) {
        printf("Cima Direita\n");
        movimentoBispo(casas - 1);
    }
}

// Movimento recursivo da Rainha
void movimentoRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        movimentoRainha(casas - 1);
    }
}

// Movimento do Cavalo usando loops aninhados
void movimentoCavalo(int movimentos) {
    for (int m = 0; m < movimentos; m++) {
        printf("Movimento %d do Cavalo:\n", m + 1);
        for (int i = 0; i < 3; i++) {
            if (i < 2) {
                printf("Cima\n");  // duas casas para cima
            } else {
                printf("Direita\n");  // uma casa para direita
            }
        }
        printf("\n");
    }
}

int main() {
    char escolhaPeca[10];
    int rodadas;

    printf("quantas rodadas tera o jogo? ");
    scanf("%d", &rodadas);

    for (int i = 0; i < rodadas; i++) {
        printf("Qual peça deseja movimentar (torre, bispo, rainha, cavalo): ");
        scanf("%s", escolhaPeca);

        if (strcmp(escolhaPeca, "torre") == 0) {
            int movimento;
            printf("Quantas vezes deseja mover a Torre: ");
            scanf("%d", &movimento);
            printf("Movimentando a Torre %d vezes:\n", movimento);
            movimentoTorre(movimento);

        } else if (strcmp(escolhaPeca, "bispo") == 0) {
            int movimento;
            printf("Quantas vezes deseja mover o Bispo: ");
            scanf("%d", &movimento);
            printf("Movimentando o Bispo %d vezes:\n", movimento);
            movimentoBispo(movimento);

        } else if (strcmp(escolhaPeca, "rainha") == 0) {
            int movimento;
            printf("Quantas vezes deseja mover a Rainha: ");
            scanf("%d", &movimento);
            printf("Movimentando a Rainha %d vezes:\n", movimento);
            movimentoRainha(movimento);

        } else if (strcmp(escolhaPeca, "cavalo") == 0) {
            int movimento;
            printf("Quantas vezez deseja mover o cavalo? ");
            scanf("%d", &movimento);
            movimentoCavalo(movimento);

        } else {
            printf("Peça inválida!\n");
        }

        printf("\n");
    }

    return 0;
}
