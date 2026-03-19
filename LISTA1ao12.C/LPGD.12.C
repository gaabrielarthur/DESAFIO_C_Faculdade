#include <stdio.h>

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