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
	printf("\nEspa�o da Mem�ria -->");
	printf("%i", &x);
	
	int *ponteiro;
	ponteiro = &x;
	
	printf("\n");
	printf("\nPonteiro -->");
	printf("%i", *ponteiro);
	printf("\nPonteiro Espa�o da Mem�ria -->");
	printf("%i", ponteiro);
	
}
