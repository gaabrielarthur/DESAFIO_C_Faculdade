#include <stdio.h>

// Função que calcula o custo ao consumidor
float calculaCustoConsumidor(float custo_fabrica, float perc_distribuidor, float perc_impostos) {
    float custo_final;
    custo_final = custo_fabrica 
                + (custo_fabrica * perc_distribuidor / 100) 
                + (custo_fabrica * perc_impostos / 100);
    return custo_final;
}

int main() {
    float custo_fabrica, perc_distribuidor, perc_impostos, custo_final;

    scanf("%f", &custo_fabrica);
    scanf("%f", &perc_distribuidor);
    scanf("%f", &perc_impostos);

    custo_final = calculaCustoConsumidor(custo_fabrica, perc_distribuidor, perc_impostos);

    printf("Custo ao consumidor = %.2f\n", custo_final);

    return 0;
}