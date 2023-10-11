/*2. Desenvolver um programa que recebe a quantidade de alunos que estão cursando o 3º semestre. 
Para cada aluno receber a quantidade de disciplinas que cursou no 2º semestre e também a nota final relativa a cada disciplina. Calcular e 
mostrar a média de cada aluno para verificar o aproveitamento do último semestre cursado. */

#include <stdio.h>

int main(){
	int i, j, quantAlunos = 0, quantDisciplinas= 0;
	float nota = 0, somaNota = 0, media = 0;
	
	printf("Insira a quantidade de alunos que estao cursando o terceiro semestre: ");
	scanf("%d", &quantAlunos);
	
	for(i=1; i<=quantAlunos; i++){												
		printf("\nQuantas disciplinas o %do aluno teve?: ", i);
		scanf("%d", &quantDisciplinas);
				
		for(j=1; j<=quantDisciplinas; j++){								
			do{																
				printf("\nInsira a nota final da %da disciplina do %do aluno: ", j, i);
				scanf("%f", &nota);
				if(nota < 0 || nota >10){
					printf("Nota invalida, insira uma nota entre 0 e 10");
				}
			} while(nota < 0 || nota >10);
			somaNota+=nota;	
		}
		media = somaNota/quantDisciplinas;
		printf("\nA media das notas do %do Aluno foi de: %.1f", i, media);
		somaNota = 0;
	}
	return 0;
}