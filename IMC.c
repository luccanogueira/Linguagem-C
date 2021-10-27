#include<stdio.h>
#include<math.h> // para usar o camndo pow
main(){
	
	printf("PROGRAMA DE IMC");
	float peso, altura, imc;
	printf("Digite o seu peso.: ");
	scanf("%f", &peso);
	printf("Digite a sua altura.: ");
	scanf("%f", &altura);
	imc = (peso / pow(altura,2));
	
	if (imc<18,5){
		printf("Voce esta abaixo do peso, seu IMC e de %.2f", imc);
	}else if(imc>18,5 || imc<24,9){
		printf("Voce esta no peso normal, seu IMC e de %f", imc);
	}else if(imc>25 || imc<29,9){
		printf("Voce esta com sobrepeso, seu IMC e de %f", imc);
	}else if (imc>30 || imc<34,9){
		printf("Voce esta com obesidade grau 1, seu IMC e de %f", imc);
	}else if (imc>35 || imc<39,9){
		printf("Voce está com obesidade grau 2, seu IMC e de %f", imc);
	}else{
		printf("Voce esta com obesidade grau 3, seu IMC e de %f", imc);
	}
}
