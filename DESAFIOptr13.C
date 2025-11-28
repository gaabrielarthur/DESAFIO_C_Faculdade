
#include<stdlib.h>
#include <stdio.h>
int ocorre(char *str1, char *str2) {
    char *p1, *p2, *aux;

   
    if (*str2 == '\0')
        return 1;

    for (p1 = str1; *p1 != '\0'; p1++) {

      
        if (*p1 == *str2) {

            aux = p1;   
            p2 = str2;  

            while (*aux != '\0' && *p2 != '\0' && *aux == *p2) {
                aux++;
                p2++;
            }
            if (*p2 == '\0')
                return 1;
        }
    }

    return 0; 
}

int main() {
    char str1[100], str2[100];

    printf("Digite a primeira string: ");
    fgets(str1, 100, stdin);

    printf("Digite a segunda string: ");
    fgets(str2, 100, stdin);

    
    for (char *p = str1; *p; p++) if (*p == '\n') *p = '\0';
    for (char *p = str2; *p; p++) if (*p == '\n') *p = '\0';

    if (ocorre(str1, str2))
        printf("A SEGUNDA string ocorre dentro da primeira.\n");
    else
        printf("A SEGUNDA string NAO ocorre dentro da primeira.\n");

    return 0;
}