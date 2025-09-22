#include <stdio.h>
#include <stdlib.h>
int main (){
    int idade = 0;
    int carteira = 0;
    printf ("Qual sua idade ?\n");
    scanf("%d" ,&idade );
    printf("Voce tem CNH?\n");
    scanf("%d" ,&carteira);

 if  (idade >= 18 && (carteira == 0)) {
    printf("Voce pode dirigir\n");
    }
    else { 
        printf("Voce NAO pode dirigir\n");
    } 

     return 0;
}
