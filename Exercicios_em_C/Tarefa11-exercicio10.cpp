/* 10. Receber 10 números e armazená-los em um vetor. Copiar os números em outro vetor na ordem inversa e mostrar
 na tela todas as posições em que se tem o mesmo número nos dois vetores. */

#include <stdio.h>

#define TAM 10

int main() {
    int numeros[TAM];
    int numerosInverso[TAM];
    int i, j;


    printf("Digite 10 numeros para armazenar em um vetor:\n");
    for (i = 0; i < TAM; i++) {
        printf("Numero %i: ", i + 1);
        scanf("%i", &numeros[i]);
    }


    for (i = 0, j = TAM - 1; i < TAM; i++, j--) {
        numerosInverso[j] = numeros[i];
    }


    printf("\nPosicoes com numeros iguais:\n");
    for (i = 0; i < TAM; i++) {
        if (numeros[i] == numerosInverso[i]) {
            printf("Posicao %i\n", i + 1);
        }
    }

    return 0;
}

