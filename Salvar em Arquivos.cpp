#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	FILE *arquivo;
	
	arquivo = fopen("teste.txt", "w");
	
	fprintf(arquivo, "Esse � um teste de grava��o em arquivo C");
	fclose(arquivo);
	
}
