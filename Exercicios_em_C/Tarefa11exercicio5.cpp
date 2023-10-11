/*Receber 12 números e armazená-los em um vetor. 
    Ao final, exibir quais foram os números positivos informados. */

#include <stdio.h>
#define TAM 12

int main() {
    int v[TAM];
    int numerosPositivos[TAM];
    int quantidadePositivos = 0;


    printf("Digite 12 numeros:\n");
    for (int i = 0; i < TAM; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &v[i]);


        if (v[i] > 0) {
            numerosPositivos[quantidadePositivos] = v[i];
            quantidadePositivos++;
        }
    }


    printf("\nNumeros positivos informados:\n");
    for (int i = 0; i < quantidadePositivos; i++) {
        printf("%d\n", numerosPositivos[i]);
    }

    return 0;
}
