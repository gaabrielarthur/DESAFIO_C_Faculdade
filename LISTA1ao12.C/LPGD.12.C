#include <stdio.h>
/*
 Faça uma função recursiva que receba um número inteiro positivo ímpar N e retorne o fatorial
duplo desse número. O fatorial duplo é definido como o produto de todos os números naturais
ímpares de 1 até algum número natural ímpar N. Assim, o fatorial duplo de 5 é: 5!! = 1 ∗ 3 ∗ 5
= 15
*/

int fatDuplo(int n) {
    if (n == 1)
        return 1;

    return n * fatDuplo(n - 2);
}

int main() {
    int n;

    printf("Digite um numero impar: ");
    scanf("%d", &n);

    printf("Resultado = %d", fatDuplo(n));

    return 0;
}
