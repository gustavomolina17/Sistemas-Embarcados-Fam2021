/* 1-) Faça um programa em C que leia o nome e 4 notas de um aluno.
 O programa deve informar: se o aluno foi aprovado (média maior ou igual a 6,0),
está de recuperação (média entre 5,0 e 5,9) ou reprovado (média menor que 5,0). */

#include <stdio.h>

int main(void){
	
	// Declaração das variáveis
	
	float nota1, nota2, nota3, nota4, media;
	char nome;
	
	printf("Digite o nome do aluno: ");
	scanf("%s", &nome);
	
	// Inserção e Leitura das notas
	
	printf("Digite a 1a. nota: \n");
	scanf("%f",&nota1);
	printf("Digite a 2a. nota: \n");
	scanf("%f",&nota2);
	printf("Digite a 3a. nota: \n");
	scanf("%f",&nota3);
	printf("Digite a 4a nota: \n");
	scanf("%f",&nota4);
	
	// Cálculo da média
	
	// !!! IMPORTANTE : Usar o . em números decimais, ex: 7.5
	
	media = (nota1+nota2+nota3+nota4)/4;
	printf("\n Sua media final eh %.2f\n", media); // %.2f = 2 casas decimais
	
	if (media >= 6.0)
	printf("\n Aluno aprovado ;) ");
	else
		if((media >= 5.0) && (media<6.0)) // && = e, ou seja, estamos "quebrando" a condição em 2 partes e ambas precisam ser verdadeiras
		printf("\n Aluno em recuperacao =| ");
		else
		printf("\n Aluno reprovado");
	
}
