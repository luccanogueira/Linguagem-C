#include<stdio.h>
main(){
	int idade;
	printf("Digite a idade: ");
	scanf("%d",&idade);
	
	if (idade>=18){
		printf("Pode tirar a CNH!");
	}else{
		printf("NAO pode tirar a CNH!");
	}
}

