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
	printf("\n[2] - SUBTRA��O");
	printf("\n[3] - MULTIPLICA��O");
	printf("\n[4] - DIVIS�O");
	printf("\n[5] - SAIR\n");	
	scanf("%d", &op);
	
	switch(op){
		
		case 1:
				system("cls");
		
				printf("=======================");
				printf("\n==========SOMA=========");
				printf("\n=======================");
		
				printf("\nDIGITE UM N�MERO: ");
				scanf("%f", &n1);
				fflush(stdin);
				
				printf("\nDIGITE OUTRO N�MERO: ");
				scanf("%f", &n2);
				fflush(stdin);
				
				resultado = n1+n2;
				
				printf("\nRESULTADO: %0.2f\n", resultado);
		break;
		
		case 2:
				system("cls");
				
				printf("============================");
				printf("\n==========SUBTRA��O=========");
				printf("\n============================");
				
				printf("\nDIGITE UM N�MERO: ");
				scanf("%f", &n1);
				fflush(stdin);
				
				printf("\nDIGITE OUTRO N�MERO: ");
				scanf("%f", &n2);
				fflush(stdin);
				
				resultado = n1-n2;
				
				printf("\nRESULTADO: %0.2f\n", resultado);
		break;
		
		case 3:
				system("cls");
				
				printf("================================");
				printf("\n==========MULTIPLICA��O=========");
				printf("\n================================");
				
				printf("\nDIGITE UM N�MERO: ");
				scanf("%f", &n1);
				fflush(stdin);
				
				printf("\nDIGITE OUTRO N�MERO: ");
				scanf("%f", &n2);
				fflush(stdin);
				
				resultado = n1*n2;
				
				printf("\nRESULTADO: %0.2f\n", resultado);
		break;
		
		case 4:
				system("cls");
				
				printf("==========================");
				printf("\n==========DIVIS�O=========");
				printf("\n==========================");
				
				printf("\nDIGITE UM N�MERO: ");
				scanf("%f", &n1);
				fflush(stdin);
				
				printf("\nDIGITE OUTRO N�MERO: ");
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
			printf("\nOP��O INV�LIDA\n");
		break;
		
	}
	
	
		
}
