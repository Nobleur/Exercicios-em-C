#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char nome1[60][3], nome2, nome3;
	float nota[3];
	int i;
	
	printf("QUAL O NOME DO PRIMEIRO ALUNO? ");
	scanf("%s", &nome1);
	
	printf("QUAL O NOME DO SEGUNDO ALUNO? ");
	scanf("%s", &nome2);
	
	printf("QUAL O NOME DO TERCEIRO ALUNO? ");
	scanf("%s", &nome3);
	
}
	
