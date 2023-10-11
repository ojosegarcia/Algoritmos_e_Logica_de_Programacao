//Um número e mostrar sua tabuada do 0 ao 10. 

#include <stdio.h>
int main(){
	
	int numero, inteiro;
	int i;
	
	printf("\n\nDigite um numero para mostrar a sua tabuada:");
	scanf("%i", &numero);
	
	for(i=1; i<11; i++){
	inteiro= i*numero;
	printf("\n\nA tabuada de %.1i X %.i  = %.1i", numero, i, inteiro);
}
		
	
	
	return 0;
}