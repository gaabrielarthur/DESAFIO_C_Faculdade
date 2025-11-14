#include <stdio.h>
#include <stdlib.h>

void limpatela(){
    system("CLS");
}
int main()
{
    // definindo variaveis
    int a = 10;
 // lendo alguma coisa 
    printf("Digite um valor para variavel 'a': ");

    //lendo o valor digitado 
    scanf("%d", &a);

    //limpa tela
    system("CLS");

    //retorno da função
    return 0;
}