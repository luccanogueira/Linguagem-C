#include<stdio.h>
#include<stdlib.h>

main(){
	/*

	- Conjunto de variáveis do mesmo tipo alocadas em posições sequenciais na 
	memoria.
	- Estrutura de dados estática, ou seja, uma vez criado não é possível 
	modificar.
	
	char nome[20] = "Carlos"; //String
	char sexo = 'm';     //Caractere
	int idade = 14;     //Inteiro
	float peso = 50.7;    //real
	*/
	
	/*
	String - Conjunto de caracteres
	Exemplo:
	Senhas - uni%9MM@
	
	Vetor - Conjunto de variáveis do mesmo tipo
	Se o tipo do vetor for caractere, então temos um 
	CONJUNTO DE CARACTERES
	
	char nome[20]; Conjunto de variáveis do tipo caractere
	*/  
		
	char nome[20]; //String (Vetor de char)
	char sexo;     //Caractere
	int idade;     //Inteiro
	float peso;    //real
	
	printf("Digite o nome: ");
	fflush(stdin);//limpar a buffer do teclado
	gets(nome);//Serve apenas para vetor de char, ou seja, string
	
	printf("Digite o sexo: ");
	fflush(stdin);//limpar a buffer do teclado
	sexo = getchar();
	
	printf("Digite a idade: ");
	scanf("%d",&idade);
	
	printf("Digite o peso: ");
	scanf("%f",&peso);
		
	
	printf("\n\nDADOS CADASTRADOS\n\n");
 	
	printf("Nome  = %s\n", nome);
	printf("Sexo  = %c\n", sexo);
	printf("Idade = %d\n", idade);
	printf("Peso  = %.2f\n", peso);
	
	system("pause");
	
}



