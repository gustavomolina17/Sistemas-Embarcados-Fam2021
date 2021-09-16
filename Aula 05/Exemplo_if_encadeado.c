/* Exemplo 02 : If / Else encadeado

Faça um programa que compare 2 números inteiros. O programa deve dizer: se os números são iguais, ou dizer qual dos dois 
números é maior.

*/

#include <stdio.h>

int main (void){
	
	int n1, n2;
	printf("Digite n1: ");
	scanf("%d", &n1);
	
	printf("Digite n2: ");
	scanf("%d", &n2);
	
	// Usamos um If externo para verificar logo de cara se os números são iguais
	
	// Quando o if tiver APENAS 1 INSTRUÇÃO, NÃO É necessário a utilizaçõa das chaves.
	
	if (n1 == n2)
	
		printf("Os numeros digitados sao iguais");	
		
	else 	
		
		if (n1>n2)
		printf("O maior valor eh = %d\n",n1);
		else
		printf("O maior valor eh = %d\n",n2);
		printf("\n");
		
		return 0;
			
	}
	
	
	
	
	
	

