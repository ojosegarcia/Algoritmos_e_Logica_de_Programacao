/*1. Receber 10 números e mostrar o dobro de cada um deles. */

#include <stdio.h>
int main(){
	float numero, dobro;
	int i;
	
	for(i=0; i<10; i++){
		printf("\nDigite um numero para mostrar o dobro dele:");
		scanf("%f", &numero);
		dobro = numero * 2;
		printf("\nO dobro e %.f", dobro);
	}
	
	
	return 0;
}
