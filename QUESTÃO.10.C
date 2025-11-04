#include <stdio.h>
#include <stdlib.h>
int main()
/* Implemente uma calculadora que leia **dois números** e um **operador** (`+ - * / %`). Execute a operação e exiba o resultado. Para divisão, trate **divisão por zero**. Para `%`, opere sobre inteiros.

**Entrada (exemplo)**
```
8 3 /
```

**Saída (exemplo)**
```
Resultado = 2.666667
``` */



{
    float a = 0.0f;   
    float b = 0.0f; 
    char operador;  

    scanf("%f %f" , &a , &b);
   
    scanf(" %c", &operador);
    if (operador == '+')
    {
        printf("Resultado = %f", a + b);
    }
    else if (operador == '-')
    {
        printf("Resultado = %f", a - b);
    }
    else if (operador == '*')
    {
        printf("Resultado = %f", a * b);
    }
    else if (operador == '/')
    {
        if (a == 0 || b == 0)
        {
            printf("Erro");
        }
        else
        {
            printf("Resultado = %f", a / b);
        }
    }
    else if (operador == '%')
    {
        
        printf("Resultado = %d", (int)a % (int)b);
    }
    else
    {
        printf("Erro");
    }
    return 0;
}