#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char aluno[50][50];
	char serie[60][60], idade[10][10];
	float n1[50], n2[50];
	int op, i, qtd;
	
	do{
		
		printf("=====================================");
		printf("\n==========CADASTRO DE ALUNOS=========");
		printf("\n=====================================");
		
		printf("\n");
		printf("\n[1] - CADASTRAR ALUNO");
		printf("\n[2] - LISTAR ALUNOS");
		printf("\n[3] - SAIR");
		printf("\n");
		printf("\nQUAL A OPÇÃO QUE VOCÊ DESEJA? ");
		scanf("%d", &op);
		fflush(stdin);
		
		switch(op){
			
			case 1:
					
					system("cls");
					
					printf("===================================");
					printf("\n==========CADASTRAR ALUNOS=========");
					printf("\n===================================");
					
					printf("\nQUANTOS ALUNOS DESEJA CADASTRAR? ");
					scanf("%d", &qtd);
					
					for(i=1; i<=qtd; i++){
					
					system("cls");
					
					printf("===================================");
					printf("\n==========CADASTRAR ALUNOS=========");
					printf("\n===================================");
					
					printf("\nQUAL O SEU NOME? ");
					scanf("%s", &aluno[i]);
					fflush(stdin);
					
					printf("\nQUAL A SUA IDADE? ");
					scanf("%s", &idade[i]);
					fflush(stdin);
					
					printf("\nQUAL A SUA SÉRIE? ");
					scanf("%s", &serie[i]);
					fflush(stdin);
					
					printf("\nDIIGTE A 1° NOTA: ");
					scanf("%f", &n1[i]);
					fflush(stdin);
					
					printf("\nDIIGTE A 2° NOTA: ");
					scanf("%f", &n2[i]);
					fflush(stdin);
					
					system("pause");
									
					system("cls");	
								
		}
				break;
				
			case 2:
				
				system("cls");
				
				if(qtd == 0){
					
					printf("==================================");
					printf("\n==========LISTA DE ALUNOS=========");
					printf("\n==================================");
					printf("\n");
					
					printf("\n\tNÃO HÁ DADOS\n");
					printf("\n");
					
					system("pause");
					
					system("cls");
				
				}
				else{
				
				printf("==================================");
				printf("\n==========LISTA DE ALUNOS=========");
				printf("\n==================================");
				printf("\n");
				
				for(i=1; i<=qtd; i++){
				
				printf("\nNOME: %s", aluno[i]);
				printf("\nSÉRIE: %s", serie[i]);
				printf("\nIDADE: %s", idade[i]);
				printf("\n1° NOTA: %0.2f", n1[i]);
				printf("\n2° NOTA: %0.2f", n2[i]);
				printf("\nMÉDIA: %0.2f", (n1[i]+n2[i])/2);
				printf("\n");
				printf("\n");
		
				system("pause");
				
				system("cls");
				
			}
		}
				break;
				
			case 3:
					
					system("cls");
					printf("\nSAINDO DO PROGRAMA\n\n");
					system("pause");
					
				break;	
			
			default: 
		
				system("cls");
				printf("\nOPÇÃO INVÁLIDA\n");
				break;	
			
		}
		
	}while(op!=3);
	
}
