/*
Receber dois vetores inteiros de 10 elementos cada um.
Primeiro receber o vetor1 e depois o vetor2;
Verificar a quantidade de valores iguais, na mesma posição, em ambos os vetores.
Mostrar essa quantidade:

Exemplo:
Vetor1:  [1, 3, 6, 7, 8, 8, 12, 54, 23, 8]
Vetor2:  [1, 3, 6, 5, 8, 8,   1, 53, 23, 8]
*/

#include <stdio.h>
#define TAM 10
int main(){
	
	int v1[TAM], v2[TAM],cont=0;
	int i;
		
	for(i=0; i < TAM; i++){
		printf("Digite o  %io numero para o primeiro vetor: ", i+1);
		scanf("%i", &v1[i]);
		printf("Digite o  %io numero para o segundo vetor: ", i+1);
		scanf("%i", &v2[i]);
		printf("\n");
		
		if(v1[i]==v2[i]){
		cont++;
		}
	}
	printf("\A quantidade de valores iguais nos dois vetores e:%i ",cont);

	return 0;
}
	

