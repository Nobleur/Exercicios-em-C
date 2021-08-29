#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char** argv)
{
	
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	char nome[15];
	float media, nota1, nota2;
	
	printf("===============================\n");
	printf("==========CALCULADORA==========\n");
	printf("===============================\n\n");
	
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	fflush(stdin);
	
	printf("\nDigite sua idade: ");
	scanf("%d", &idade);
	fflush(stdin);
	
	printf("\nDigite a primeira nota: ");
	scanf("%f", &nota1);
	fflush(stdin);
	
	printf("\nDigite a segunda nota: ");
	scanf("%f", &nota2);	
	fflush(stdin);
	
	system("cls");
	
	printf("=============================\n");
	printf("==========RESULTADO==========\n");
	printf("=============================\n");
	
	printf("\nSEU NOME: %s", nome);
	printf("\nSUA IDADE: %d", idade);
	printf("\nPRIMEIRA NOTA: %0.2f", nota1);
	printf("\nSEGUNDA NOTA: %0.2f", nota2);
	
	media = (nota1+nota2)/2;
	
	printf("\n\nMÉDIA: %0.2f \n", media);

	return 0;	
}
