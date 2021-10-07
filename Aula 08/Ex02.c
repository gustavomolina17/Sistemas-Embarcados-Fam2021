/*
Escreva uma função que calcule e retorne a distância entre dois pontos (x1, y1) e (x2, y2).
Todos os números e valores de retorno devem ser do tipo float.
*/

#include <stdio.h>
#include <math.h>

float calculaDistancia(float Px1, float Px2, float Py1, float Py2){
	
	float a, b, c, d;
	
	a = Px1 - Px2 ; // Cálculo da distância entre os pontos X1 e X2
	b = Py1 - Py2 ; // Cálculo da distância entre os pontos Y1 e Y2
	c = a*a + b*b;  // Estamos fazendo a soma dos quadrados
	d = sqrt(c);   // Acha a raiz da equação
	return d;     // retorna o resultado
		
}


int main(){
	
	float x1, x2, y1, y2, res;
	printf("Digite as coordenadas X e Y do ponto 1:\n");
	scanf("%f %f", &x1, &y1);
	printf("Digite as coordenadas X e Y do ponto 2:\n");
	scanf("%f %f", &x2, &y2);
	
	res = calculaDistancia(x1,x2,y1,y2);
	printf("A distancia entre os pontos eh: %.2f\n",res);
	
	return 0;
		
}
