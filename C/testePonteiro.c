#include <stdio.h>
#include <stdlib.h> 
 
 main(){
     int x = 15;
     int *px;
     px = &x;
     printf ("Endereco de memoria de x = %p\n", &x);
     printf ("Conteudo da variavel x por meio do ponteiro px = %d\n", *px);
     printf ("Conteudo da variavel px = %p\n", px);
     printf ("Endereco de memoria de px = %p\n", &px);
     system ("PAUSE");
 }   
