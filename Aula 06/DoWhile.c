/*

Esta estrutura de repetição, garante que o bloco de instruções seja executado no mínimo uma vez, já que 
a condição que controla o laço é apenas testada no final. 


*/


#include <stdio.h>

int main (void){
	
	float nota1 = 0, nota2 = 0, media = 0;
	int resp; // variável de controle
	
	do {  // Iremos calcular no mínimo a média de 1 aluno
		
		printf("Digite a 1a nota: ");
		scanf("%f", &nota1);
		printf("Digite a 2a nota: ");
		scanf("%f", &nota2);
		
		media = (nota1+nota2)/2;
		printf("Media do aluno = %.2f\n", media);
		
		printf("Digite 1 para continuar ou 2 para sair\n");
		scanf("%d", &resp);
			
	} while (resp == 1);
	
	return 0;	
}
