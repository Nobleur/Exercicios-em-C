#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Portuguese");
	
	float nota1, nota2, nota3, nota4, frequencia, media;
	
	printf("DIGITE SUA FREQU�NCIA: ");
	scanf("%f", &frequencia);
	fflush(stdin);
		
	printf("\nDIGITE SUA 1� NOTA: ");
	scanf("%f", &nota1);
	fflush(stdin);
	
	printf("\nDIGITE SUA 2� NOTA: ");
	scanf("%f", &nota2);
	fflush(stdin);
	
	printf("\nDIGITE SUA 3� NOTA: ");
	scanf("%f", &nota3);
	fflush(stdin);
	
	printf("\nDIGITE SUA 4� NOTA: ");
	scanf("%f", &nota4);
	fflush(stdin);
	
	media = (nota1+nota2+nota3+nota4)/4;
	
	system("cls");
	
	printf("\nM�DIA: %0.2f", media);
	printf("\nFREQU�NCIA: %0.2f", frequencia);
	
	if(media>7 && frequencia>=75){
		printf("\n\nVOC� FOI APROVADO!!!\n\n");
	}else{
		printf("\n\nVOC� FOI REPROVADO!!!\n\n");
	}
	
	return 0;
}
