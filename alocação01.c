#include <stdio.h>
#include <stdlib.h>
/*
1. Crie um programa que:
(a) Aloque dinamicamente um array de 5 números inteiros,
(b) Peça para o usuário digitar os 5 números no espaço alocado,
(c) Mostre na tela os 5 números,
(d) Libere a memória alocada.

*/
int main() {
    int *vetor;

    // (a) Alocação dinâmica de um array com 5 inteiros
    vetor = (int*) malloc(5 * sizeof(int));

    if (vetor == NULL) { // Sempre verificar se a alocação deu certo
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    printf("Memoria alocada com sucesso para 5 inteiros!\n");

    // Exemplo: preenchendo o vetor
    for (int i = 0; i < 5; i++) {
        vetor[i] = i + 1;
    }

    // Exemplo: mostrando o vetor
    printf("Valores armazenados: ");
    for (int i = 0; i < 5; i++) {
        printf("\n%d", vetor[i]);
    }

    // Liberar memória
    free(vetor);

    return 0;
}
