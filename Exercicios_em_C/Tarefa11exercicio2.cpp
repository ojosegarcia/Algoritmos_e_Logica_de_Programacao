#include <stdio.h>
#define TAM 10
int main(){
	int v[TAM];
	int i;
		
	for(i=0; i < TAM; i++){
		printf("Digite um valor na posicao %i: ", i+1);
		scanf("%i", &v[i]);
	}
	
	printf("\nImprimir na ordem inversa recebida: ");
	for(i=TAM-1; i >= 0; i--){
		printf("%i ", v[i]);
	}

	return 0;	
}