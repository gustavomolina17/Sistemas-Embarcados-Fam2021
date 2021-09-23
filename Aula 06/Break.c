/*

Em Linguagem C o break tem 2 usos principais:

1-) Forçar a saída de um switch...case;
2-) Forçar a saída de uma laço de repetição;

*/


int main (void){
	
	int valores [10]; // vetor com capacidade para armazenas 10 elementos
	int i;
	
	// Entrada de Dados
	// A principio o loop será feito para repetir 10 vezes
	
	for (i = 0; i < 10; i++){
		
		printf("Entre com o valor desejado: ",i);
		scanf("%d", &valores[i]);		
	
	if (i==3){ // forçando a saida interrompendo o loop

	  printf("Saida do break interrompendo o comando for\n");
	  break;	
		
	}
	
}
	
	return 0;
		
}
