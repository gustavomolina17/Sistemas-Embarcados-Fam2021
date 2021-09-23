/*

A utilização do continue dentro de um laço de repetição faz com que a instrução atual
(ou bloco de instruções atual) SEJA INTERROMPIDA e PASSA PARA A PRÓXIMA iteração do laço.

No continue a condição do laço continua sendo testada, bem como o incremento continua
sendo executado 

*/

#include <stdio.h>

int main(void){
	
	int i;
	
	for(i=1; i<=10; i++)
	{
		if(i%2 == 0) // se i for par não faz nada e pula para a próxima iteração
		{
			continue;
		}
		else // imprime os números impares
		{
			printf("Numero: %d \n",i);
		}
		
		printf("Numero impar!!\n\n");		
	}
	printf("Final do Programa!\n\n");
	return 0;	
}
