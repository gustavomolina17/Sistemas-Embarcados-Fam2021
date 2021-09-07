#include <stdio.h>

int main()
{ //ponto de partida do meu programa

    // Declaração das variavéis

    int dia, mes, ano;

    printf("Digite a data do seu aniversário (dd/mm/aa): "); //interagindo com o usuário

    scanf("%d%d%d", &dia, &mes, &ano); // indica que utilizaremos 3 variavéis do tipo inteiro.

    printf("Você nasceu em %d/%d/%d\n", dia, mes, ano);
}