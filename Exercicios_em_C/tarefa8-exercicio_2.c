//2. Receber 10 números e informar se cada um deles é negativo, positivo ou nulo. 

#include <stdio.h>
int main(){
	
		float numero, negativo, positivo, nulo;
	int i;
	
	for(i=0; i<10; i++){
		printf("\n\nDigite um numero para informar se ele e negativo, positivo ou nulo:");
		scanf("%f", &numero);	
		
		if (numero<0){
		printf("\nO numero e negativo");
		}
		else
			if (numero>0){
			printf("\nO numero e positivo");
			}
				else
				printf("\nO numero e nulo");	
	}
	
	return 0;
}