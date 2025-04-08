#include <stdio.h>
#include <time.h>

int main(){
    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    // Gerar numero aleatorio
    srand(time(0));
    numeroComputador = rand() % 100 + 1; // numero entre 1 e 100

    // inicio do jogo
    printf("*** MAIOR, MENOR OU IGUAL ***\n");
    printf("Escolha o tipo de comparação:\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Escolha a comparação: \n");
    scanf("%c", &tipoComparacao);

    printf("Digite seu numero (1 a 100): \n");
    scanf("%d", &numeroJogador);

    // Exibir numero do computador
    printf("Número do Computador: %d\n", numeroComputador);

    switch (tipoComparacao)
    {
    case 'M':
    case 'm':
        resultado = numeroJogador > numeroComputador ? printf("Jogador venceu!\n") : printf("Computador Venceu!\n");
        break;
    case 'N':
    case 'n':
        resultado = numeroJogador < numeroComputador ? printf("Computador Venceu!\n") : printf("Jogador venceu!\n");
        break;
    case 'I':
    case 'i':
        resultado = numeroJogador == numeroComputador ? printf("Jogador venceu!\n") : printf("Computador Venceu!\n");
        break;
    default:
        printf("Opção invalida!\n");
        break;
    }

}