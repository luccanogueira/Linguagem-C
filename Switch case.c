#include<stdio.h>

main(){
	int opcao, n1, n2;
	printf("BEM VINDO A CALCULADORA\n\n");
	printf("Digite 1 para - Somar.\n");
	printf("Digite 2 para - Subtrair.\n");
	printf("Digite 3 para - Multiplicar.\n");
	printf("Digite 4 para - Dividir.\n");
	printf("Digite 5 para - Sair.\n");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1:
			printf("Voce escolheu a opção Soma.\n");
			printf("Digite um numero: ");
			scanf("%d", &n1);
			printf("Digite outro numero: ");
			scanf("%d", &n2);
			
			printf("O resultado da soma foi: %d", n1+n2);
			break;
		case 2:
			printf("Voce escolheu a opção Subtrair.\n");
			printf("Digite um numero: ");
			scanf("%d", &n1);
			printf("Digite outro numero: ");
			scanf("%d", &n2);
			
			printf("O resultado da subitração foi: %d", n1-n2);
			break;
		case 3:
			printf("Voce escolheu a opção Multiplicar.\n");
			printf("Digite um numero: ");
			scanf("%d", &n1);
			printf("Digite outro numero: ");
			scanf("%d", &n2);
			
			printf("O resultado da Multiplicacao foi: %d", n1*n2);
			break;
		case 4:
			printf("Voce escolheu a opção Dividir.\n");
			printf("Digite um numero: ");
			scanf("%d", &n1);
			printf("Digite outro numero: ");
			scanf("%d", &n2);
			
			printf("O resultado da Divisao foi: %d\n", n1/n2);
			break;
		case 5:
			system("pause");
			break;
		default:
			printf("opção invalida");
	}
}
