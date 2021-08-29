#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	
	float b, h, area;
	
	printf("Digite a base do retangulo: ");
	scanf("%f", &b);
	
	printf("Digite a altura do retangulo: ");
	scanf("%f", &h);
	
	area = b * h;
	
	printf("Area: %0.2f \n", area);
	
	return 0;
}