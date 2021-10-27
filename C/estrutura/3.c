#include <stdio.h>
typedef struct 
{
    int Dia;
    int Mes;
    int Ano;
} DataNasc;

typedef struct 
{
    char Logradouro[50];
    int NumEnd;
    char Bairro[40];
    char Cidade[50];
    char CEP[8];
} Endereco;


int main()
{
    int id;
    char nome[70], CPF[11];
    printf("Codigo:");
	scanf("%d", &id);
	printf("Nome:");
	scanf("%s", &nome);
    printf("CPF:");
	scanf("%s", &CPF);
	DataNasc dt;
	printf("\n-Data de Nascimento-\n");
	printf("Dia:");
	scanf("%d", &dt.Dia);
	printf("Mes:");
	scanf("%d", &dt.Mes);
	printf("Ano:");
	scanf("%d", &dt.Ano);
	Endereco end;
	printf("\n-Endereco-\n");
	printf("Logradouro:");
	scanf("%s", &end.Logradouro);
	printf("Numero:");
	scanf("%d", &end.NumEnd);
	printf("Bairro:");
	scanf("%s", &end.Bairro);
	printf("Cidade:");
	scanf("%s", &end.Cidade);
	printf("CEP:");
	scanf("%s", &end.CEP);
	
	printf("\n\n--Cadastro Concluido--\n");
	printf("\n--Visualizacao de Cadastro--\n");
    printf("Codigo:%d\n",id);
    printf("Nome:%s\n",nome);
    printf("CPF:%s\n",CPF);
    printf("Dia do Nascimento:%d\n",dt.Dia);
    printf("Mes do Nascimento:%d\n",dt.Mes);
    printf("Ano do Nascimento:%d\n",dt.Ano);
    printf("Logradouro:%s\n",end.Logradouro);
    printf("Numero:%s\n",end.NumEnd);
    printf("Bairro:%s\n",end.Bairro);
    printf("Cidade:%s\n",end.Cidade);
    printf("CEP:%s",end.CEP);

    return 0;
}
