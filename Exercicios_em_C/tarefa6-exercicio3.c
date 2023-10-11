/*3. Como no exercício anterior, calcular a média. Se a média for maior ou igual a 5 escreva “aprovado”,
 senão calcule e mostre quanto faltou para atingir 5.*/ 
 
#include <stdio.h>
int main(){
	
	float prova1, prova2, media, resto;
	printf("Digite a nota para a prova 1:");
	scanf("%f", &prova1);
	
	printf("Digite a nota para a prova 2:");
	scanf("%f", &prova2);
	
	media= (prova1 + prova2) / 2;
	
	if(media>=5){
		printf("\n Aprovado");
	}
	else{
		resto= 5 - media;
		printf("Faltou %1.f pontos  para atingir 5 na media",resto);
	    scanf("%f", &resto);
	}
	return 0;
}