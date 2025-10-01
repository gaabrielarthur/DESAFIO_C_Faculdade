#include<stdio.h>
#include<stdlib.h>
int main(){

    int n = 0;
    printf("Digite o numero que vc quer saber a tabuada : ");
    scanf("%d", &n);
    for(int i = 1; i <= 10; i++){
printf("\n%d x %d = %d" , n , i , n*i);

    }
    return 0;
}