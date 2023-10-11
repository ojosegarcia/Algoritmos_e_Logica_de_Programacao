/* 3-Receber 8 números e armazená-los em um vetor. 
     Ao final, pedir para o usuário escolher uma posição do vetor e exibir o número contido nela.*/
	 
#include <stdio.h>
#define TAM 8
int main(){
	int posicao;
	int v[TAM];
	int i;
		
	for(i=0; i < TAM; i++){
		printf("Digite um valor na posicao %i: ", i+1);
		scanf("%i", &v[i]);
	}
	
	printf("\nDigite qual posicao do vetor voce deseja ixibir o numero contido nela:");
	scanf("%i", &posicao);
	
	printf("\nA posicao do vetor %i e: %i\n", posicao, v[posicao]);

	return 0;	
} 

