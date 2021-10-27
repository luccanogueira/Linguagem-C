#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

struct Data {   
      int dia, mes, ano; 
};
 
struct Funcionario {  
	int matricula;
    char nome[70];  
    char cargo[40];  
    float salario;
    struct Data data;
}; 

main () {  
   
    struct Funcionario funcionario;
 	
 	printf ("Matricula: ");   
    scanf ("%d", &funcionario.matricula);
    printf ("Nome: ");  
    scanf ("%s", &funcionario.nome);   
    printf ("Cargo: ");  
    scanf ("%s", &funcionario.cargo);     
    printf ("Salario: ");
    scanf ("%f", &funcionario.salario);

	printf ("\n\n*** Data de Matricula *** \n");
    printf ("Dia: ");   
    scanf ("%d", &funcionario.data.dia);  
    printf ("Mes: ");  
    scanf ("%d", &funcionario.data.mes);
    printf ("Ano: ");
    scanf ("%d", &funcionario.data.ano); 

    printf ("\n\n*** Dados do Funcionario *** \n");
	printf ("Numero da matricula: %d\n", funcionario.matricula);   
    printf ("Nome: %s\n", funcionario.nome);    
    printf ("Nome: %s\n", funcionario.cargo);
    printf ("Salario do funcionario: %f\n", funcionario.salario);
    printf ("Data de Matricula: %d/", funcionario.data.dia);
    printf ("%d/", funcionario.data.mes); 
    printf ("%d\n\n", funcionario.data.ano);  
    system ("PAUSE");   
} 
