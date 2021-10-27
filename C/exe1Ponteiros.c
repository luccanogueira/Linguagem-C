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

//mostre as seguintes variáveis: s, t, u, OK
//endereço de memória de p, 
//endereço de memória de s, 
//conteúdo da variável p via ponteiro 
//conteúdo da variável q via ponteiro. 

//OBS: as variáveis devem ser do tipo int. *

