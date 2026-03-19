#include <stdio.h>
/*
. Crie um programa que receba um vetor de números reais com 100 elementos. Escreva uma
função recursiva que inverta a ordem dos elementos presentes no vetor.
*/

void inverter(float v[], int inicio, int fim) {
    if (inicio >= fim)
        return;

    float temp = v[inicio];
    v[inicio] = v[fim];
    v[fim] = temp;

    inverter(v, inicio + 1, fim - 1);
}

int main() {
    float v[100];

    for (int i = 0; i < 100; i++)
        scanf("%f", &v[i]);

    inverter(v, 0, 99);

    for (int i = 0; i < 100; i++)
        printf("%.1f ", v[i]);

    return 0;
}
