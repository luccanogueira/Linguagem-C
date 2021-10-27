#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main() {
  
    char palavra [40];
    int i= 0, c=0;
    
    printf ("*** Digite uma palavra ***\n");
    gets (palavra);
    
    while (palavra [i] != '\0'){
           if (palavra [i] == 'c')
           {   
                 c++;         
           }
           i++;
    }
    printf ("\n A quantidade de letras C da palavra e = %d\n", c);
    system ("PAUSE");
}
