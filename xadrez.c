#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    int i; // Variável contadora para os loops

    //--- Movimentação do Bispo ---
    printf("## Movimentos do Bispo ##\n");
    // O loop se repete 5 vezes para as 5 casas.
    for (i = 1; i <= 5; i++) {
        // A condição especial é imprimir a combinação das direções.
        printf("Passo %d: Movendo na diagonal superior direita (cima + direita)\n", i);
    }

    printf("\n"); // Adiciona uma linha em branco para separar
    //--- Movimentação da Torre ---
    printf("## Movimentos da Torre ##\n");
    // O loop se repete 5 vezes.
    for (i = 1; i <= 5; i++) {
        printf("Passo %d: Movendo para a direita\n", i);
    }
}
