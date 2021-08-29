#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	int n1, n2;
	
	printf("Digite um numero: \n");
	scanf("%d", &n1);
	fflush(stdin);
	
	printf("Digite outro numero: \n");
	scanf("%d", &n2);
	fflush(stdin);
	
	printf("\nResultado: %d \n", n1+n2);
	
	return 0;
}
