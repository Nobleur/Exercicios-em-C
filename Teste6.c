#include <stdio.h>
#include <stdlib.h>

int main()
{
	 float av = 2.5;
	 float ti = 3.0;
	 float tg = 3.1;
	 float mf = av + ti + tg;
	 
	printf("Avaliação escrita: %0.1f \n", av);
	printf("Trabalho individual: %0.1f \n", ti);
	printf("Trabalho em grupo: %0.1f \n\n", tg);
	printf("Media Final: %0.1f \n", mf);
	
	return 0;
}