#include <stdio.h>

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