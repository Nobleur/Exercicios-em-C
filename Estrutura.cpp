#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	x = 10;
	
	printf("\nValor da Variavel -->");
	printf("%i", x);
	printf("\n");
	printf("\nEspaço da Memória -->");
	printf("%i", &x);
	
	int *ponteiro;
	ponteiro = &x;
	
	printf("\n");
	printf("\nPonteiro -->");
	printf("%i", *ponteiro);
	printf("\nPonteiro Espaço da Memória -->");
	printf("%i", ponteiro);
	
}
