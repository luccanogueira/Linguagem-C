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

//Na vari�vel G armazene o seguinte conte�do fazendo o acesso indireto �s vari�veis: f + (e * f) - e. 
//Em seguida, mostre: conte�do de E via ponteiro, OK
//conte�do de X, OK
//endere�o de mem�ria de X, OK
//endere�o de mem�ria de O, OK
//conte�do de O,  OK
//conte�do de F via ponteiro, OK
//conte�do de G. 
