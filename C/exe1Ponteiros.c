#include <stdio.h>
#include <stdlib.h>

main (){
	int p =50, q=20, r;
    int *s= &q, *t= &p, *u= &r;
      *u = (*s + *t) * *t;

      printf ("Conteudo da variavel s = %d\n", *s);
      printf ("Conteudo da variavel t = %d\n", *t);
      printf ("Conteudo da variavel u = %d\n", *u);
      printf ("Endereco de memoria de p = %p\n", &p);
      printf ("Endereco de memoria de s = %p\n", &s);
      printf ("Conteudo da variavel p via ponteiro = %d\n", *t);
      printf ("Conteudo da variavel q via ponteiro = %d\n", *s);
      system ("PAUSE");
}

//mostre as seguintes vari�veis: s, t, u, OK
//endere�o de mem�ria de p, 
//endere�o de mem�ria de s, 
//conte�do da vari�vel p via ponteiro 
//conte�do da vari�vel q via ponteiro. 

//OBS: as vari�veis devem ser do tipo int. *

