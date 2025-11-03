#include <stdio.h>
#include <stdlib.h>
int main()
{   /*
    Leia **três notas** (pesos podem ser 2, 3 e 5, por exemplo) e calcule a **média ponderada**. 
    Classifique o(a) estudante em **conceitos** (A, B, C, D, E) conforme faixas de média. 
    Informe também se está **Aprovado(a)**, **Recuperação** ou **Reprovado(a)**.
     Pesos: 2, 3, 5. Conceitos: A (>=8.5), B (>=7.0), C (>=6.0), D (>=5.0), E (<5.0).
     
    Situacao:
    Aprovado (>=6.0), 
    Recuperacao (>=5.0 e <6.0), 
    Reprovado (<5.0). **Saída (exemplo)**
Média = 7.4
Conceito = B
Situação = Aprovado(a)
    
    */
   
    float n1, n2, n3, media;
    int p1 = 2, p2 = 3, p3 = 5;

    scanf("%f %f %f" , &n1 , &n2 , &n3);
    media = (n1*p1 + n2*p2 + n3*p3 ) / (p1 + p2 + p3);

    printf("Media = %.1f\n" , media);

    if (media >= 8.5) {
        printf("Conceito = A\nSituacao = Aprovado(a)\n");
    } 
    else if (media >= 7.0) {
        printf("Conceito = B\nSituacao = Aprovado(a)\n");
    } 
    else if (media >= 6.0) {
        printf("Conceito = C\nSituacao = Aprovado(a)\n");
    } 
    else if (media >= 5.0) {
        printf("Conceito = D\nSituacao = Recuperacao\n");
    } 
    else {
        printf("Conceito = E\nSituacao = Reprovado(a)\n");
    }

    return 0;



}