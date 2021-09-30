/*

Faça um programa em C que leia três números inteiros e, para cada um, imprimir o dobro.
O cálculo deverá ser realizado por uma função e o resultado impresso ao final do programa.

*/

# include <stdio.h>

// Criação da Função

int dobraNumero(int n1, int n2, int n3){
	printf("\nDobro do numero1: %d", n1*2);
	printf("\nDobro do numero2: %d", n2*2);
	printf("\nDobro do numero3: %d", n3*2);
		
}

void main(){
	
	int n1, n2, n3;
	printf("\nDigite 3 numeros inteiros: ");
	scanf("%d %d %d", &n1, &n2,&n3);
	dobraNumero(n1,n2,n3);	
}
