#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char** argv)
{
 
	setlocale(LC_ALL, "Portuguese");    
    
	int idade;
	
	printf("DIGITE SUA IDADE: ");
	scanf("%d", &idade);
	fflush(stdin);
	
	if(idade >=18){
					printf("\nVOC� TEM MAIOR IDADE!\n");
	}
	
	else{
			printf("\nVOC� N�O TEM MAIOR IDADE!\n");
	}
	
	return 0;
}
