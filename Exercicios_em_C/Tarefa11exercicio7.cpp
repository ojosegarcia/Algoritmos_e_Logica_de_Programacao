// 7. Preencher automaticamente um vetor com todos os números pares entre 1 e 100 e depois exibir os números para o usuário. 

#include <stdio.h>

#define TAM 50

int main() {
    int v[TAM];
    int contador = 0;


    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            v[contador] = i;
            contador++;
        }
    }

    printf("Os numeros pares entre 1 e 100 sao:\n");
    for (int i = 0; i < contador; i++) {
        printf("%i ", v[i]);
    }
    printf("\n");

    return 0;
}
