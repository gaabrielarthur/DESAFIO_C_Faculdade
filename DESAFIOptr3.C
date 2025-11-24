#include <stdio.h>
/*
3. Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do teclado.
Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.
*/
int main(int argc, char **argv){
 int n1, *ptr1;
    int n2, *ptr2;

    ptr1 = &n1;
    ptr2 = &n2;


    scanf("%d", &n1);
    scanf("%d", &n2);

    if (&n1 > &n2)
    {
        printf("Maior endereco n1:  %p  \nconteudo dele: %d", ptr1, n1);
    }
    else
    {
        printf("Maior endereco n2:  %p  \nconteudo: %d", ptr2, n2);
    }

    return 0;
}