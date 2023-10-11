#include <stdio.h>
int main (){
//Uma empresa contrata um encanador a R$ 35.00 por dia. Crie um programa que solicite o numero de dias trabalhados pelo encanador e mostre o valor liquido a ser pago, sabendo que sao descontados 8% de imposto de renda.

	int dias;
	float valor_liq;
	
	printf("Digite o numero de dias trabalhados: ");
	scanf("%i", &dias);
	
	valor_liq = dias * 35;
	valor_liq = valor_liq - ((valor_liq*8)/100);
    printf("O valor liquido a ser pago e R$: %.2f", valor_liq);
    
	return 0;
}
