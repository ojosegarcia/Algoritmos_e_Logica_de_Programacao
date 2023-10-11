#include <stdio.h>

int main(){
	
	float dinheiro, troco, pipoca, ingresso, chocolate;
	pipoca= 30;
	ingresso=30;
	chocolate=10;
	
	printf("Digite o quanto a mulher liberou de grana:");
	scanf("%f", &dinheiro);
	
	if(dinheiro>=ingresso){
		printf("\nEbaa, vou ver a baleia");
		
		if(dinheiro>= ingresso+ pipoca){
		printf("\nEbaa, vou comer pipoca e tomar e guarana");	
		troco= dinheiro - (ingresso + pipoca);
		}
		 else {
		 	if(dinheiro>= (ingresso + chocolate)){
		 		printf("\nEba, vou comer chocolate!!!");
		 		troco= dinheiro - (ingresso + chocolate);
			 }
			 else{
			 	troco= dinheiro - (ingresso);	
			 }
		 }	
		 	printf("\nTroco: R$ %.2f", troco);

	}
	else{
			printf("Ahhh, vou ajudar em casa!!!");	
	}
	return 0;
}