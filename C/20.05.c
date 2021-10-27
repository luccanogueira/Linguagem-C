#include <stdio.h>
#include <stdlib.h>
#define TAM 5
 
void leitura (int vet[]){
	int i;
	
	for (i=0;i<TAM;i++){
		printf("vet[%d]:",i);
		scanf("%d", &vet[i]);
	}	
}
void exibicao (int vet[]){
	int i;
	
	for (i=0;i<TAM;i++){
		printf("\n %d: ", i);
	}	
		
}
void ordenacao (int vet[], int tam){
 
    int i, j;
    int aux;
 
    for (i=1; i<tam;i++){
        for (j=0;j<tam-i;j++){
              if (vet[j] > vet[j+1]){
                     aux = vet[j];
                     vet[j] = vet[j+1];
                     vet[j+1] = aux;
              }
         }
      }
}

 
main(){
    int vet[TAM];
    int tam = 5, i;
 	
 	leitura (vet);
 	
 	exibicao (vet);
 	
    ordenacao(vet, tam);
    for (i=0;i<tam;i++)
         printf("\n vet[%d] = %d",i,vet[i]);
 
    system ("Pause");
}
