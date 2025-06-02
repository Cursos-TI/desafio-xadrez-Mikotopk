#include <stdio.h>

/**
 * Desafio de Xadrez - Nível Aventureiro
 *
 * Este programa simula o movimento de quatro peças de xadrez.
 * Torre (for), Bispo (while), Rainha (do-while) e o Cavalo,
 * cujo movimento em "L" é simulado com laços aninhados (for e while).
 */
int main() {
    // --- Definição de Variáveis ---
    const int MOVIMENTOS_TORRE = 5;
    const int MOVIMENTOS_BISPO = 5;
    const int MOVIMENTOS_RAINHA = 8;
    // Novas constantes para o movimento do Cavalo
    const int MOVIMENTOS_CAVALO_BAIXO = 2;
    const int MOVIMENTOS_CAVALO_ESQUERDA = 1;


    // --- 1. Movimento da Torre (usando o laço FOR) ---
    printf("--- Movimento da Torre (5 casas para a direita) ---\n");
    for (int i = 0; i < MOVIMENTOS_TORRE; i++) {
        printf("Direita\n");
    }


    // --- 2. Movimento do Bispo (usando o laço WHILE) ---
    printf("\n--- Movimento do Bispo (5 casas na diagonal superior direita) ---\n");
    int contador_bispo = 0;
    while (contador_bispo < MOVIMENTOS_BISPO) {
        printf("Cima, Direita\n");
        contador_bispo++;
    }


    // --- 3. Movimento da Rainha (usando o laço DO-WHILE) ---
    printf("\n--- Movimento da Rainha (8 casas para a esquerda) ---\n");
    int contador_rainha = 0;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < MOVIMENTOS_RAINHA);


    // --- 4. Movimento do Cavalo (usando laços aninhados FOR e WHILE) ---
    // O movimento em "L" do cavalo é composto por duas fases:
    // Fase 1: Mover-se duas casas para baixo.
    // Fase 2: Mover-se uma casa para a esquerda.
    // Usaremos um laço 'for' externo para controlar essas duas fases.
    // Dentro de cada fase, um laço 'while' executará os passos correspondentes.

    printf("\n--- Movimento do Cavalo (2 casas para baixo, 1 para a esquerda) ---\n");
    // O laço 'for' externo controla as fases do movimento (fase 0 = vertical, fase 1 = horizontal)
    for (int fase = 0; fase < 2; fase++) {
        if (fase == 0) {
            // Se estamos na primeira fase (fase 0), movemos para baixo.
            int passos_verticais = 0;
            // O laço 'while' interno executa os 2 passos para baixo.
            while (passos_verticais < MOVIMENTOS_CAVALO_BAIXO) {
                printf("Baixo\n");
                passos_verticais++;
            }
        } else {
            // Se estamos na segunda fase (fase 1), movemos para a esquerda.
            int passos_horizontais = 0;
            // O laço 'while' interno executa o 1 passo para a esquerda.
            while (passos_horizontais < MOVIMENTOS_CAVALO_ESQUERDA) {
                printf("Esquerda\n");
                passos_horizontais++;
            }
        }
    }


    return 0; // Indica que o programa terminou com sucesso
}