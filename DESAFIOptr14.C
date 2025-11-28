#include <stdio.h>

void preencher(int *ptrArray, int qtde, int dado) {
    int *cursor = ptrArray;          // ponteiro que percorre o array
    int *limite = ptrArray + qtde;   // final do array

    while (cursor < limite) {
        *cursor = dado;  // coloca o valor na posição atual
        cursor++;        // avança para o próximo elemento
    }
}

int main() {

    int numeros[5];
    int elemento;

    printf("Digite o valor para preencher o vetor: ");
    scanf("%d", &elemento);

    preencher(numeros, 5, elemento);

    printf("\nVetor preenchido:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }

    return 0;
}