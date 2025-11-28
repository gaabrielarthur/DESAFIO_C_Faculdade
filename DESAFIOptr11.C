#include <stdio.h>
#include <stdlib.h>
/*
11.Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array do
teclado e imprima o endereço das posições contendo valores pares.
*/
int main()
{
    int array[5];

    for (int i = 0; i < 5; i++)
    {
        printf("array[%d]: ", i+1);
        scanf("%d", &array[i]);
    }
    printf("\nEndereco das posicoes com valores pares:\n");

    for(int i = 0;i < 5;i++){
        if(array[i] % 2 == 0){
            printf("array[%d] = %d -> endereco: %p\n" , i, array[i], (void*)&array[i]);
        }
    }

    return 0;

}