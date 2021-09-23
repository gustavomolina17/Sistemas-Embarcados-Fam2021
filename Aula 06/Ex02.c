/*

2-) Crie um programa em linguagem C que permita entrar com o nome, a nota da prova 1 e da prova 2 de 15 alunos.
Ao final, imprimir uma listagem, contendo: nome, nota da prova 1, nota da prova 2, e média das notas de cada aluno.
Ao final, imprimir a média geral da turma.

*/

#include <stdio.h>

int main(void){
	
	char nome[100];
	float p1, p2, media=0, mediafinal=0;
	int i;
	
	for(i=1; i<=15;i++){
		
		printf("Digite o nome do aluno: ");
		fflush(stdin);
		fgets(nome,100,stdin);
		printf("Digite a nota da 1a prova: ");
		scanf("%f", &p1);
		printf("Digite a nota da 2a prova: ");
		scanf("%f", &p2);
		printf("Nome: %s",nome);
		printf("Notas - P1: %.2f \t P2: %.2f \n",p1,p2);
		media = (p1+p2)/2;
		printf("Media de notas %.2f \n",media);
		mediafinal += media; // mediafinal = media + mediafinal			
	}
	
	mediafinal = mediafinal / (i-1);
	
	printf("Media de nota da turma: %.2f \n",mediafinal);
	
	return 0;
		
}
