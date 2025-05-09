#include <stdio.h>

#define BOARD_SIZE 10   // Tamanho do tabuleiro (10x10)

// Função principal
int main(void) {
    // Declaração e inicialização do tabuleiro: 0 indica água.
    int board[BOARD_SIZE][BOARD_SIZE] = {0};

    // Dados do navio horizontal (valor 1)
    // Coordenada inicial (linha, coluna) e tamanho do navio.
    int horizontal_row = 2;        
    int horizontal_col = 4;
    int horizontal_length = 3;     // Número de partes do navio

    // Dados do navio vertical (valor 2)
    int vertical_row = 6;          
    int vertical_col = 1;
    int vertical_length = 4;       // Número de partes do navio

    // Posiciona o navio horizontal: avança para a direita
    for (int j = 0; j < horizontal_length; j++) {
        if ((horizontal_col + j) < BOARD_SIZE) {  // Evita sair dos limites do tabuleiro
            board[horizontal_row][horizontal_col + j] = 1;
        }
    }

    // Posiciona o navio vertical: avança para baixo
    for (int i = 0; i < vertical_length; i++) {
        if ((vertical_row + i) < BOARD_SIZE) {
            board[vertical_row + i][vertical_col] = 2;
        }
    }

    // Exibição das coordenadas do navio horizontal
    printf("Coordenadas do Navio Horizontal:\n");
    for (int j = 0; j < horizontal_length; j++) {
        printf("Parte %d -> Celula: (%d, %d)\n", j + 1, horizontal_row, horizontal_col + j);
    }
    
    printf("\n");

    // Exibição das coordenadas do navio vertical
    printf("Coordenadas do Navio Vertical:\n");
    for (int i = 0; i < vertical_length; i++) {
        printf("Parte %d -> Celula: (%d, %d)\n", i + 1, vertical_row + i, vertical_col);
    }
    
    return 0;
}
