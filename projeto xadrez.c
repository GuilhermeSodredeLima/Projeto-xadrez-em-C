#include <stdio.h>

// Função recursiva para movimento da Torre (Direita)
void moverTorre(int casaAtual, int totalCasas) {
    if (casaAtual > totalCasas) return;
    printf("Torre - Casa %d: Direita\n", casaAtual);
    moverTorre(casaAtual + 1, totalCasas); // Chamada recursiva
}

// Função recursiva para movimento da Rainha (Esquerda)
void moverRainha(int casaAtual, int totalCasas) {
    if (casaAtual > totalCasas) return;
    printf("Rainha - Casa %d: Esquerda\n", casaAtual);
    moverRainha(casaAtual + 1, totalCasas); // Chamada recursiva
}

// Função recursiva para movimento do Bispo (Diagonal Cima Direita)
void moverBispoRecursivo(int casaAtual, int totalCasas) {
    if (casaAtual > totalCasas) return;
    printf("Bispo - Casa %d: Cima Direita\n", casaAtual);
    moverBispoRecursivo(casaAtual + 1, totalCasas); // Chamada recursiva
}

// Função com loops aninhados para o Bispo (simulando linha e coluna)
void moverBispoComLoops(int casas) {
    printf("Movimento do Bispo (loops aninhados):\n");
    for (int linha = 1; linha <= casas; linha++) {
        for (int coluna = 1; coluna <= 1; coluna++) {
            printf("Diagonal %d: Cima Direita\n", linha);
        }
    }
}

// Movimento complexo do Cavalo: 2 para cima + 1 para direita (em L)
void moverCavalo() {
    printf("Movimento do Cavalo (loops complexos - cima + direita):\n");

    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;
    int passoVertical = 0, passoHorizontal = 0;

    for (int i = 0; i < movimentosVerticais + 1; i++) {
        if (i < movimentosVerticais) {
            printf("Passo %d: Cima\n", i + 1);
            passoVertical++;
            continue; // Vai para o próximo passo vertical
        }

        // Ao final dos passos verticais, entra na direção horizontal
        for (int j = 0; j < movimentosHorizontais; j++) {
            printf("Passo L%d: Direita\n", j + 1);
            passoHorizontal++;
        }
    }

    printf("Cavalo moveu-se em L: %d cima, %d direita\n", passoVertical, passoHorizontal);
}

int main() {
    int casasTorre = 5;
    int casasRainha = 8;
    int casasBispo = 5;

    // Torre - Direita com recursividade
    printf("Movimento da Torre (recursividade):\n");
    moverTorre(1, casasTorre);

    // pular linha
    printf("\n");

    // Bispo - Cima Direita com recursividade
    printf("Movimento do Bispo (recursividade):\n");
    moverBispoRecursivo(1, casasBispo);

    // pular linha
    printf("\n");

    // Bispo - Cima Direita com loops aninhados
    moverBispoComLoops(casasBispo);

    // pular linha
    printf("\n");

    // Rainha - Esquerda com recursividade
    printf("Movimento da Rainha (recursividade):\n");
    moverRainha(1, casasRainha);

    // pular linha
    printf("\n");

    // Cavalo - Cima x2 e Direita x1 com loops aninhados e controle de fluxo
    moverCavalo();

    return 0;
}