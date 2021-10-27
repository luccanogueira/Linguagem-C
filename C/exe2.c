#include <stdio.h>
#include <stdlib.h>
#define TAM 15

main () {
	
	float vetA[TAM],vetB[TAM];
	int i;
	
	for (i=0;i<TAM;i++){
		printf("vetA[%d]=", i);
		scanf("%d", &vetA[i]);		
	}
	
	for (i=0;i<TAM;i++){
		vetB[i] = vetA[i] + vetA[i];
		printf("vetB[%d]=%d \n", vetB[i]);
	}
	system ("pause");
}
