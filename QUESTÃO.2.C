#include <stdio.h>
#include <stdlib.h>
int main()
{
/*Leia **dois inteiros** e informe se são **iguais**; caso contrário, mostre o **maior** e o **menor**.

**Entrada (exemplo)**
```
12 5
```

**Saída (exemplo)**
```
Maior = 12
Menor = 5
```
*/
    int a, b;

    scanf("%d %d", &a, &b);

    if (a == b)
    {
        printf("Iguais");
    }
    else if (a > b)
    {
        printf("Maior = %d\n", a);
        printf("Menor = %d\n", b);
    }
    else if (a < b)
    {
        printf("Maior = %d\n", b);
        printf("Menor = %d\n", a);
    }
    return 0;
}