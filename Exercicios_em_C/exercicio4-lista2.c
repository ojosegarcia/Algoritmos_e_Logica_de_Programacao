#include <stdio.h>

int main(){
	
	float hora_nomal, hora_extra, salario;
	
	printf("Digite a quantidade de horas trabalhadas normal: ");
	scanf("%f", &hora_nomal);
	
	printf("Digite a quantidade de horas trabalhadas extra: ");
	scanf("%f", &hora_extra);
	
	hora_nomal= hora_nomal*10;
	hora_extra= hora_extra*15;
	salario= hora_nomal+ hora_extra;
	
	printf("O valor do salario sera: R$ %.2f reais", salario);

	return 0;
}