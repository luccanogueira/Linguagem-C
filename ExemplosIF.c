#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>

main(){	
	int opcao;
	do{ 
	 	system("cls");
		printf("ESCOLHA UM DOS ALGORITMOS ABAIXO\n\n");
		printf("1) Validacao de usuario e senha\n");
		printf("2) Determinar o estatus do IMC\n");
		printf("3) Informar se um numero e par ou impar\n");
		printf("4) Determinar o triangulo - (Equilatero,Isoscele,Escaleno)\n");
		printf("5) Determinar se o nome comeca com vogal ou consoante\n");
		printf("6) SAIR\n\n");
		printf("OPCAO: ");
		scanf("%d",&opcao);
		
		switch(opcao){
			case 1:	{
				char usuario[20];
				char senha[20];
				printf("SISTEMA DE LOGIN\n\n");
				printf("Usuario.:");
				fflush(stdin);//limpar a buffer do teclado
				gets(usuario);
				printf("Senha...:");
				fflush(stdin);//limpar a buffer do teclado
				gets(senha);
				if (strcmp(usuario,"aluno")==0 && strcmp(senha,"uninove")==0){
					printf("Acesso autorizado!");
				}else{
					printf("Acesso negado!");
				}
				
				break;
			}	
			case 2:	{
				printf("PROGRAMA STATUS IMC\n\n");
				float peso, altura, imc;
				printf("Digite o PESO...:");
				scanf("%f",&peso);
				printf("Digite o ALTURA.:");
				scanf("%f",&altura);
				imc = peso / pow(altura, 2);
				printf("Seu IMC e %.2f, STATUS: ",imc);
				if (imc<17){
					printf("Muito abaixo do peso\n");
				}else if (imc>=17 && imc<18.50){
					printf("Abaixo do peso\n");
				}else if (imc>=18.50 && imc<25){	
					printf("Peso normal\n");
				}else if (imc>=25 && imc<30){	
					printf("Acima do peso\n");			
				}else if (imc>=30 && imc<35){	
					printf("Obesidade I\n");			
				}else if (imc>=35 && imc<40){			
					printf("Obesidade II (severa)\n");			
				}else if (imc>=40){
					printf("Obesidade III (mórbida)\n");
				}
							
				break;
			}
			case 3:{
				int num;
				printf("PROGRAMA PAR OU IMPAR\n\n");
				printf("Digite um numero: ");
				scanf("%d",&num);
				if (num%2==0){
					printf("O numero %d e par",num);
				}else{
					printf("O numero %d e impar",num);
				}
				break;
			}
			case 4:{
				int lado1,lado2,lado3;
				printf("TIPO DE TRIANGULO\n\n");
				printf("Digite o lado1: ");
				scanf("%d",&lado1);
				printf("Digite o lado2: ");
				scanf("%d",&lado2);
				printf("Digite o lado3: ");
				scanf("%d",&lado3);
				
				if (lado1==lado2 && lado2==lado3){
					printf("Resultado: Triangulo equilatero!");
				}else if (lado1==lado2 || lado1==lado3 || lado2==lado3){
					printf("Resultado: Triangulo isoscele!");
				}else if (lado1!=lado2 && lado1!=lado3 && lado2!=lado3){
					printf("Resultado: Triangulo escaleno");
				}	
				
				break;
			}
			case 5:{
				char nome[20];
				printf("INICIA COM VOGAL OU CONSOANTE\n\n");
				printf("Digite o nome: ");
				fflush(stdin);
				gets(nome);			
				char l = nome[0];			
				printf("A primeira letra e \"%c\", uma ",l);
				
				switch(tolower(l)){//biblioteca ctype
					case 'a':
					case 'e':	
					case 'i':	
					case 'o':	
					case 'u':
						printf("vogal!");
						break;
					default:
						printf("consoante!");
				}
				break;
			}
			case 6:
				printf("Saindo....\n");
				break;
			default:
				printf("Opcao invalida!");
		} 
		printf("\n\n");
		system("pause");
	}while(opcao!=6);
			
}
