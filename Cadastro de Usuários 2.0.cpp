#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ba "bahia"

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int op, idade[3], escolha[50], qtd_user;
	int i;
	char nome[15][15], email[70][70], telefone[20][20], regiao[10][10];
	
	do{
	
	printf("========================================");
	printf("\n==========CADASTRO DE USU�RIOS=========");
	printf("\n=======================================");
	printf("\n[1] - CADASTRAR USU�RIOS");
	printf("\n[2] - LISTAR USU�RIOS");
	printf("\n[3] - SAIR\n");	
	
	printf("\nQUAL OP��O VOC� DESEJA? ");
	scanf("%d", &op);
	
	switch(op){
		
		case 1:
			
			system("cls");
			
			printf("=====================================");
			printf("\n==========CADASTRAR USU�RIOS=========");
			printf("\n=====================================");
			
			printf("\nQUANTOS USU�RIOS VOC� DESEJA CADASTRAR? ");
			scanf("%d", &qtd_user);
			fflush(stdin);
		
			for(i=1; i<=qtd_user; i++){
			
			system("cls");
			
			printf("=====================================");
			printf("\n==========CADASTRAR USU�RIOS=========");
			printf("\n=====================================");
			
			printf("\nDIGITE SEU NOME: ");
			scanf("%s", &nome[i]);	
			fflush(stdin);
			
			printf("\nDIGITE SUA IDADE: ");
			scanf("%d", &idade[i]);
			fflush(stdin);
			
			if(idade[i]<18){
				printf("\nN�O � POSS�VEL REALIZAR O CADASTRO\n");
				system("pause");
			}
			
			else{
				
				printf("\nDIGITE SEU TELEFONE: ");
				scanf("%s", &telefone[i]);
				fflush(stdin);
				
				printf("\nDIGITE SEU E-MAIL: ");
				scanf("%s", &email[i]);
				fflush(stdin);
			
				printf("\nQUAL A SUA REGI�O: ");
				printf("\n[1] - NORTE");
				printf("\n[2] - NORDESTE");
				printf("\n[3] - SUL");
				printf("\n[4] - SUDESTE\n");
				
				printf("\nQUAL OP��O VOC� DESEJA? ");	
				scanf("%d", &escolha[i]);
				
			switch(escolha[i]){
					
					case 1: 
						printf ("\nQUAL A SUA CIDADE? ");
						scanf("%s", regiao[i]);
						fflush(stdin);
						printf("\nCADASTRO REALIZADO COM SUCESSO!!\n");
						system("pause");
						
					break;
					
					case 2:
						
					if(escolha[i] == 2){
			
						printf("\nVOC� � DA BAHIA!!\n");
						printf("\nCADASTRO REALIZADO COM SUCESSO!!\n");
						system("pause");
				}
				
					break;
					
					case 3: 
						printf ("\nQUAL A SUA CIDADE? ");
						scanf("%s", &regiao[i]);
						fflush(stdin);
						printf("\nCADASTRO REALIZADO COM SUCESSO!!\n");
						system("pause");
						
					break;
					
					case 4: 
						printf ("\nQUAL A SUA CIDADE? ");
						scanf("%s", &regiao[i]);
						fflush(stdin);
						printf("\nCADASTRO REALIZADO COM SUCESSO!!\n");
						system("pause");
						
					break;
				
			}
			}
			}	
		
		break;
			
		case 2:
			
		system("cls");
			
			if(qtd_user == 0){
				
				printf("====================================");
				printf("\n==========LISTA DE USU�RIOS=========");
				printf("\n====================================");
				printf("\nN�O EXISTE DADOS DE CADASTRO\n\n");
				system("pause");
			}
			
			else{
			
			printf("====================================");
			printf("\n==========LISTA DE USU�RIOS=========");
			printf("\n====================================");
			
			for(i=1; i<=qtd_user; i++){
			printf("\nNOME: %s", nome[i]);
			printf("\nTELEFONE: %s", telefone[i]);
			printf("\nIDADE: %d", idade[i]);
			printf("\nE-MAIL: %s", email[i]);
			
			if(escolha[i] == 2){
				printf("\nESTADO: BAHIA");
				printf("\n");
				system("pause");
	
			}
			
			else{
				printf("\nESTADO: %s", regiao[i]);
				printf("\n");
				system("pause");
			}
			}
			}
		
		break;

		case 3:
			
			system("cls");
			printf("\nSAINDO DO PROGRAMA\n");
			system("pause");
			
		break;
		
		default: 
		
				system("cls");
				printf("\nOP��O INV�LIDA\n");
		break;
		

		
}
	printf("\n");
	system("cls");
	}while(op !=3);
}

