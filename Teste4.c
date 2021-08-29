#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("Eu tenho 16 anos\n");
	printf("Tenho 1.85 de altura\n");
	printf("Sou do sexo masculino\n");
	printf("Eu tenho 16 anos, tenho 1.85 de altura e ganho 1.100\n\n");
	
	int idade = 44;
	char sexo = 'F';
	float altura = 1.63;
	
	printf("Eu tenho %d anos\n", idade);
	printf("Tenho %0.2f de altura\n", altura);
	printf("Sou do sexo %c \n", sexo);
	
	return 0;
}

