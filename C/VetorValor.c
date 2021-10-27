#include <stdio.h>
#include <stdlib.h>
#define TAM 3
 
 void iniciaVetor(int v[]) {         
        int i;      
        for (i = 0; i < TAM; i++) {      
             v[i] = 1;     
        }   
}
int somaValores (int v[]) {
     int i, soma = 0;
     for (i = 0; i < TAM; i++) {          
     	if (i % 2 != 0){
     		soma += v[i];
     }
 }
     return soma;
}
 
main () {
        int vetor[TAM];
        int i;

        iniciaVetor(vetor);

        int s = somaValores (vetor);
        printf ("\nSoma = %d\n\n", s);
        system ("PAUSE");
}
