#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main () {
   
    char palavra [15];
    int i, novo;
    
    printf ("*** Digite uma palavra ou frase ***\n");
    gets (palavra);
    novo = strlen (palavra); 
    for (i = 0; i<novo; i++){
          if (palavra [i] == ' ' )
                palavra [i] = '_';
    }
    puts (palavra);
    system ("PAUSE");
}
