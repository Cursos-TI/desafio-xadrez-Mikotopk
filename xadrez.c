#include <stdio.h>

/**
 * Desafio de Xadrez - Nível Novato
 *
 * Este programa simula o movimento de três peças de xadrez (Torre, Bispo e Rainha)
 * utilizando uma estrutura de repetição diferente para cada uma (for, while, do-while)
 * para demonstrar o uso de cada tipo de laço.
 */
int main() {
    // --- Definição de Variáveis ---
    // Definimos o número de casas a serem movidas diretamente no código.
    const int MOVIMENTOS_TORRE = 5;
    const int MOVIMENTOS_BISPO = 5;
    const int MOVIMENTOS_RAINHA = 8;


    // --- 1. Movimento da Torre (usando o laço FOR) ---
    // O laço 'for' é ideal para situações onde o número de repetições
    // é conhecido de antemão, como aqui. A inicialização, a condição
    // e o incremento do contador são declarados em uma única linha.

    printf("--- Movimento da Torre (5 casas para a direita) ---\n");
    for (int i = 0; i < MOVIMENTOS_TORRE; i++) {
        // A cada iteração, imprimimos o movimento da Torre.
        printf("Direita\n");
    }


    // --- 2. Movimento do Bispo (usando o laço WHILE) ---
    // O laço 'while' verifica a condição ANTES de executar o bloco de código.
    // É preciso inicializar um contador fora do laço e incrementá-lo
    // manualmente dentro do laço.

    printf("\n--- Movimento do Bispo (5 casas na diagonal superior direita) ---\n");
    int contador_bispo = 0; // Inicialização do contador
    while (contador_bispo < MOVIMENTOS_BISPO) {
        // Imprime o movimento diagonal
        printf("Cima, Direita\n");
        contador_bispo++; // Incremento manual do contador
    }


    // --- 3. Movimento da Rainha (usando o laço DO-WHILE) ---
    // O laço 'do-while' é semelhante ao 'while', mas com uma diferença crucial:
    // ele executa o bloco de código PELO MENOS UMA VEZ e só depois
    // verifica a condição.

    printf("\n--- Movimento da Rainha (8 casas para a esquerda) ---\n");
    int contador_rainha = 0; // Inicialização do contador
    do {
        // Imprime o movimento da Rainha
        printf("Esquerda\n");
        contador_rainha++; // Incremento manual do contador
    } while (contador_rainha < MOVIMENTOS_RAINHA);


    return 0; // Indica que o programa terminou com sucesso
}