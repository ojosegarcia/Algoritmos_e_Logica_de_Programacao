#include <stdio.h>

#define TAM 12

int main() {
    int numeros[TAM];
    int quantidadeNegativos = 0;

    // Receber os números do usuário e armazená-los no vetor
    printf("Digite 12 números:\n");
    for (int i = 0; i < TAM; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);

        // Verificar se o número é negativo
        if (numeros[i] < 0) {
            quantidadeNegativos++;
        }
    }

    // Exibir a quantidade de números negativos informados
    printf("\nA quantidade de números negativos informados é: %d\n", quantidadeNegativos);

    return 0;
}
