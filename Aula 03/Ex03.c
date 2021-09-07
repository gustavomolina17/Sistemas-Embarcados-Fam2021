/* Em C temos os seguintes tipos básicos de variaveis:
• char: Guarda um caracter;
• int: Guarda um numero inteiro;
• float: Guarda um numero real com certa precisao;
• double: Guarda um numero real com precisao maior que float;
• void: Tipo vazio.

Temos algumas variacoes destes tipos, que sao:
• unsigned char: caracter sem sinal;
• long int: numero inteiro, com dominio estendido;
• unsigned int: numero inteiro positivo;
• unsigned long int: numero inteiro positivo com dominio estendido.
• short int: inteiro com dominio reduzido.
• unsigned short int: inteiro positivo com dominio reduzido. */



/* O nome das variaveis pode ser qualque palavra que nao seja uma palavra chave da
linguagem.
• E possivel conter um nuumero na palavra: Casa1
• Nao e aceitavel iniciar com um numero: 1casa (errado)
• E possivel utilizar subscrito: Casa_da_ana
• Nao pode-se utilizar:
{ ( + - * / ; . , ?

*/


#include <stdio.h>

int main(void){
int evento;
char corrida;
float tempo;
evento = 5;
corrida = 'C';
tempo = 27.25;
printf("O tempo vitorioso na eliminatoria %c",corrida); // %c -> Para variável do tipo caracter.
printf("\nda competicao %d foi %f.", evento, tempo); // %d -> Para variável do tipo inteiro | %f -> para float
return 1;
}





