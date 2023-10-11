/* Receber dois números distintos e mostrar o maior deles. */

#include <stdio.h>

int main (){
	
	float numero_1, numero_2;
	
	printf("Digite um numero:");
	scanf("%f", &numero_1);
	
	printf("Digite outro numero para mostrar o maior entre eles:");
	scanf("%f", &numero_2);
	
	if(numero_1>numero_2){
		printf("\n %.1f e maior do que %.1f",numero_1, numero_2);
	}
	else{
		if(numero_1<numero_2){
		printf("\n %.1f e menor do que %.1f", numero_1, numero_2);
		}
		else{
		printf("\n %.1f e igual a %.1f",numero_1, numero_2);
	}
    }
	
	return 0;
}