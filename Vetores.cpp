#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	//Vetores � armazenar v�rios valores em um �nica vari�vel, ele subdivide uma vari�vel.
	
	int n[3];
	int i; //Auxiliar Contadora
	
	for(i=0; i<=2; i++){
		
						printf("DIGITE O N�MERO DA POSI��O %i: ", i);
						scanf("%i", &n[i]);
		
	}
	
	for(i=0; i<=2; i++){
		
						printf("\nO N�MERO DA POSI��O %i: %i ", i, n[i]);
		
	}
	
}
