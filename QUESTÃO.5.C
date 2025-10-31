#include <stdio.h>
#include <stdlib.h>
/*   Leia **N** números reais e calcule a **média aritmética**. 
Exiba a média com duas casas decimais. 
Permita que **N** seja informado pelo usuário e, em seguida, leia os N valores. Trate divisão por zero caso N < 1.

**Entrada (exemplo)**
```
5
7.0 6.5 8.0 9.3 5.2
```

**Saída (exemplo)**
```
Média = 7.20  */
int main()
{

int N;
double soma = 0.0 , numero , media;

scanf("%d" , &N);

if(N < 1){
    printf("erro: quantidade invalida(N deve ser >= 1). \n");
    return 1;
}

for(int i = 0; i < N; i++){
    scanf("%lf", &numero);
    soma += numero; 
}

media = soma / N;

printf("Media = %.2lf\n" , media);

return 0;
    
   
}


