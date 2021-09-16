/*5-) A biblioteca de uma Universidade deseja fazer um programa que leia o nome do livro que será emprestado,
o tipo de usuário (professor ou aluno) e possa imprimir um recibo conforme mostrado a seguir.
Considerar que o professor tem dez dias para devolver o livro e o aluno só três dias.

• Nome do livro:

• Tipo de usuário:

• Total de dias:

*/

#include <stdio.h>

void main(){
	
	int tipo;
	char livro [100];
	
	printf("Digite o nome do livro: ");
	scanf("%s", &livro);
	
	printf("Digite o tipo de usuario <1-Professor / 2 - Aluno>: ");
	scanf("%d", &tipo);
	
	printf("Nome do livro: %s\n",livro);
	
	if (tipo == 1){
		printf("Tipo de usuario: Professor\n Total de dias: 10");
	}
	else{
		printf("Tipo de usuario: Aluno\n Total de dias: 3");
	}	
}
