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
    
    int soma = 0;
    int media = LINHAS * COLUNAS;
    for (i = 0; i < LINHAS; i++) { 
        for (j = 0; j < COLUNAS; j++) { 
            soma += matriz[i][j];
            printf ("%d ", matriz[i][j]);
        }
        printf ("\n");
    }
    printf ("\nMedia = %d\n", soma/media);
    system ("PAUSE");
}
