#include <stdio.h>
#include <stdlib.h>
/*
2. Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba
o maior endereço
*/
int main(int argc, char **argv)
{
    int a = 1;
    int b = 2;

    int *ptr1 = &a; //ponteiro guarda o endereço de a 
    int *ptr2 = &b; //ponteiro guarda o endereço de b

   

    if (ptr1 > ptr2) // endereço de ptr1 sempre sera maior que o endereço de ptr2
    {
        printf("\nptr1 MAIOR = NUMERO DE ENDERECO: %p", (void *)ptr1);
        printf("\nptr2 MENOR = NUMERO DE ENDERECO: %p", (void *)ptr2);
    }
    else
    {
        printf("\nptr2 MAIOR = NUMERO DE ENDERECO: %p", (void *)ptr2);
        printf("\nptr1 MENOR = NUMERO DE ENDERECO: %p", (void *)ptr1);
    }

    return 0;
}