 /* Você assina um plano de 50 minutos no celular que custa R$ 50.00 por mês, independente de utilizá-los integralmente
 ou não. Porém, se você utilizar mais do que 50 minutos, é cobrado mais R$ 1.50 por cada minuto que passar dos 50 do seu 
 plano. Receber quantos minutos foram gastos no mês e calcular o valor da conta. */
 
#include <stdio.h>
int main (){
	
	float minutos, diferenca_preco, acrescimo, novo_preco;

		
	printf("Digite o numero de minutos que foram gastos no mes do plano do celular:");
	scanf("%f", &minutos);
	
	
	
	if(minutos>50){	
		diferenca_preco= minutos - 50; 
		acrescimo= 1.50 * diferenca_preco;
		novo_preco= acrescimo + 50; 
		printf("\nSeu plano no celular custou R$%.f0 por mes",novo_preco);
			
	}
		
		if(minutos<=50){
	printf("Seu plano de 50 minutos no celular custa R$ 50.00 por mes");  	
	}

	return 0;
}