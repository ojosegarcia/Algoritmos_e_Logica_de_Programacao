/* 6. Receber 12 números e armazená-los em um vetor. 
    Ao final, exibir a quantidade de números negativos informados. */
    
#include <stdio.h>

#define TAM 12

int main() {
    int v[TAM];
    int quantidadeNegativos = 0;

    
    printf("Digite 12 numeros:\n");
    for (int i = 0; i < TAM; i++) {
        printf("Numero %i: ", i + 1);
        scanf("%d", &v[i]);

      
        if (v[i] < 0) {
            quantidadeNegativos++;
        }
    }

   
    printf("\nA quantidade de numeros negativos informados é: %i\n", quantidadeNegativos);

    return 0;
}
