#include<stdio.h>
#include<string.h>

main(){
	
	char user[20];
	char senha[20];
	
	printf("SISTEMA DE LOGIN!!\n\n");
	printf("Usuario.: ");
	fflush(stdin); //limpar a buffer do teclado
	gets(user);
	printf("Senha.:");
	fflush(stdin); // este comando sempre vem antes do gets
	gets(senha);
	
	if (strcmp(user,"aluno")==0 && strcmp(senha,"uni9")==0){
		printf("Acesso autorizado! Bem vindo!");
	}else{
		printf("Dados informados incorretos. Acesso negado.");
	}
	system("pause");
	
}
