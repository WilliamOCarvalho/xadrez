#include <stdio.h>

/*
 * Programa: Simulando Movimentos de peças de xadrez
 * Peças: Torre, Bispo, Rainha, Cavalo
 * Nível: Mestre
 * Técnicas: Recursão, Loops Aninhados, Controle de Fluxo
 * Autor: [William Carvalho]
 */

 // Função recursiva para mover a TORRE (5 casas para Direita)
 void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
 }

 // Função recursiva para mover a RAINHA (8 casas para Esquerda)
 void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
 }

 // Função recursiva para mover o BISPO (Diagonal: cima + direita)
 void moverBispoRecursivo(int passos) {
    if (passos == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(passos - 1);
 }

 // Função extra com loops aninhados para o BISPO
 void moverBispoLoopAninhado(int linhas, int colunas){
    for (int i = 0; i < linhas; i++) { // Movimento vertical (Cima)
        for (int j = 0; j < colunas; j++) { // Movimento horizontal (Direita)
            if(i == j){
                printf("Cima Direita\n");
            }
        }
    }
 }

// Função para movimentar o CAVALO (duas casas para cima, uma para a direita)
void moverCavalo() {
    const int casasCima = 2;
    const int casasDireita = 1;
    int i, j;

    printf("Movimento do Cavalo (2 casas para Cima e 1 para Direita):\n");

    for (i = 0; i < casasCima + 1; i++){
        if (i < casasCima) {
            printf("Cima\n");
            continue;
        }
        for (j = 0; j < casasDireita; j++){
            if (j == 0){
                printf("Direita\n");
                break; // Termina o movimento do cavalo
            }
        }
    }
}

int main() {
    // TORRE
    printf("Movimento da Torre (5 casas para a Direita):\n");
    moverTorre(5);

    printf("\n");

    // BISPO - recursiva
    printf("Movimento do Bispo (5 casas na Diagonal - Parte Recursiva):\n");
    moverBispoRecursivo(5);

    printf("\n");

    // BISPO - parte com loops aninhados
    printf("Movimento do Bispo (com Loops Aninhados - Diagonal):\n");
    moverBispoLoopAninhado(5, 5);

    printf("\n");

    // RAINHA
    printf("Movimento da Rainha (8 casas para Esquerda):\n");
    moverRainha(8);

    printf("\n");

    // CAVALO (com loops aninhados e controle de fluxo)
    moverCavalo();

    return 0;
}

/* 
Nível: Aventureiro

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

    printf("\n"); // Espaço entre movimentos

    // =========================
    // Movimento do CAVALO (For + While Aninhando)
    // =========================
    // O Cavalo se move 2 casas para baixo e 1 para a esquerda
    // Será utilizado um loop for externo e um while interno
    printf("Movimento do Cavalo (2 casas para Baixo e 1 para a Esquerda):\n");

    const int movimentosBaixo = 2;
    const int movimentosEsquerda = 1;

    for (int passo = 1; passo <= movimentosBaixo; passo++) {
        printf ("Baixo\n");

        // Loop interno será executado somente após os dois passos para baixo
        if (passo == movimentosBaixo) {
            int contador = 1;
            while (contador <= movimentosEsquerda) {
                printf("Esquerda\n");
                contador++;
            }
        }




    }


    return 0;
}
 */