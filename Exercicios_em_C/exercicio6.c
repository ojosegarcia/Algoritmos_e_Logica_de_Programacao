#include <stdio.h>
int main(){

	float area, base, altura;
	
	printf("Digite o numero da base:");
	scanf("%f", &base);
	 
	printf("Digite o numero da altura:");
	scanf("%f", &altura);
	
	area= (base * altura) / 2;
	printf("\n A area do triangulo e=%.1f\n",area);
	
	return 0;
}