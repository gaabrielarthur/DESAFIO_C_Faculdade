#include<stdio.h>
#include<stdlib.h>
/*
4. Faça um programa que leia 2 valores inteiros e chame uma função que receba estas 2
variáveis e troque o seu conteúdo, ou seja, esta função é chamada passando duas variáveis A
e B por exemplo e, após a execução da função, A conterá o valor de B e B terá o valor de A.

*/
void troca(int *a, int *b){
    
    int recebe =  *a;
    *a = *b;
    *b = recebe;
}

int main(){
    int a; 
    int b;

    scanf("%d" , &a);
    scanf("%d" , &b);

// chama a função após o endereço
    troca(&a , &b);

    printf("--------------A TROCA---------------");

    printf("\nvalor de A: %d" , a);
    printf("\nvalor de B: %d", b);

    return 0;
}