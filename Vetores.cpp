#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	//Vetores é armazenar vários valores em um única variável, ele subdivide uma variável.
	
	int n[3];
	int i; //Auxiliar Contadora
	
	for(i=0; i<=2; i++){
		
						printf("DIGITE O NÚMERO DA POSIÇÃO %i: ", i);
						scanf("%i", &n[i]);
		
	}
	
	for(i=0; i<=2; i++){
		
						printf("\nO NÚMERO DA POSIÇÃO %i: %i ", i, n[i]);
		
	}
	
}
