#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	FILE *arquivo;
	char nome[50];
	int idade;
	char tel[50];
	
	arquivo = fopen("cadastro.txt", "w");
	
	if(arquivo == NULL){	
		printf("ERRO AO CRIAR OU ABRIR O ARQUIVO");
	}else{
		printf("QUAL O SEU NOME?");
		fgets(nome,50,stdin);
		fflush(stdin);
		printf("\nQUAL A SUA IDADE?");
		scanf("%d", &idade);
		fflush(stdin);
		printf("\nQUAL O SEU TELEFONE?");
		fgets(tel,50,stdin);
		fflush(stdin);
	}
	
	fprintf(arquivo, "NOME: %s", nome);
	fprintf(arquivo, "IDADE: %d", idade);
	fprintf(arquivo, "\nTELEFONE: %s", tel);
	fclose(arquivo);
	printf("\nDADOS GRAVADOS COM SUCESSO\n");
}
