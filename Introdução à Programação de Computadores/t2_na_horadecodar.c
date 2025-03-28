#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int escolhaJogador, escolhaComputador;
    srand(time(0));

    printf("**** JOGO JOKENPÔ ****\n\n");
    printf("Escolha a jogada\n");
    printf("1. PEDRA\n");
    printf("2. PAPEL\n");
    printf("3. TESOURA\n");
    scanf("%d", &escolhaJogador);

    escolhaComputador = rand() % 3 + 1;

    switch (escolhaJogador)
    {
    case 1:
        printf("Jogador: PEDRA\n");
        break;
    case 2:
        printf("Jogador: PAPEL\n");
        break;
    case 3:
        printf("Jogador: TESOURA\n");
        break;
    default:
        printf("Opção Invalida!\n");
        break;
    }
    switch (escolhaComputador)
    {
    case 1:
        printf("Computador: PEDRA\n");
        break;
    case 2:
        printf("Computador: PAPEL\n");
        break;
    case 3:
        printf("Computador: TESOURA\n");
        break;
    }

    if (escolhaComputador == escolhaJogador){
        printf("*** Jogo Empatou! ***\n");
    }
    else if ((escolhaJogador == 1 && escolhaComputador == 3) ||
            (escolhaJogador == 2 && escolhaComputador == 1) ||
            (escolhaJogador == 3 && escolhaComputador == 2))
    {
        printf("*** Jogador Venceu! ***\n");
    }
    else if ((escolhaComputador == 1 && escolhaJogador == 3) ||
            (escolhaComputador == 2 && escolhaJogador == 1) ||
            (escolhaComputador == 3 && escolhaJogador == 2))
    {
        printf("*** Computador Venceu! ***\n");
    }
    else
    {
        printf("*** Você Perdeu! ***\n");
    }
}