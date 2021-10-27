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
void ordenacao (int vet[]){
 
    int i, j;
    int aux;
 
    for (i=1; i<TAM;i++){
        for (j=0;j<TAM-i;j++){
              if (vet[j] > vet[j+1]){
                     aux = vet[j];
                     vet[j] = vet[j+1];
                     vet[j+1] = aux;
              }
         }
      }
}
int busca_binaria (int vet[], int tam, int elem){
 
 	printf("Digite o elemento a ser procurado%d:", elem);
	scanf("%d", elem); 
     int comeco, fim, meio, pos;
     pos=-1;
     comeco=0;
     fim=tam-1;
     
    
     while (comeco<=fim){
           meio = (int) ( (comeco+fim)/2 );
           if (elem==vet[meio]){ 
                  pos=meio;
                  comeco=fim+1;
           }
          else if (elem > vet[meio]) 
                   comeco=meio + 1;
                 else fim=meio - 1; 
      }
      return(pos);
 }
 
main(){
    int vet[TAM];
    int i, pos, elem;
 	
 	leitura (vet);
 	
 	exibicao (vet);
 	
    ordenacao(vet);
    for (i=0;i<TAM;i++){
	
         printf("\n vet[%d] = %d",i,vet[i]);
    }
	
    pos = busca_binaria(elem);
    
    system ("Pause");
}
