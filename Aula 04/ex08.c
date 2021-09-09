#include <stdio.h>

void main (void){
	
	int valor = 300, resultado = 0;
	float imposto = 5.5;
	imposto = (int) imposto * 0.5; // = 2.75
	resultado = imposto + valor;
	printf("O valor final eh: %d", resultado);	
	
}
