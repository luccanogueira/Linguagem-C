#include<stdio.h>

main(){
	float media;
	int faltas;
	
	printf("Informe os dados...\n\n");
	printf("Nota media: ");
	scanf("%f",&media);
	printf("Quantidade de faltas: ");
	scanf("%d",&faltas);
	
	if (media>=6 && faltas<= 18){
		printf("Aluno aprovado!");
	}else{
		printf("Aluno reprovado!");
	}

}
