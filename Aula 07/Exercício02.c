/*

Faça um programa que receba as notas de três provas e calcule a média. Para o cálculo, escreva uma função.
O programa deve imprimir a média ao final.

*/

#include <stdio.h>

// Criação da Função

float calculaMedia (float n1, float n2, float n3){
	return((n1+n2+n3)/3);	
}

void main(){
	float n1, n2, n3, media = 0;
	printf("Digite as 3 notas do aluno: ");
	scanf("%f %f %f", &n1, &n2, &n3);
	media = calculaMedia(n1,n2,n3);
	printf("\nMedia final: %.2f",media);	
}
