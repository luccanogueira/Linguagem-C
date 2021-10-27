#include<stdio.h>

main(){
	int opcao;
	printf("BEM VINDO A CALCULADORA\n\n");
	printf("1 - Somar\n");
	printf("2 - Subtrair\n");
	printf("3 - Dividir\n");
	printf("4 - Multiplicar\n");
	printf("5 - Sair\n\n");
	printf("Opcao: ");
	scanf("%d",&opcao);
	switch(opcao){
		case 1:	
			printf("Voce escolheu somar!!!\n");
			break;
		case 2:	
			printf("Voce escolheu subtrair!!!\n");			
			break;
		case 3:	
			printf("Voce escolheu dividir!!!\n");
			break;
		case 4: 
			printf("Voce escolheu multiplicar!!!\n");
			break;
		case 5:	
			printf("Voce escolheu sair!!!\n");
			break;
		default: 
			printf("Opcao invalida!!!\n");
	}

	
}
