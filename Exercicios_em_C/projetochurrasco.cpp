/*Receber a quantidade de homens, mulheres e crianças que irão participar de um churrasco com duração exata de 4 horas.
Com as informações recebidas, montar uma lista de compras com 10 itens (comida, bebida, carnes, etc.)
Os itens da lista de compras ficará ao seu critério.
Lembre-se que na média o consumo dos itens para homens, mulheres de crianças é diferente.
A lista deverá conter a quantidade de cada um dos itens em quilos ou unidades.*/

#include <stdio.h>
int main(){
	
	float pao_de_alho, asinha_de_frango,linguica,queijo,arroz,coracaozinho,carne,farofa;
	int homens, mulheres, criancas, refrigerante, cerveja;
	

	
	printf("Digite o numero de homens que irao ir no churrasco:");
	scanf("%i", &homens);
	
	printf("Digite o numero de mulheres que irao ir no churrasco:");
	scanf("%i", &mulheres);
	
	printf("Digite o numero de criancas que irao ir no churrasco:");
	scanf("%i", &criancas);
	
	refrigerante= criancas * 2;
	cerveja= (homens*5)+(mulheres*2);
	pao_de_alho=(homens*0.02)+(mulheres*0.01);
	asinha_de_frango= (homens*0.06)+(mulheres*0.04)+(criancas*0.02);
	linguica= ((homens*0.06)+(mulheres*0.04)+(criancas*0.02));
	queijo= (homens*0.2)+(mulheres*0.1);
	arroz=(homens*0.8)+(mulheres*0.8)+(criancas*0.4);
	coracaozinho= (homens*0.02)+(mulheres*0.01);
	carne= (homens*0.06)+(mulheres*0.04)+(criancas*0.02);
	farofa=(homens*0.02)+(mulheres*0.02);
	
	printf("\n Para o churrasco voce deve comprar:"
	"\n\n %ilatas de refrigerante;"
	"\n - %ilatas de cerveja;"
	"\n - %.1fkg de pao_de_alho;"
	"\n - %.1fkg de asinha_de_frango;"
	"\n - %.1fkg de linguica;"
	"\n - %.1fkg de queijo;"
	"\n - %.1fkg de arroz;"
	"\n - %.1fkg de coracaozinho;"
	"\n - %.1fkg de carne;"
	"\n - %.3fg de farofa;", refrigerante, cerveja, pao_de_alho, linguica, queijo, arroz, coracaozinho, carne,farofa, asinha_de_frango);

	return 0;
}