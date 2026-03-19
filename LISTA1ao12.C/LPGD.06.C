#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
/*
Faça um programa que leia três valores inteiros e chame uma função que receba estes 3 valores
de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variável, o segundo
menor valor na variável do meio, e o maior valor na última variável. A função deve retornar o
valor 1 se os três valores forem iguais e 0 se existirem valores diferentes. Exibir os valores
ordenados na tela.
*/

// essa função recebe tres endereços de memória
// por que ponteiros, por que queri alterar os valores la na main 
int parametroOrdem(int *a, int *b, int *c)
{
    int temp;

    if (*a > *b) // se  a for maior que b 
    {
        temp = *a; // TEMP guarda A 
        *a = *b; // A recebe B
        *b = temp; // B recebe o valor antigo de A
        //RESULTADO AGORA A <= B
    }
    // se A for maior que C faz a mesma coisa
    if (*a > *c)
    {
        temp = *a;
        *a = *c;
        *c = temp;

    }
    // se edereço de B for maior que C
    if (*b > *c)
    {
        temp = *b; // TEMP guarda B
        *b = *c; //B guarda C
        *c = temp; // C armazena o valor antigo de B
    }
    // DEPOIS DESSAS 3 ETAPAS FICA ASSIM A <= B <= C
    if (*a == *b && *b == *c) // VERIFICA SE OS TRES SÃO IGUAIS 
    {
        return 1; // RETORNA 1 VERDADEIRO 
    }
    else
    {
        return 0; // RETORNA 0 FALSO 
    }
}

int main()
{
    int x,y,z; // DECLAREI 3 VARIAVEIS 
    int resultado; // VARIAVEL ONDE VAI ARMAZENA O RESULTADO APOS EXECUTAR A A FUNÇÃO 
    int i = 0; // I VALENDO ZERO 
    printf("\nDigite  valor %d: ", i + 1); // i + 1 = 0 + 1 = 1
    scanf("%d", &x);// armazena o valor digitado 
    printf("\nDigite  valor %d: ", i + 2); // 0 + 2  = 2
    scanf("%d", &y);
    printf("\nDigite  valor %d: ", i + 3); // 0 + 3 = 3
    scanf("%d", &z);

    resultado = parametroOrdem(&x,&y,&z); // RESULTADO armazena a resposta da função 
    // envia o enderço de x,y,z para a função, para serem executados 

    printf("\n\nValores ordenados: %d %d %d\n", x,y,z);//imprimi os valores em ordem
    if(resultado == 1){ // se de verdadeiro ou seja numeros iguais return 1 na função
        printf("\nOs tres valores sao iguais.\n");

    }else{ //se de false ou seja numeros diferentes return 0 na função
        printf("\nExistem valores diferentes.\n");
    }

    return 0;
}