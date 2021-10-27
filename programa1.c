#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	float lado, area;
	printf("Digite o valor do lado do quadrado: ");
	scanf("%f",&lado);
	
	area = lado * lado;
	
	printf("O valor da área é %.2f cm²",area);
	
	system("pause>>null");		
}
