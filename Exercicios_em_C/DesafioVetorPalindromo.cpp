#include <stdio.h>
#define TAM 10

int main() {
    int vetor[TAM] = {0};
    int valor, numDigitos = 0;
    
    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);
    
    while (valor > 0 && numDigitos < TAM) {
        vetor[TAM - numDigitos - 1] = valor % 10;
        valor /= 10;
        numDigitos++;
    }
    
    int i, palindrome = 1;
    for (i = 0; i < TAM - numDigitos; i++) {
        if (vetor[i] != 0) {
            palindrome = 0;
            break;
        }
    }
    
    if (palindrome) {
        for (i = TAM - numDigitos; i < TAM / 2; i++) {
            if (vetor[i] != vetor[TAM - i - 1]) {
                palindrome = 0;
                break;
            }
        }
    }
    
    printf("Vetor = [");
    for (i = 0; i < TAM; i++) {
        printf("%d", vetor[i]);
        if (i < TAM - 1) {
            printf(",");
        }
    }
    printf("]\n");
    
    if (palindrome) {
        printf("E um palindromo.\n");
    } else {
        printf("Nao e um palindromo.\n");
    }
    
    return 0;
}
