#include <stdio.h>
#include <stdlib.h>

int main(void){
    float valor_por_hora = 20.50; 
    int horas_trabalhadas = 160;
    float valor_dos_descontos = 300.00;

    float total_bruto = (float) valor_por_hora * horas_trabalhadas;
    float total_liquido = (float) valor_dos_descontos - total_bruto;
    
    printf("FOLHA DE PAGAMENTO \n\n");

    printf(" \n 160 horas X R$20.50 = %.2f" , total_bruto);
    printf(" \n Descontos = %.2f" , valor_dos_descontos );
    printf("\n Total devido: %.2f" , total_liquido );

    return 0;
    
}