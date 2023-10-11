/*8.Receber 10 números e, ao final, informar qual é o maior e o menor deles.*/ 

#include <stdio.h>
int main(){
		
	float numero, media_aritmetica, maior, menor;	
	int i;
	
		for(i=0; i<10; i++){
		printf("\n\nDigite um numero, para ao final, informar qual e o maior e o menor deles:");
		scanf("%f", &numero);
		menor= numero;
		maior= numero;  
		}
		 if(numero>maior){
		 	maior= numero;        
		 }
		 	if(numero>maior){
		 	maior= numero;       
		 }
	
		printf("\nMaior numero: %.f \nMenor numero: %.f\n\n",maior, menor);
	return 0;
}   