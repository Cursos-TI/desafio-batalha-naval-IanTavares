#include <stdio.h>

int main() {
    // Define o tamanho do tabuleiro
    int tamanho = 10;
    
    // Inicializa o tabuleiro com água (0)
    int tabuleiro[10][10] = {0};

    // Define o tamanho dos navios
    int tamanho_navio = 3;

    // Posiciona um navio horizontalmente
    int linha_h = 2, coluna_h = 4;
    for (int i = 0; i < tamanho_navio; i++) {
        tabuleiro[linha_h][coluna_h + i] = 3;
    }

    // Posiciona um navio verticalmente
    int linha_v = 5, coluna_v = 7;
    for (int i = 0; i < tamanho_navio; i++) {
        tabuleiro[linha_v + i][coluna_v] = 3;
    }

    // Exibe o tabuleiro
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
