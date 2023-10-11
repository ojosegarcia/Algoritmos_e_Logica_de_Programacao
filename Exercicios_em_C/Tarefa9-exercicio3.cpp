/*3. Faça um programa que imprime um quadrado de tamanho de 1 à 10. Receber o tamanho do quadrado:

Tamanho 1:
xx
xx

Tamanho 2:

xxxx
x  x
x  x
xxxx

Tamanho 3:
xxxxxx
x    x
x    x
x    x
x    x
xxxxxx    */

#include <stdio.h>

int main() {
    int tamanho, i, j;
    printf("Informe o tamanho do quadradode 1 a 10: ");
    scanf("%d", &tamanho);
	tamanho = tamanho *2;

    for (i = 1; i <= tamanho; i++) {
        printf("x");
    }
    printf("\n");


    for (i = 1; i <= tamanho - 2; i++) {
        printf("x");
        for (j = 1; j <= tamanho - 2; j++) {
            printf(" ");
        }
        printf("x\n");
    }


    if (tamanho > 1) {
        for (i = 1; i <= tamanho; i++) {
            printf("x");
        }
        printf("\n");
    }

    return 0;
}