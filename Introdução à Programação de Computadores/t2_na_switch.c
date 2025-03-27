#include <stdio.h>

int main(){

    int opcao;

    printf("Escolha uma opção:\n");
    printf("1. Verificar saldo\n");
    printf("2. Fazer deposito\n");
    printf("3. Fazer saque\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Saldo: R$ 90.000,00\n");
        break;
    case 2:
        printf("Despositado: R$ 15.000,00\n");
        break;
    case 3:
        printf("Saque: R$ 2000,00\n");
        break;
    default:
        printf("Opção invalida\n");
        break;
    }
}