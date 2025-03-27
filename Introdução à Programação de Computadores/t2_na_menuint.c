#include <stdio.h>
#include <stdlib.h> //
#include <time.h> // 

int main(){

    int opcao, numeroSecreto, palpite;

    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha um opção\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        srand(time(0));
        numeroSecreto = rand() % 10;
        printf("Execução do Jogo\n");
        printf("Digite um numero de 0 a 9 : ");
        scanf("%d", &palpite);
        if (numeroSecreto == palpite){
            printf("Você acertou!\n");
            printf("Numero Secreto: %d\n", numeroSecreto);
        }
        else{
            printf("Você Errou!\n");
            printf("Numero Secreto: %d\n", numeroSecreto);
        }
        
        break;
    case 2:
        printf("As Regras sao.....\n");
        break;
    case 3:
        printf("Saindo do Jogo\n");
        break;
    default:
        printf("Opção Invalida\n");
        break;
    }
}