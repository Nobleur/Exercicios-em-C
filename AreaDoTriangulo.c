#include <stdio.h>
#include <stdlib.h>

int main()
{
	float base;
	float altura;
	
	printf("Digite a base do triangulo: ");
	scanf("%f", &base);
	printf("Digite a altura do triangulo: ");
	scanf("%f", &altura);
	printf("Essa é a area do triangulo: %0.2f", (base*altura)/2);
	return 0;
}