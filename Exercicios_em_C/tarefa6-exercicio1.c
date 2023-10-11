#include <stdio.h>

int main (){
	
	float numero;
	
	printf("Digite o valor do numero para informar se ele e positivo ou negativo:");
	scanf("%f", &numero);
	
	if(numero>0){
		printf("\nO numero %.2f e positivo", numero);
	}
	else{
		printf("\nO numero %.2f e negativo", numero);
	}
	return 0;
}