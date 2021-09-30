/*

Exemplo: Faça um programa em C que calcule a área de um retângulo (Base X Altura ) utilizando função. Após o cálculo o 
programa deve  imprimir o valor da área.

*/

#include <stdio.h>

// Fazendo a modelagem da nossa função

float areaRetangulo (float base, float altura){
	float area = base*altura;
	return area;
}

void main(){
	
	float vbase, valtura, varea;
	printf("Informe o valor da base do retangulo: \n");
	scanf("%f", &vbase);
	printf("Informe o valor da altura do retangulo: \n");
	scanf("%f", &valtura);
	varea = areaRetangulo(vbase,valtura);
	printf("A area do retangulo eh: %.2f m \n",varea);
		
}

