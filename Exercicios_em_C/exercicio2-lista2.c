#include <stdio.h>



int main(){
	
	float distancia, combustivel, media;
	
	printf("Digite um numero para a distancia percorrida de um veiculo em km: ");
	scanf ("%f", &distancia);
	
	printf("Digite um numero para o combustivel gato de um veiculo em litos: ");
	scanf ("%f", &combustivel);
	
	
	
	media = distancia / combustivel;
	
	printf ("Media Aritmetica= %.2f", media);
	
	return 0;
}