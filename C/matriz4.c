#include <stdio.h>
#include <stdlib.h>
#define LINHAS 2
#define COLUNAS 2
main () {
    int matriz[LINHAS][COLUNAS];
    int i, j;
    for (i = 0; i < LINHAS; i++) { 
        for (j = 0; j < COLUNAS; j++) { 
            printf ("matriz[%d][%d]: ", i, j);
            scanf ("%d", &matriz[i][j]);
        }
    }
    for (i = 0; i < LINHAS; i++) { 
        for (j = 0; j < COLUNAS; j++) { 
        	if (matriz[i][j] % 5 == 0){
        		printf ("\n %d - Esse numero esta na linha: %d e na coluna: %d",matriz[i][j], i, j);
			}
        
        }
        printf ("\n");
    }

    system ("PAUSE");
}
