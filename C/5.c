#include <stdio.h>
#include <stdlib.h>
int a, b;
void leitura (){
	printf("\nDigite o valor de A:",a);
	scanf("%d", &a);
		
	printf("\nDigite o valor de B:",b);
	scanf("%d", &b);
}
void verifica (){
	if (a % b == 0)
		printf("e divisivel\n");
    else 
        printf("nao e divisivel\n");
}
int quadrado (int cont){
	cont = b*b;
	printf("O quadrado de B e:%d", cont);
}
main (){
	int cont;
	
	leitura ();
	verifica ();
	quadrado (cont);
}
