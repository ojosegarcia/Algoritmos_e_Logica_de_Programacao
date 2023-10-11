#include <stdio.h>



int main(){
	
	float nota1, nota2, media;
	
	printf("Digite um numero inteiro: ");
	scanf ("%f", &nota1);
	
	printf("Digite um numero inteiro: ");
	scanf ("%f", &nota2);
	
	
	
	media = (nota1 + nota2) / 2;
	
	printf ("Media Aritmetica= %.2f", media);
	
	return 0;
}