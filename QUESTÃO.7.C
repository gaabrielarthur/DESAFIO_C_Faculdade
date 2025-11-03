#include <stdio.h>
#include <math.h>

/* Leia **N** (1 N 10^4) e depois **N inteiros**. 
Armazene em um vetor e **filtre** somente os **primos** para outro vetor.
 Exiba a **quantidade** e a **lista** dos primos encontrados.
*/
int primo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return 0;
    return 1;
}

int main() {
    int N, i, num, primos[10000], qtd = 0;

    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%d", &num);
        if (primo(num))
            primos[qtd++] = num;
    }

    printf("Qtd = %d\n", qtd);
    for (i = 0; i < qtd; i++){
        printf("%d ", primos[i]);
     
        
}
return 0;
}