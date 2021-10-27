#include<stdio.h>

int mensagem (int numero) {
	printf("%d", numero);
	if (numero <=5){
		numero+=1;
		mensagem(numero);
	}
	
}

main (){
	mensagem (1);	
}
