#include <stdio.h>



int main(){
	
	float nota1, nota2, nota3, media;
	
	printf("Digite um numero inteiro: ");
	scanf ("%f", &nota1);
	
	printf("Digite um numero inteiro: ");
	scanf ("%f", &nota2);
	
	printf("Digite um numero inteiro: ");
	scanf ("%f", &nota3);
	
	media = (nota1 + nota2 + nota3) / 3;
	
	printf ("Media Aritmetica= %.2f", media);
	
	return 0;
}