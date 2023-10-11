#include <stdio.h>


int main(){
/* A disciplina Algoritmos e Programação é dividida em duas partes: teoria e prática. 
Na teoria, são aplicadas duas provas (com nota de 0 a 10 cada) e na prática também. 
A nota final do semestre é composta pelas médias das provas de teoria e prática, 
mas a teoria tem peso de 60%, enquanto a prática tem peso de 40%. Receba as notas de um aluno
em cada prova teórica e prática e mostre a nota final do semestre.*/
	
	float nota1_teoria, nota2_teoria, nota1_pratica, nota2_pratica, media, teorica, pratica;
	
	printf("Digite um numero para uma nota da prova 1 em teorica: ");
	scanf("%f", &nota1_teoria);
		
	printf("Digite um numero para uma nota da prova 2 em teorica: ");
	scanf("%f", &nota2_teoria);
	
	printf("Digite um numero para uma nota da prova 1 em pratica: ");
	scanf("%f", &nota1_pratica);
	
	printf("Digite um numero para uma nota da prova 2 em pratica ");
	scanf("%f", &nota2_pratica);
	
	teorica= nota1_teoria + nota2_teoria /2 ;
	pratica= nota1_pratica + nota2_pratica /2;
	
    media=(teorica*0.6) + (pratica*0.4);
	printf("O valor da media sera: %.1f", media);
	return 0;
}