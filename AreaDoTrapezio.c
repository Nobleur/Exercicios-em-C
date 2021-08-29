#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	float b, B, h, area;
	
	printf("Digite a base maior: ");
	scanf("%f", &B);
	
	printf("Digite a base menor: ");
	scanf("%f", &b);
	
	printf("Digite a altura: ");
	scanf("%f", &h);
	
    area = ((b+B)*h)/2; 
	
	printf("Area do trapezio: %0.2f \n", area);
	
	return 0;
}

