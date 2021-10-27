#include <stdio.h>
#include <stdlib.h>
#define TAM 5

main(){
	
int busca_binaria (int vet[], int elem, int i){
    
    for (i=0;i<TAM;i++){
		printf("vet[%d]:",i);
		scanf("%d", &vet[i]);
	} 
 	printf("Digite o elemento a ser procurado%d:", elem);
	scanf("%d", elem); 
     int comeco, fim, meio, pos;
     pos=-1;
     comeco=0;
     fim=TAM-1;
     
    
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
}
