/* Receber 10 números e armazená-los em um vetor. 
    Após esta primeira etapa é necessário pedir para o usuário digitar um número. 
    Verificar se este número está armazenado no vetor e se estiver mostrar quantas vezes o número esta armazenado no
	 vetor, ou seja, quantas vezes o número se repete. 
     Se o número não estiver no vetor, uma mensagem deve indicar esta condição e deverá ser solicitado um novo número
	 para o usuário.  */
	 
	 #include <stdio.h>

#define TAM 10

int main() {
    int numeros[TAM];
    int i, numero, contador = 0;


    printf("Digite 10 numeros para armazenar no vetor:\n");
    for (i = 0; i < TAM; i++) {
        printf("Numero %i: ", i + 1);
        scanf("%i", &numeros[i]);
    }


    printf("\nDigite um número: ");
    scanf("%d", &numero);


    for (i = 0; i < TAM; i++) {
        if (numeros[i] == numero) {
            contador++;
        }
    }


    if (contador > 0) {
        printf("\nO número %i está presente no vetor e se repete %i vezes \n", numero, contador);
    } else {
        printf("\nO número %i não está presente no vetor.\n", numero);
    }

    return 0;
}

	 
	 