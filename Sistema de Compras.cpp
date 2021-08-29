#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int op, i, quantidade[50], qtd, escolha[50];
	float preco[50], c[50], d[50];
	char produto[50][50];
	
	do{
	
	printf("--------------------------------------");
	printf("\n----------SISTEMA DE COMPRAS----------");
	printf("\n--------------------------------------");
	printf("\n");
	
	printf("[1] - COMPRAR PRODUTOS");
	printf("\n[2] - LISTAR COMPRAS");
	printf("\n[3] - SAIR");
	printf("\n\nQUAL OPÇÃO VOCÊ DESEJA? ");
	scanf("%d", &op);
	
	switch (op){
		
		case 1:
			
				system("cls");
				
				printf("---------------------------");
				printf("\n----------COMPRAS----------");
				printf("\n---------------------------");
				printf("\n");
				
				printf("QUANTOS PRODUTOS VOCÊ DESEJA COMPRAR? ");
				scanf("%d", &qtd);
				fflush(stdin);
				
				for(i=1; i<=qtd; i++){
					
					system("cls");
					
					printf("---------------------------");
					printf("\n----------COMPRAS----------");
					printf("\n---------------------------");
					printf("\n");
					
					printf("QUAL O NOME DO PRODUTO?\n");
					scanf("%s", &produto[i]);
					fflush(stdin);
					
					printf("\nQUAL A QUANTIDADE?\n");
					scanf("%d", &quantidade[i]);
					fflush(stdin);
					
					printf("\nQUAL O PREÇO? R$");
					scanf("%f", &preco[i]);
					fflush(stdin);
					
					system("cls");
					
					printf("--------------------------------------");
					printf("\n----------FORMAS DE PAGAMENTO---------");
					printf("\n--------------------------------------");
					printf("\n");
					
					printf("QUAL A FORMA DE PAGAMENTO?\n");
					printf("\n[1] - Crédito");
					printf("\n[2] - Débito");
					
					printf("\n\nQUAL OPÇÃO VOCÊ DESEJA? ");
					scanf("%d", &escolha[i]);
					
					switch(escolha[i]){
						
						case 1:
								
								c[i] = preco[i]/100*5;
								
								printf("\nVOCÊ VAI PAGAR UM ACRÉSCIMO DE R$ %0.2f", c[i]);
								
								printf("\nTOTAL: %0.2f\n", preco[i]+c[i]);
								printf("\n");
								
								system("pause");
								system("cls");
								
							break;
							
						case 2: 
								
								d[i] = preco[i]/100*10;
								
								printf("\nVOCÊ VAI GANHAR UM DESCONTO DE R$ %0.2f", d[i]);
								
								printf("\nTOTAL: %0.2f\n", preco[i]-d[i]);
								printf("\n");
								
								system("pause");
								system("cls");
								
							break;
							
					}
					
				}
				
			break;
			
		case 2:
				system("cls");
				
					if(qtd == 0){
					
					
					printf("------------------------------------");
					printf("\n----------LISTA DE COMPRAS----------");
					printf("\n------------------------------------");
					printf("\n");
					
					printf("NÃO EXISTE REGISTRO DE COMPRAS\n\n");
					
					system("pause");
					system("cls");
			}
				else{
			
					for(i=1; i<=qtd; i++){
					
					system("cls");
					
					printf("------------------------------------");
					printf("\n----------LISTA DE COMPRAS----------");
					printf("\n------------------------------------");
					printf("\n");
				
					printf("NOME DO PRODUTO: %s", produto[i]);
					printf("\nQUANTIDADE: %d", quantidade[i]);
					printf("\nPREÇO: %0.2f", preco[i]);
					
					if(escolha[i] == 1){
						printf("\nFORMA DE PAGAMENTO: CRÉDITO");
						printf("\nACRÉSCIMO: R$%0.2f", c[i]);
						printf("\nTOTAL: %0.2f", preco[i]+c[i]);
						printf("\n\n");
					}
						if(escolha[i] == 2){
							printf("\nFORMA DE PAGAMENTO: DÉBITO");
							printf("\nDESCONTO: R$%0.2f", d[i]);
							printf("\nTOTAL: %0.2f", preco[i]-d[i]);
							printf("\n\n");
						}
					
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
	
}while(op !=3);

}
