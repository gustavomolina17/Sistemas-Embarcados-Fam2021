/*

Assim como a raiz quadrada a potência também faz parte da biblioteca math.h

potencia --> pow ()

A função pow TEM SEMPRE 2 argumentos, o 1º argumento é o número e o 2º argumento é o EXPOENTE

*/

#include <stdio.h>
#include <math.h>

void main(){
	
	float base, expoente, potencia;
	printf("Informe a base: \n");
	scanf("%f",&base);
	printf("Informe o expoente: \n");
	scanf("%f",&expoente);
	potencia = pow(base,expoente);
	printf("A potencia do numero eh: %.1f \n",potencia);
	
	
	
	
	
	
	
}
