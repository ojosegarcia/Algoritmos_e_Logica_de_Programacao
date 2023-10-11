/* 4- Receber 15 números e armazená-los em um vetor. 
	Ao final, exibir o dobro de cada um dos números. */
	
#include <stdio.h>
#define TAM 15
int main(){
	int v[TAM];
	int i;
		
	for(i=0; i < TAM; i++){
		printf("Digite um valor na posicao %i: ", i+1);
		scanf("%i", &v[i]);
		
	}

	for(i=0; i < TAM; i++){
		printf("\nO dobro de %i e: %i", v[i], v[i] * 2);
	}
	
	return 0;
}