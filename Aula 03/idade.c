#include <stdio.h> // inclusão da biblioteca padrão

int main()
{ //ponto de partida do meu programa

    int idade; //declaração de uma variável do tipo inteiro

    printf("Digite a sua idade: "); //interagindo com o usuário

    scanf("%d", &idade); // scanf faz a leitura dos dados inseridos no teclado e armazena a informação na variável idade.

    printf("Você tem %d anos", idade); //Exibe para o usuário uma mensagem trazendo o valor armazenado em idade.
}