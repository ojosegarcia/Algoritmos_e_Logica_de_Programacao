#include <stdio.h>

int main(){
	
	int ano, dias;
	
	printf("Digite o ano do seu nascimento para converte-lo em dias: ");
	scanf("%i, &ano");

	dias= (2023-ano)*365;
	printf("O valor aproximadamente de anos de vida sao: %i", dias);
	return 0;
}