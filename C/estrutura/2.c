#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

struct Data {   
      int dia, mes, ano; 
};
struct Produtos{
	int codigoPro, quantPro;
	char nomePro[50];
	float valorPro;
	
};
struct Pedido {  
	int cod, valorTotal;  
    struct Data data;
    struct Produtos produtos;
}; 

main () {  
   
    struct Pedido pedido;

    printf ("Codigo da venda: ");   
    scanf ("%d", &pedido.cod);


    	printf ("Codigo do produto: ");  
    	scanf ("%d", &pedido.produtos.codigoPro);
    	printf ("Nome do produto: ");  
    	scanf ("%s", &pedido.produtos.nomePro);
    	printf ("Quantidade do produto: ");  
    	scanf ("%d", &pedido.produtos.quantPro);
    	printf ("valor do produto: ");  
    	scanf ("%f", &pedido.produtos.valorPro);

    
    printf ("\n\n*** Data da Venda *** \n");
    printf ("Dia: ");   
    scanf ("%d", &pedido.data.dia);  
    printf ("Mes: ");  
    scanf ("%d", &pedido.data.mes);
    printf ("Ano: ");
    scanf ("%d", &pedido.data.ano);

    printf ("\n\n*** Dados da Venda *** \n");
	printf ("Codigo da venda: %d\n", pedido.cod); 
	printf ("Data da Venda: %d/", pedido.data.dia);
    printf ("%d/", pedido.data.mes); 
    printf ("%d\n\n", pedido.data.ano);
	printf ("Valor da Venda: %f\n", pedido.valorTotal + (pedido.produtos.quantPro * pedido.produtos.valorPro));
	printf ("\n*** Produto *** \n"); 
	printf ("Codigo do produto: %d\n", pedido.produtos.codigoPro);
	printf ("Nome do produto: %s\n", pedido.produtos.nomePro);  
	printf ("Quantidade do produto: %d\n", pedido.produtos.quantPro);  
	printf ("Valor do produto: R$ %f\n", pedido.produtos.valorPro);
    
    system ("PAUSE");   
} 
