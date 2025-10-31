#include <stdio.h>
#include<stdlib.h>

/*   Dados **dois inteiros A e B** (A B), calcule a **soma** de todos os inteiros no intervalo **[A, B]**. 
Se A > B, troque-os. Evite estouro usando `long long` quando necessário.     */
int main() {
    int A, B, i;
    long long soma = 0;

    scanf("%d %d", &A, &B);

    if (A > B) {
        int temp = A;
        A = B;
        B = temp;
    }

    for (i = A; i <= B; i++) {
        soma += i;
    }

    printf("Soma = %lld\n", soma);

    return 0;
}
