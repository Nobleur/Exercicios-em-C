#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	int a, b, c;
	
	printf("Digite um numero: ");
		scanf("%d", &a);	
	printf("Digite outro numero:");
		scanf("%d", &b);
	printf("Digite outro numero: ");
		scanf("%d", &c);
    printf("Media: %d", (a + b + c)/3);
	return 0;
}