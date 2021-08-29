#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char nome[15][15];
	float nota1[3], nota2[3];
	int i;
	
	for(i=0; i<=2; i++){
		
		printf("=========================");
		printf("\n==========NOTAS==========");
		printf("\n=========================");
		
		
		printf("\nDIGITE SEU NOME: ");
		scanf("%s", &nome[i]);
		fflush(stdin);
		
		printf("\nDIGITE SUA 1° NOTA: ");
		scanf("%f", &nota1[i]);
		fflush(stdin);
		
		printf("\nDIGITE SUA 2° NOTA: ");
		scanf("%f", &nota2[i]);
		fflush(stdin);
		
		system("cls");
		
	}
	
	for(i=0; i<=2; i++){
		
		printf("\nNOME: %s ", nome[i]);
		fflush(stdin);
		printf("\nMÉDIA: %0.2f\n", (nota1[i]+nota2[i])/2);
			
	}
	
}
