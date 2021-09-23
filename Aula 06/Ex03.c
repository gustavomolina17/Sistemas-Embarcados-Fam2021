/*

3-) Sabendo-se que a unidade lógica e aritmética calcula o produto através de somas sucessivas, crie um programa
que calcule o produto de dois números inteiros lidos. Suponha que os números lidos sejam positivos e que o multiplicando
seja menor do que o multiplicador.

*/ 

#include <stdio.h>

int main (void){
	
	int i, multiplicando, multiplicador, soma = 0;
	
	printf("Digite o multiplicando: ");
	scanf("%d", &multiplicando);
	printf("Digite o multiplicador: ");
	scanf("%d", &multiplicador);
	
	if (multiplicando < 0){
		
		printf("Multiplicando INVALIDO.");
	}
	else if (multiplicador < 0){
		printf("Multiplicador INVALIDO.");
	}
	else if (multiplicando > multiplicador){
		printf("Multiplicando deve SER MENOR que o multiplicador.");
	}
	else{
		for(i=1; i<=multiplicador; i++){
			soma+=multiplicando;
		}
		printf("Resultado: %d \n",soma);
	}	
}
