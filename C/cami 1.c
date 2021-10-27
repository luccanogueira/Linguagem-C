#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
main()
{  
    char palavra [20], palavra_invertida [20];
    int i, j=0, tam;
    printf ("Digite a string: ");
    gets (palavra), (palavra_invertida);
    tam = strlen (palavra);
    for (i = tam-1; i>=0; i--){
          palavra_invertida [j] = palavra [i]; 
          j++;
    }
    palavra_invertida [j] = '\0';
    if  ( strcmp (palavra, palavra_invertida) == 0)
          printf ("A palavra É um palindromo!\n");
    else printf ("A palavra NÃO É palindromo!\n"); 
}
