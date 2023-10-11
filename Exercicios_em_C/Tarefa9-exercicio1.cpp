/*1. Implemente um programa que imprime a figura abaixo recebendo a altura desejada ( de 1 à 20):
Exemplos:
Se a altura desejada for 1:

*
*

Se a altura desejada for 2:
 *
***
 *
 *
 
 Se a altura desejada for 3:

  *
 ***
*****
  *
  *
  *  
   
   Se a altura desejada for 6:

     *
    *** 
   *****
  *******
 *********
***********
     *
     *
     *  
     *
     *
     *

 */
 
#include <stdio.h>

int main(){
	int i, j, espacos, asteriscos, altura;
	
	printf("Digite um numero de 1 a 20, para ser desenhado uma seta: \n");
	scanf("%i", &altura);
	

	for(i = 1; i <= altura; i++){
		espacos = altura - i;
		asteriscos = 2 * i - 1;
		
		for(j = 1; j <= espacos; j++){
			printf(" ");
		}
		for(j = 1; j <= asteriscos; j++){
			printf("*");
		}
		
		printf("\n");
	}
	
	for(i = 1; i <= altura; i++){
		espacos = altura  - 1;
		asteriscos = 1;
		
		for(j = 1; j <= espacos; j++){
			printf(" ");
		}
		for(j = 1; j <= asteriscos; j++){
			printf("*");
		}
		
		printf("\n");
	}
	
	return 0;
}