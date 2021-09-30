/*

Função para cálculo de raiz quadrada --> sqrt()
Faz parte da biblioteca math.h


*/

#include <stdio.h>
# include <math.h> // Para poder chamar a raiz quadrada

void main(){
	
	float numero, raiz;
	printf("Informe um numero: \n");
	scanf("%f", &numero);
	raiz = sqrt(numero);
	printf("A raiz quadradada do numero eh: %.2f \n",raiz);
		
}
