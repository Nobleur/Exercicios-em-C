#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int op;
	float n1, n2, resultado;
	
	printf("==============================");
	printf("\n==========CALCULADORA=========");
	printf("\n==============================");
	printf("\n[1] - SOMA");
	printf("\n[2] - SUBTRAÇÃO");
	printf("\n[3] - MULTIPLICAÇÃO");
	printf("\n[4] - DIVISÃO");
	printf("\n[5] - SAIR\n");	
	scanf("%d", &op);
	
	switch(op){
		
		case 1:
				system("cls");
		
				printf("=======================");
				printf("\n==========SOMA=========");
				printf("\n=======================");
		
				printf("\nDIGITE UM NÚMERO: ");
				scanf("%f", &n1);
				fflush(stdin);
				
				printf("\nDIGITE OUTRO NÚMERO: ");
				scanf("%f", &n2);
				fflush(stdin);
				
				resultado = n1+n2;
				
				printf("\nRESULTADO: %0.2f\n", resultado);
		break;
		
		case 2:
				system("cls");
				
				printf("============================");
				printf("\n==========SUBTRAÇÃO=========");
				printf("\n============================");
				
				printf("\nDIGITE UM NÚMERO: ");
				scanf("%f", &n1);
				fflush(stdin);
				
				printf("\nDIGITE OUTRO NÚMERO: ");
				scanf("%f", &n2);
				fflush(stdin);
				
				resultado = n1-n2;
				
				printf("\nRESULTADO: %0.2f\n", resultado);
		break;
		
		case 3:
				system("cls");
				
				printf("================================");
				printf("\n==========MULTIPLICAÇÃO=========");
				printf("\n================================");
				
				printf("\nDIGITE UM NÚMERO: ");
				scanf("%f", &n1);
				fflush(stdin);
				
				printf("\nDIGITE OUTRO NÚMERO: ");
				scanf("%f", &n2);
				fflush(stdin);
				
				resultado = n1*n2;
				
				printf("\nRESULTADO: %0.2f\n", resultado);
		break;
		
		case 4:
				system("cls");
				
				printf("==========================");
				printf("\n==========DIVISÃO=========");
				printf("\n==========================");
				
				printf("\nDIGITE UM NÚMERO: ");
				scanf("%f", &n1);
				fflush(stdin);
				
				printf("\nDIGITE OUTRO NÚMERO: ");
				scanf("%f", &n2);
				fflush(stdin);
				
				if(n2 == 0){
					printf("\nIMPOSSIVEL DIVIDIR POR ZERO\n");
				}
				
				else{
				
				resultado = n1/n2;
				
				printf("\nRESULTADO: %0.2f\n", resultado);
			}
			
		break;
		
		case 5: 
				system("cls");
				printf("\nSAINDO DO PROGRAMA\n");
		break;
		
		default:
			system("cls");
			printf("\nOPÇÃO INVÁLIDA\n");
		break;
		
	}
	
	
		
}
