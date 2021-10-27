#include<stdio.h>
void mensagem(int i){	
	if (i<=7){	
		printf("%d",i);	
		mensagem(i+2);
	}	
}

main(){
	mensagem(1);
}
