#include <stdio.h>

int main() {
    // Movimentação da Torre usando FOR
    int casasTorre = 5; // Número de casas que a torre vai andar
    printf("Movimentação da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimentação do Bispo usando WHILE
    int casasBispo = 5; // Número de casas que o bispo vai andar
    int contadorBispo = 1;
    printf("Movimentação do Bispo:\n");
    while (contadorBispo <= casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }
    printf("\n");

    // Movimentação da Rainha usando DO-WHILE
    int casasRainha = 8; // Número de casas que a rainha vai andar
    int contadorRainha = 1;
    printf("Movimentação da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);
    printf("\n");

    // Movimentação do Cavalo usando FOR + WHILE (loops aninhados)
    int movimentosVerticais = 2; // Cavalo se move duas casas para baixo
    int movimentosHorizontais = 1; // Depois uma casa para esquerda
    int i;

    printf("Movimentação do Cavalo:\n");

    // Primeiro loop FOR para os movimentos verticais
    for (i = 1; i <= movimentosVerticais; i++) {
        printf("Baixo\n");
    }

    // Depois, um loop WHILE para o movimento horizontal
    int j = 1;
    while (j <= movimentosHorizontais) {
        printf("Esquerda\n");
        j++;
    }

    return 0;
}
