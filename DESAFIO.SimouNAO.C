#include<stdio.h>
#include<stdlib.h>
int main(){
    char resposta;
    int valor;

    printf(" Digite (s/n): ");
    scanf(" %c", &resposta); // O espaço antes de %c ignora espaços em branco

    // Usa operador ternário para converter
    valor = (resposta == 's' || resposta == 'S') ? 1 : 0;

    printf("Valor convertido: %d\n", valor);

    return 0;
}