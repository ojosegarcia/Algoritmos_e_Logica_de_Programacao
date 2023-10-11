/*7. Perguntar quantos números o usuário deseja informar, receber cada um deles e mostrar a média aritmética dos valores positivos no final. */

#include <stdio.h>
int main(){
		
	float quantidade, numero, soma, contar, media_aritmetica, positivos;	
	int i;
	
		printf("\n\nDigite quantos numeros voce deseja informar para calcular a media aritmetica:");
		scanf("%f", &quantidade);	
		
		for(i=0; i<quantidade; i++){
		printf("\n\nDigite um numero para calcular a media aritmetica:");
		scanf("%f", &numero);
		if(numero>0){
		media_aritmetica= (media_aritmetica + numero);
		}
		}
		media_aritmetica= media_aritmetica/ quantidade;
		printf("\nA media aritmetica e:%.2f", media_aritmetica);	
				
	return 0;
}