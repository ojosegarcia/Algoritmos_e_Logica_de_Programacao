//Calcular a média de um aluno em um semestre com duas provas, onde M = (P1 + P2) / 2. 
//Se a média for maior ou igual a 5 escreva “aprovado”, senão escreva “reprovado”. 

#include <stdio.h>

int main(){
	
 float prova1, prova2, media;	
	
	printf("Digite a nota para a prova 1:");
	scanf("%f", &prova1);
	
	printf("Digite a nota para a prova 2:");
	scanf("%f", &prova2);
	
	media= (prova1 + prova2) / 2;
	
	if(media>=5){
		printf("\n Aprovado");
	}
	else{
		if(media<=4){
			printf("\n Reprovado");
		}
	}
	return 0;
}