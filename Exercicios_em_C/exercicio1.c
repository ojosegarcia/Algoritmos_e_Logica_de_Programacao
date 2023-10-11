#include <stdio.h>

int main(){

	float numero, numero2;

	printf("Informe o numero:");
	scanf("%f",&numero);
	
	numero2 = 2 * numero;
	
	printf("O dobro e: %.1f", numero2);
	
	return 0;
}