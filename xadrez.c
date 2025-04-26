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

    return 0;
}
