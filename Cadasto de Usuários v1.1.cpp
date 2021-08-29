#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ba "bahia"

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int op, idade[3], i;
	char nome[15][15], email[70][70], telefone[20][20], regiao[10][10];
	
	printf("========================================");
	printf("\n==========CADASTRO DE USUÁRIOS=========");
	printf("\n=======================================");
	printf("\n[1] - CADASTRAR USUÁRIOS");
	printf("\n[2] - LISTAR USUÁRIOS");
	printf("\n[3] - SAIR\n");	
	scanf("%d", &op);
	
	switch(op){
		
		case 1:
			
			for(i=0; i<=2; i++){
			
			system("cls");
			
			printf("====================================");
			printf("\n==========CADASTRAR USUÁRIOS=========");
			printf("\n=====================================");
			
			printf("\nDIGITE SEU NOME: ");
			scanf("%s", &nome[i]);	
			fflush(stdin);
			
			
			printf("\nDIGITE SUA IDADE: ");
			scanf("%d", &idade[i]);
			fflush(stdin);
			
			if(idade[i]<18){
				printf("\nNÃO É POSSÍVEL REALIZAR O CADASTRO\n");
			}
			
			else{
				
				printf("\nDIGITE SEU TELEFONE: ");
				scanf("%s", &telefone[i]);
				fflush(stdin);
				
				printf("\nDIGITE SEU E-MAIL: ");
				scanf("%s", &email[i]);
				fflush(stdin);
			
				printf("\nQUAL A SUA REGIÃO: ");
				printf("\n[1] - NORTE");
				printf("\n[2] - NORDESTE");
				printf("\n[3] - SUL");
				printf("\n[4] - SUDESTE\n");	
				scanf("%d", &op);
				
			switch(op){
					
					case 1: 
						printf ("\nQUAL A SUA CIDADE? ");
						scanf("%s", regiao[i]);
						fflush(stdin);
						printf("\n\nCADASTRO REALIZADO COM SUCESSO!!\n");
						system("pause");
						
					break;
					
					case 2:
					if(op == 2){
					
						ba;
						printf("\nVOCÊ É DA BAHIA!!\n");
						printf("\n\nCADASTRO REALIZADO COM SUCESSO!!\n");
						system("pause");
				}
					break;
					
					case 3: 
						printf ("\nQUAL A SUA CIDADE? ");
						scanf("%s", &regiao[i]);
						fflush(stdin);
						printf("\n\nCADASTRO REALIZADO COM SUCESSO!!\n");
						system("pause");
						
					break;
					
					case 4: 
						printf ("\nQUAL A SUA CIDADE? ");
						scanf("%s", &regiao[i]);
						fflush(stdin);
						printf("\n\nCADASTRO REALIZADO COM SUCESSO!!\n");
						system("pause");
						
					break;
				
			}
			}
			}	
		
		break;
			
		case 2:
			
			system("cls");
			
			printf("====================================");
			printf("\n==========LISTA DE USUÁRIOS=========");
			printf("\n====================================");
			
			for(i=0; i<=2; i++);{
			
			printf("\nNOME: %s", nome[i]);
			printf("\nTELEFONE: %s", telefone[i]);
			printf("\nIDADE: %d", idade[i]);
			printf("\nE-MAIL: %s", email[i]);
			printf("\nESTADO: %s", regiao[i], ba);
		}
		
		break;

		case 3:
			
			system("cls");
			printf("\nSAINDO DO PROGRAMA\n");
			
		break;
		
		default: 
		
				system("cls");
				printf("\nOPÇÃO INVÁLIDA\n");
		break;
		
}

}

