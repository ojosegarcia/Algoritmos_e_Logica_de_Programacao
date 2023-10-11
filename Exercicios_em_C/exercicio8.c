#include <stdio.h>

int main(){
 
	float circunferencia, raio;	
	
	printf("Digite o numero para o raio de um perimetro de uma circunferencia:");
	scanf("%f", &raio);
	
	circunferencia= 2 * 3.14 * raio;
	printf("O perimetro da circunferencia e= %.1f",circunferencia);
	
	return 0;
}