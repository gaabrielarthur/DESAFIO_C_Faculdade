#include <stdio.h>
#include <stdlib.h>
int main(){

 int opcao;
while (opcao < 1 || opcao > 3){

 printf("\nopcao-1");
 printf("\nopcao-2");
 printf("\nopcao-3");
 printf("\nEscolha uma opacao:");

  scanf("%d" , &opcao);


switch (opcao){
case 1:
printf("\nOpcao 1 foi escolhida");
break;
case 2:
printf("\nOpcao 2 foi escolhida");
break;
case 3:
printf("\nOpcao 3 foi escolhida");
break;
default:
    break;
}

}
return 0; 
}