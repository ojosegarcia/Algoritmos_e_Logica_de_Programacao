#include <stdio.h>
#include <math.h>

int main()
{
	int numero, potencia,raiz;
	
	printf("Digite um numero para calcular o valor de sua raiz quadrada e oitava potencia:" );
	scanf("%d", &numero);
	
	potencia = pow(numero,2);
	
	raiz = sqrt(numero);
	
	printf("Potencia = %d \n", potencia);
	printf("Raiz = %d \n", raiz);
	
	return 0;
}