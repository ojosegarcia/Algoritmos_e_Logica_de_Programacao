/* 8-Receber números do usuário para preencher um vetor de 10 posições, porém, só é permitido armazenar no vetor números positivos 
(repetir até que as 10 posições do vetor estejam preenchidas). 
No final, exiba a soma de todos os números que estão nas posições ímpares do vetor. */

#include <stdio.h>

#define TAM 10

int main() {
    int numeros[TAM];
    int contador = 0;
    int somaImpares = 0;
    int numero;

    printf("Preencha o vetor com numeros positivos:\n");


    while (contador < TAM) {
        printf("Numero %i: ", contador + 1);
        scanf("%i", &numero);


        if (numero > 0) {
            numeros[contador] = numero;
            contador++;
        }
    }


    for (int i = 0; i < TAM; i += 2) {
        somaImpares += numeros[i];
    }


    printf("A soma dos numeros nas posicoes impares do vetor e: %i\n", somaImpares);

    return 0;
}
