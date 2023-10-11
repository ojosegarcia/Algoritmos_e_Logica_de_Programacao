/* Receber numerador e denominador e calcular o resultado da divisão, desde que possível (denominador diferente de zero).
 Se não for possível dividir, apenas escreva “não existe divisão por zero”. */ 

#include <stdio.h>
int main(){
	
	float numerador, denominador, divisao; 
	
	printf("Digite um numero para o numerador:");
	scanf("%f", &numerador);
	
	printf("Digite um numero para o denominador:");
	scanf("%f", &denominador);	
	
	if (denominador>0){	
	divisao = numerador /denominador;
	printf("\nO valor do resultado da divisao e %.1f", divisao);
	
	}
		else{
		printf("\nNao existe divisao por zero");
		}
	
	return 0;
}

