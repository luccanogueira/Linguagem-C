#include <stdio.h>
#include <stdlib.h>
#define LINHAS 3
#define COLUNAS 6

main () {
    
    float matriz[LINHAS][COLUNAS];
    int i, j;
    for (i = 0; i < LINHAS; i++) { 
        for (j = 0; j < COLUNAS; j++) { 
            printf ("matriz[%d][%d]: ", i, j);
            scanf ("%f", &matriz[i][j]);
        }
    }
    
    for (i = 0; i < LINHAS; i++) { 
        for (j = 0; j < COLUNAS; j++) { 
        	if (matriz[i][j]<0){
        		matriz[i][j]=1;
			}
            printf ("%f ", matriz[i][j]);
        }
        printf ("\n");
    }
    system ("PAUSE");
}
