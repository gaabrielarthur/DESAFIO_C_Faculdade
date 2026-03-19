#include<stdio.h>
#include<stdlib.h>
/*
 A multiplicação de dois números inteiros pode ser feita através de somas sucessivas. Proponha
um algoritmo recursivo MultipRec(n1, n2) que calcule a multiplicação de dois inteiros.

*/

int MultipRec(int n1, int n2) {
    if (n2 == 0)
        return 0;

    return n1 + MultipRec(n1, n2 - 1);
}

int main() {
    int a, b;

    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    printf("Resultado = %d", MultipRec(a, b));

    return 0;
}
