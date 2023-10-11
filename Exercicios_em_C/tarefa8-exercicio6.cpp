/*6. Receber 10 números e, ao final, informar quantos são positivos e quantos são negativos. */

#include <stdio.h>
int main(){
	
	float numero, positivos=0, negativos=0;	
	int i;
	
	for(i=0; i<10; i++){
		printf("\n\nDigite um numero para informar ao final quantos sao negativos ou positivos:");
		scanf("%f", &numero);		

	if(numero>0){
		positivos++;
	}          
	
		else{
			if(	numero<0){	
				negativos++;
			
	}
}
}
	printf("\nPositivos: %.f \nNegativo: %.f\n\n",positivos, negativos);	
	
	return 0;	
}
 