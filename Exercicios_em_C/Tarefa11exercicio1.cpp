/*receber 10 números e armazená-los em um vetor.
Ao final, exibir os números na ordem que foram recebidos.*/ 

#include <stdio.h>
#define TAM 10
int main(){
	int v[TAM];
	int i;
		
	for(i=0; i < TAM; i++){
		printf("Digite um valor na posicao %i: ", i+1);
		scanf("%i", &v[i]);
	}
	
	printf("\nImprimir na ordem recebida: ");
	for(i=0; i < TAM; i++){
		printf("%i ", v[i]);
	}
	
	return 0;
}