#include <stdio.h>
#include <stdlib.h>
/*  Leia **N** (0 N 50) e exiba os **N primeiros termos** da sequência de Fibonacci (começando em 0, 1...). 
Opcional: ofereça também a versão que calcula **apenas o N-ésimo termo** iterativamente.  */

int fibonnacci(int n){
    if (n == 0){
        return 0;
    }
    else if (n == 1){
        return 1;
    }
    else{
        return fibonnacci(n - 1) + fibonnacci(n - 2);
         
    }


}

int main()
{
    int numero = 0;
    scanf("%d", &numero);
    for(int i = 0; i < numero; i++){
    printf("%d ",fibonnacci(i));
    }
    return 0;
}