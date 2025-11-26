#include <stdio.h>
#include <stdlib.h>
/*

5. Faça um programa que leia dois valores inteiros e chame uma função que receba estes 2
valores de entrada e retorne o maior valor na primeira variável e o menor valor na segunda
variável. Escreva o conteúdo das 2 variáveis na tela.

*/

    void chamado(int *a, int *b) {
    int n1;

    if (*a < *b) {
        n1 = *a;
        *a = *b;
        *b = n1;
    }
}

int main() {
    int x, y;

    printf("Digite o primeiro valor: ");
    scanf("%d", &x);

    printf("Digite o segundo valor: ");
    scanf("%d", &y);

    // Chama a função passando os endereços
    chamado(&x, &y);

    printf("\nMaior valor: %d", x);
    printf("\nMenor valor: %d\n", y);

    return 0;
}


