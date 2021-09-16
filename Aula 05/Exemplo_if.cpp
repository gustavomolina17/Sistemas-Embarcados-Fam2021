// Exemplo 01 : If / Else

// Faça um programa que peça ao usuário 2 números inteiros. O programa deve exibir a soma desses números. Caso a soma seja > 17
// exibir a mensagem : "A soma dos números é maior que 17". Caso contrário, exibir: " Soma menor que 17".

#include <stdio.h>

int main(void){
	
	int a, b, soma;
	printf("Digite um numero inteiro: ");
	scanf("%d", &a);
	
	printf("Digite outro numero inteiro: ");
	scanf("%d", &b);
	
	soma = a + b;
	printf("O valor da soma eh = %d\n",soma);
	
// Estrutura de Decisão

if (soma > 17){
	
	printf("A soma dos numeros eh maior que 17\n");		
}
	else {
	printf("A soma dos numeros eh menor que 17\n");	
	}
	
	return 0;	
}
