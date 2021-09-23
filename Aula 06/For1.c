/*

O comando for é uma estrutura de repetição muito utilizada em C.

Usamos o for quando sabemos EXATAMENTE quantas vezes executaremos o nosso bloco de instruções.

Este laço utiliza uma variável para controlar a contagem do loop, bem como o seu incremento.


for (valor_inicial; condição_final; valor_ incremento)

{

Instruções;

}


*/



#include <stdio.h>

int main(void){
	
	
	int contador; // variável de controle do loop
	
	for (contador = 0;contador<=8;contador++){
		
		printf("%d", contador);
			
	}
	
	return 0;
	
}
