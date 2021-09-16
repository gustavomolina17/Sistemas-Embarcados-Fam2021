/* 2-) O escritório de contabilidade Super Contábil está realizando o reajuste do salário dos funcionários de todos os
seus clientes. Para isso, estão utilizando como referência o reajuste acordado com os sindicatos de cada classe trabalhadora,
conforme apresentado na tabela a seguir. Para ajudar o escritório nesta tarefa, faça um programa em C que receba o salário
atual, o cargo conforme especificado na tabela a seguir e realize o cálculo do reajuste do salário. Ao término do cálculo
o programa deve imprimir o valor do reajuste e o novo salário do funcionário.

A figura está no Github. */


#include <stdio.h>

int main(void){
	
	int cargo;
	float salAtual, reajuste;
	
	printf("Digite o codigo do funcionario: ");
	scanf("%d", &cargo);
	
	printf("Digite o salario atual do funcionario: ");
	scanf ("%f", &salAtual);
	
	if (cargo == 1)
	reajuste = (salAtual * 7) / 100;
	
	else if (cargo == 2)
	reajuste = (salAtual * 9) / 100;
	
	else if (cargo == 3)
	reajuste = (salAtual * 5) / 100;
	
	else
	reajuste = (salAtual * 12) / 100;
	
	printf("O reajuste salarial eh de %.2f%%\n",reajuste);
	printf("O salario atualizado eh: %.2f", salAtual+reajuste);
	
}
