#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0}; //inicializa matriz com 0 (água)

    // Posiciona navio horizontal de tamanho 3 na linha 2, coluna 3

    tabuleiro[2][3] = 3; //linha 2 e coluna 3
    tabuleiro[2][4] = 3; //linha 2 e coluna 4
    tabuleiro[2][5] = 3;
    //usa o nome tabuleiro pois,precisa ser o mesmo para se referir à mesma matriz.

    // Posiciona navio vertical de tamanho 3 na linha 5, coluna 5

    tabuleiro[5][5] = 3;
    tabuleiro[6][5] = 3;//linha 6 e coluna 5
    tabuleiro[7][5] = 3;//linha 7 e coluna 5

    // Exibe o tabuleiro
    //L representa a linha e C representa a coluna.
    for (int L = 0; L < 10; L++) {
        for (int C = 0; C < 10; C++) {
            printf("%d ", tabuleiro[L][C]); //imprime o valor da posição [L][C] da matriz
        }
        printf("\n");
    }

    return 0;
}
