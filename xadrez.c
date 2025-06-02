#include <stdio.h>

// --- Protótipos das Funções Recursivas ---
// Declaramos as funções aqui para que a função 'main' possa encontrá-las,
// mesmo que suas definições estejam no final do arquivo.
void moverTorreRecursivo(int passos_restantes);
void moverBispoRecursivo(int passos_restantes);
void moverRainhaRecursivo(int passos_restantes);


/**
 * Desafio de Xadrez - Nível Mestre
 *
 * Este programa utiliza técnicas avançadas para simular movimentos no xadrez:
 * - Funções recursivas para os movimentos lineares e diagonais (Torre, Bispo, Rainha).
 * - Laços aninhados para uma segunda implementação do Bispo.
 * - Laços aninhados complexos para o movimento em "L" do Cavalo.
 */
int main() {
    // --- Definição de Constantes para os Movimentos ---
    const int MOVIMENTOS_TORRE = 5;
    const int MOVIMENTOS_BISPO = 5;
    const int MOVIMENTOS_RAINHA = 8;
    const int MOVIMENTOS_CAVALO_CIMA = 2;
    const int MOVIMENTOS_CAVALO_DIREITA = 1;


    // --- 1. Movimento da Torre (com Recursividade) ---
    printf("--- Movimento da Torre (Recursivo) ---\n");
    moverTorreRecursivo(MOVIMENTOS_TORRE);


    // --- 2. Movimento do Bispo (com Recursividade) ---
    printf("\n--- Movimento do Bispo (Recursivo) ---\n");
    moverBispoRecursivo(MOVIMENTOS_BISPO);


    // --- 3. Movimento do Bispo (com Loops Aninhados) ---
    // Implementação alternativa do Bispo para cumprir o requisito de laços aninhados.
    // O laço externo controla o eixo vertical e o interno, o horizontal.
    // A impressão só ocorre quando os contadores são iguais, criando uma diagonal.
    printf("\n--- Movimento do Bispo (Loops Aninhados) ---\n");
    for (int y = 0; y < MOVIMENTOS_BISPO; y++) { // Loop externo: movimento vertical
        for (int x = 0; x < MOVIMENTOS_BISPO; x++) { // Loop interno: movimento horizontal
            // A condição (x == y) garante que o movimento seja na diagonal
            if (x == y) {
                printf("Cima, Direita\n");
            }
        }
    }


    // --- 4. Movimento da Rainha (com Recursividade) ---
    printf("\n--- Movimento da Rainha (Recursivo) ---\n");
    moverRainhaRecursivo(MOVIMENTOS_RAINHA);


    // --- 5. Movimento do Cavalo (com Loops Complexos) ---
    // Movimento: 2 casas para cima, 1 para a direita.
    // Usamos um laço 'for' externo para os 3 passos totais do movimento.
    // A variável 'passo' controla qual etapa do "L" estamos executando.
    printf("\n--- Movimento do Cavalo (Loops Complexos) ---\n");
    for (int passo = 1; passo <= (MOVIMENTOS_CAVALO_CIMA + MOVIMENTOS_CAVALO_DIREITA); passo++) {
        // Se o passo atual ainda faz parte do movimento vertical
        if (passo <= MOVIMENTOS_CAVALO_CIMA) {
            printf("Cima\n");
            continue; // Pula para a próxima iteração do loop 'for'
        }
        
        // Se o passo atual é o movimento horizontal
        if (passo > MOVIMENTOS_CAVALO_CIMA) {
             printf("Direita\n");
             break; // Encerra o loop, pois o movimento em "L" terminou
        }
    }


    return 0; // Indica que o programa terminou com sucesso
}


// --- Definições das Funções Recursivas ---

/**
 * move a Torre recursivamente 'passos_restantes' vezes.
 */
void moverTorreRecursivo(int passos_restantes) {
    // Caso Base: a condição de parada. Se não há mais passos, a função retorna.
    if (passos_restantes <= 0) {
        return;
    }
    // Ação: imprime o movimento atual.
    printf("Direita\n");
    // Passo Recursivo: a função chama a si mesma, com um passo a menos.
    moverTorreRecursivo(passos_restantes - 1);
}

/**
 * move o Bispo recursivamente 'passos_restantes' vezes.
 */
void moverBispoRecursivo(int passos_restantes) {
    // Caso Base: condição de parada da recursão.
    if (passos_restantes <= 0) {
        return;
    }
    // Ação
    printf("Cima, Direita\n");
    // Passo Recursivo
    moverBispoRecursivo(passos_restantes - 1);
}

/**
 * move a Rainha recursivamente 'passos_restantes' vezes.
 */
void moverRainhaRecursivo(int passos_restantes) {
    // Caso Base: condição de parada da recursão.
    if (passos_restantes <= 0) {
        return;
    }
    // Ação
    printf("Esquerda\n");
    // Passo Recursivo
    moverRainhaRecursivo(passos_restantes - 1);
}