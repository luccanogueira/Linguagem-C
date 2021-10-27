#include <stdio.h>
#include <stdlib.h>
 
int calculo (int p, int q, int r) 
{
		int resu;
        resu = p + (q * r);
        return resu;
}
int fatorial (int x){
	int fat;
	for(fat = 1; x > 1; x = x - 1)
	fat = fat * x;
	return fat;
}
 
main ()   
{
        int p=7, q=10 , r=15, x=5;
        int tela;
        tela = calculo (p, q, r); 
        printf ("\n O resultado do calculo foi = %d", tela); 
        
        tela = fatorial (x); 
        printf ("\n O fatorial de X e = %d", tela); 
}
