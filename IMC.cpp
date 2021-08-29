#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(int argc, char** argv)
{
	
	setlocale(LC_ALL, "Portuguese");
	
	float altura;
	float peso; 
	float imc;
	
	printf("DIGITE SUA ALTURA: ");
	scanf("%f", &altura);
	fflush(stdin);
	
	printf("\nDIGITE SEU PESO: ");
	scanf("%f", &peso);
	fflush(stdin);
	
	imc = peso/ pow(altura,2);
	
	printf("\nIMC: %0.2f\n\n", imc);
	
	return 0;
}
