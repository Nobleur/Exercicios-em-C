#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char** argv){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, n3;
	
	printf("DIGITE O PRIMEIRO N�MERO: ");
	scanf("%d", &n1);
	fflush(stdin);
	
	printf("\nDIGITE O SEGUNDO N�MERO: ");
	scanf("%d", &n2);
	fflush(stdin);
	
	printf("\nDIGITE O TERCEIRO N�MERO: ");
	scanf("%d", &n3);
	fflush(stdin);
	
	if(n1 == n2 && n2 == n2){
		printf("\nEles s�o iguais\n");
	}
	
	if(n1>n2 && n1>n3){
		printf("\nO maior n�mero �: %d\n", n1);
	}
	
	else{
    if(n2>n1 && n2>n3){
		printf("\nO maior n�mero �: %d\n", n2);	
	}
	else{
		
    if(n3>n1 && n3>n2){
		printf("nO maior n�mero �: %d\n", n3);
	}
	}
	}
	
	return 0;
}
