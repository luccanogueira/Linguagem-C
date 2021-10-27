#include <stdio.h>
#include <stdlib.h>
#define LINHAS 3
#define COLUNAS 4
main () {
    int matriz[LINHAS][COLUNAS];
    int i, j;
    for (i = 0; i < LINHAS; i++) { 
        for (j = 0; j < COLUNAS; j++) { 
            printf ("matriz[%d][%d]: ", i, j);
            scanf ("%d", &matriz[i][j]);
        }
    }
    int somaPar, somaImpar = 0;
    for (i = 0; i < LINHAS; i++) { 
        for (j = 0; j < COLUNAS; j++) { 
        	if (matriz[i][j] % 2 == 0){
        		somaPar += matriz[i][j];
			}
			else {
				somaImpar += matriz[i][j];
			}
            
            printf ("%d ", matriz[i][j]);
        }
        printf ("\n");
    }
    printf ("\nSoma dos Pares = %d\n", somaPar);
    printf ("\nSoma dos Impares = %d\n", somaImpar);
    system ("PAUSE");
}
