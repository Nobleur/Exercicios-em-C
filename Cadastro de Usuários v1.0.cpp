#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ba "bahia"

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int op, idade[3], telefone[3];
	char nome[15][15], email[70][70], regiao[10][10];
	
	printf("=======================================");
	printf("\n==========CADASTRO DE USU�RIOS=========");
	printf("\n=======================================");
	printf("\n[1] - CADASTRAR USU�RIOS");
	printf("\n[2] - LISTAR USU�RIOS");
	printf("\n[3] - SAIR\n");	
	scanf("%d", &op);
	
	switch(op){
		
		case 1:
			system("cls");
			
			printf("====================================");
			printf("\n==========CADASTRAR USU�RIOS=========");
			printf("\n=====================================");
			
			printf("\nDIGITE SEU NOME: ");
			scanf("%s", &nome);	
			fflush(stdin);
			
			
			printf("\nDIGITE SUA IDADE: ");
			scanf("%d", &idade);
			fflush(stdin);
			
			if(idade<18){
				printf("\nN�O � POSS�VEL REALIZAR O CADASTRO\n");
			}
			
			else{
				
				printf("\nDIGITE SEU TELEFONE: ");
				scanf("%d", &telefone);
				fflush(stdin);
				
				printf("\nDIGITE SEU E-MAIL: ");
				scanf("%s", &email);
				fflush(stdin);
			
				printf("\nQUAL A SUA REGI�O: ");
				printf("\n[1] - NORTE");
				printf("\n[2] - NORDESTE");
				printf("\n[3] - SUL");
				printf("\n[4] - SUDESTE\n");	
				scanf("%d", &op);
				
			switch(op){
					
					case 1: 
						printf ("\nQUAL A SUA CIDADE? ");
						scanf("%s", regiao);
						fflush(stdin);
						printf("\n\nCADASTRO REALIZADO COM SUCESSO!!\n");
					break;
					
					case 2:
					if(op == 2){
					
						ba;
						printf("\nVOC� � DA BAHIA!!\n");
						printf("\n\nCADASTRO REALIZADO COM SUCESSO!!\n");
				}
					break;
					
					case 3: 
						printf ("\nQUAL A SUA CIDADE? ");
						scanf("%s", regiao);
						fflush(stdin);
						printf("\n\nCADASTRO REALIZADO COM SUCESSO!!\n");
					break;
					
					case 4: 
						printf ("\nQUAL A SUA CIDADE? ");
						scanf("%s", regiao);
						fflush(stdin);
						printf("\n\nCADASTRO REALIZADO COM SUCESSO!!\n");
					break;
				
			
			}
			}	
		
		break;
			
		case 2:
			
			system("cls");
			
			printf("====================================");
			printf("\n==========LISTA DE USU�RIOS=========");
			printf("\n====================================");
			
			printf("\nNOME: %s", nome);
			printf("\nTELEFONE: %d", telefone);
			printf("\nIDADE: %d", idade);
			printf("\nE-MAIL: %s", email);
			printf("\nESTADO: %s", regiao);
			
		break;

		case 3:
			
			system("cls");
			printf("\nSAINDO DO PROGRAMA\n");
			
		break;
		
		default: 
		
				system("cls");
				printf("\nOP��O INV�LIDA\n");
		break;
		
}

}

