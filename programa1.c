#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	float lado, area;
	printf("Digite o valor do lado do quadrado: ");
	scanf("%f",&lado);
	
	area = lado * lado;
	
	printf("O valor da �rea � %.2f cm�",area);
	
	system("pause>>null");		
}
