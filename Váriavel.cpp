#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char letra;
	int idade;
	char nome[10];
	float nota;
	
	printf("Digite seu nome: \n");
	scanf("%s", &nome);		
	fflush(stdin);
	 
	printf("Digite sua nota: \n");
	scanf("%f", &nota);
	fflush(stdin);
	
	printf("Digite sua idade: \n");
	scanf("%d", &idade);
	fflush(stdin);
	
	printf("Digite sua letra: \n");
	scanf("%c", &letra);
	fflush(stdin);	
	
	printf("NOME: %s \n", nome);
	printf("IDADE: %d \n", idade);
	printf("LETRA: %c \n", letra);
	printf("NOTA: %0.2f \n", nota);	

	return 0;	
}
