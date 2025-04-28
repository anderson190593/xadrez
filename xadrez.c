#include <stdio.h>

// Função recursiva para movimentar a Torre (horizontalmente para a direita)
void moverTorre(int casas) {
    if (casas <= 0) {
        return; // Condição de parada
    }
    printf("Direita\n");
    moverTorre(casas - 1); // Chamada recursiva
}

// Função recursiva para movimentar a Rainha (horizontalmente para a esquerda)
void moverRainha(int casas) {
    if (casas <= 0) {
        return; // Condição de parada
    }
    printf("Esquerda\n");
    moverRainha(casas - 1); // Chamada recursiva
}

// Função recursiva para movimentar o Bispo (diagonal cima-direita) com loops aninhados
void moverBispo(int casas) {
    if (casas <= 0) {
        return; // Condição de parada
    }
    // Loop externo (movimento vertical)
    for (int i = 0; i < 1; i++) {
        // Loop interno (movimento horizontal)
        for (int j = 0; j < 1; j++) {
            printf("Cima Direita\n");
        }
    }
    moverBispo(casas - 1); // Chamada recursiva
}

// Função para movimentar o Cavalo com loops complexos
void moverCavalo() {
    int movimentosVerticais = 2; // Cavalo se move duas casas para cima
    int movimentosHorizontais = 1; // Depois uma casa para a direita

    printf("Movimentação do Cavalo:\n");

    // Loop externo para o movimento vertical
    for (int i = 0; i < movimentosVerticais; i++) {
        if (i == 1) {
            // Continue para pular alguma lógica se quiser (aqui não será usado, mas é demonstrado)
            continue;
        }
        printf("Cima\n");
    }

    // Loop interno para o movimento horizontal
    int j = 0;
    while (j < movimentosHorizontais) {
        printf("Direita\n");
        j++;
        if (j > movimentosHorizontais) {
            break; // Quebra o loop se exceder o movimento
        }
    }
}

int main() {
    // Movimentação da Torre
    printf("Movimentação da Torre:\n");
    moverTorre(5); // Move 5 casas para a direita
    printf("\n");

    // Movimentação do Bispo
    printf("Movimentação do Bispo:\n");
    moverBispo(5); // Move 5 casas na diagonal cima-direita
    printf("\n");

    // Movimentação da Rainha
    printf("Movimentação da Rainha:\n");
    moverRainha(8); // Move 8 casas para a esquerda
    printf("\n");

    // Movimentação do Cavalo
    moverCavalo();

    return 0;
}
