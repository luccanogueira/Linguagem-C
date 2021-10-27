#include <stdio.h>
#include <stdlib.h>

main (){
	int e=10, f=20, g;
    int *o=&f, *x=&e;
    g = *o + (*o * *x)-*x;
    
	  printf ("Conteudo da variavel E via ponteiro = %d\n", *x);
	  printf ("Conteudo da variavel X = %d\n", *x);
	  printf ("Endereco de memoria de X = %p\n", &x);
	  printf ("Conteudo da variavel F via ponteiro = %d\n", *o);
	  printf ("Conteudo da variavel O = %d\n", *o);
	  printf ("Endereco de memoria de O = %p\n", &o);
	  printf ("Conteudo da variavel G = %d\n", g);
    
      system ("PAUSE");
}

//Na variável G armazene o seguinte conteúdo fazendo o acesso indireto às variáveis: f + (e * f) - e. 
//Em seguida, mostre: conteúdo de E via ponteiro, OK
//conteúdo de X, OK
//endereço de memória de X, OK
//endereço de memória de O, OK
//conteúdo de O,  OK
//conteúdo de F via ponteiro, OK
//conteúdo de G. 
