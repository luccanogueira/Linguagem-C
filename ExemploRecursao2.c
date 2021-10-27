#include<stdio.h>

int mensagem(int numero){
	printf("%d",numero);
	if (numero<=3){	
		numero+=1;
		mensagem(numero);
	}
	printf("%d",numero);
}

main(){
	mensagem(2);
	
}
