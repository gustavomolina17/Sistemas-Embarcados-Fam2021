#include <stdio.h>

/* Exemplo da variável String */

// \n -> Serve para indicar uma nova linha

int main()
{
char nome[20]; // Tamanho da variável
printf("Digite seu nome: ");
gets (nome); // Função para leitura de String (Char)
printf("\n\nSeu nome eh: %s", nome);
return 0;
}
