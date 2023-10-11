#include <stdio.h>



int main(){
	
	float distancia, tempo, media;
	
	printf("Digite um numero para a distancia percorrida: ");
	scanf ("%f", &distancia);
	
	printf("Digite um numero para o tempo: ");
	scanf ("%f", &tempo);
	
	
	
	media = distancia / tempo;
	
	printf ("A velocidade media e = %.2f", media);
	
	return 0;
}