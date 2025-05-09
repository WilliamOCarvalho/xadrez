#include <stdio.h>

/*
 * Programa: Simulando Movimentos de peças de xadrez
 * Peças: Torre (For), Bispo (While), Rainha (Do-While)
 * Autor: [William Carvalho]
 */

int main() {
    int i;

    // ========================
    // Movimento da TORRE (for)
    // ========================
    // A Torre se move 5 casas para a direita
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n"); // Espaço entre movimentos

    // ========================
    // Movimento do BISPO (while)
    // ========================
    // O Bispo se move 5 casas na diagonal para cima e à direita
    int contadorBispo = 1;
    printf("Movimento do Bispo (5 casas na Diagonal para Cima e Direita):\n");
    while (contadorBispo <= 5) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    printf("\n"); // Espaço entre movimentos

    // ========================
    // Movimento da RAINHA (do-while)
    // ========================
    // A Rainha se move 8 casas para a esquerda
    int contadorRainha = 1;
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= 8);

    return 0;
}
