#include <stdio.h>
#include <stdlib.h>
#define TAM 11

main () {
	
	int tabuada[TAM], i, num;
	
	printf ("Digite o numero da tabuada desejada: ");
	scanf ("%d", &num);
	
	for (i=0;i<TAM;i++){
		tabuada[i]=num*i;
		printf("%d X %d=%d \n",num, i, tabuada[i]);		
	}
	system ("pause");
	
	
}
