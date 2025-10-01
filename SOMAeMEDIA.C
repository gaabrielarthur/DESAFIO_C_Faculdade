#include<stdio.h>
#include<stdlib.h>
int main(){


int num;
int contador = 0;
int soma = 0;


printf("\nDigite numeros(negativos para parar): ");

while (1)
{
    scanf("%d" , &num);
    
    if(num <= 0){
        break;
    }

soma += num;
contador++;

}

if(contador > 0){
 
    float media = (float)soma / contador;
    printf("Soma = %d\n" , soma);
    printf("Media = %.2f\n" , media);
}else{
    printf("NENHUM NUMERO VALIDO FOI DIGITADO.\n");
}

return 0;

}