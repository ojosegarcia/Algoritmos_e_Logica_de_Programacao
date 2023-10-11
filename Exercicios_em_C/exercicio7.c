#include <stdio.h>
int main (){
	
	float fahrenheit, celsius;
	
	printf("Digite a temperatura em Fahrenheit:");
	scanf("%f", &fahrenheit);
	
	celsius= (fahrenheit - 32) / 1.8;
	printf("A temperatura em celsius e=%.1f\n",celsius);
	
	return 0;
}