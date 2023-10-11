#include <stdio.h>
int main(){
	
	int numero1, numero2, divisao, resto;
	
	printf("Digite um numero para a divisao e o resto: ");
	scanf("%i", &numero1);
		
	printf("Digite outro numero para a divisao e o resto: ");
	scanf("%i", &numero2);
	
	divisao= numero1 / numero2;
	
	resto= numero1 % numero2;

    printf("O resultado de divisao e: %i,", divisao);
    printf("\nO resto de divisao e: %i,", resto);

	return 0;
}