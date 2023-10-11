/*Receber um salário bruto e calcular o salário líquido (salário bruto após descontar impostos).
 Imposto sobre salário de até R$ 2750.00 é de 15%, para salário maior que R$ 2750.00 é 25% */

#include <stdio.h>

int main(){
	
	int salario_bruto, salario_liquido;
	
	printf("Digite o salario bruto para calcular o salario liquido:");
	scanf("%i", &salario_bruto);
	
	if(salario_bruto<=2750){
		salario_liquido = salario_bruto - ((salario_bruto * 15)/100);	
		printf("\nO salario liquido sera de R$%2.i ",salario_liquido);
	
	}
		if(salario_bruto>2750){
		salario_liquido = salario_bruto - ((salario_bruto * 25)/100);	
		printf("\nO salario liquido sera de R$%2.i ",salario_liquido);
	}
	return 0;
}