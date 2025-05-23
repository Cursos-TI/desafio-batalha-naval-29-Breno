#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0}; // Inicializa matriz com 0 (água)

    // Posiciona navio horizontal de tamanho 3 na linha 2, coluna 3
    tabuleiro[2][3] = 3;
    tabuleiro[2][4] = 3;
    tabuleiro[2][5] = 3;

    // Posiciona navio vertical de tamanho 3 na coluna 5, linhas 5 a 7
    tabuleiro[5][5] = 3;
    tabuleiro[6][5] = 3;
    tabuleiro[7][5] = 3;

    // Posiciona navio diagonal (diagonal principal): tabuleiro[i][i]
    tabuleiro[0][0] = 3;//A linha e coluna têm mesmo índice. Sendo linha 0 e coluna 0 e assim por diante
    tabuleiro[1][1] = 3;
    tabuleiro[2][2] = 3;

    // Posiciona navio diagonal (diagonal secundária): tabuleiro[i][9 - i]
    tabuleiro[0][9] = 3;//A linha é L,a coluna é o contrário dela:9 - L. Sendop assim L++ e C--
    tabuleiro[1][8] = 3;
    tabuleiro[2][7] = 3;

    // Exibe o tabuleiro
    for (int L = 0; L < 10; L++) {
        for (int C = 0; C < 10; C++) {
            printf("%d ", tabuleiro[L][C]);
        }
        printf("\n");
    }

    return 0;
}
