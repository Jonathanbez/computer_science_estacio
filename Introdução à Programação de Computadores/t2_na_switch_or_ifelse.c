#include <stdio.h>

/* codigo com IF ELSE
int main(){
    
    int dia;

    printf("Escolha intuitivamente valor para dia da semana\n");
    scanf("%d", &dia);

    if(dia == 1){
        printf("1. Domingo\n");
    }
    else if(dia == 2){
        printf("2. Segunda-feira\n");
    }
    else if(dia == 3){
        printf("3. Terça-feira\n");
    }
    else if(dia == 4){
        printf("4. Quarta-feira\n");
    }
    else if(dia == 5){
        printf("5. Quinta-feira\n");
    }
    else if(dia == 6){
        printf("6. Sexta-feira\n");
    }
    else if(dia == 7){
        printf("7. Sábado\n");
    }
    else{
        printf("Opção invalida\n");
    }
}
*/

//codigo usando SWITCH

int main(){
    int dia;

    printf("Escolha intuitivamente o valor para dia da semana\n");
    scanf("%d", &dia);

    switch (dia)
    {
    case 1:
        printf("1. Domingo\n");
        break;
    case 2:
        printf("2. Segunda-feira\n");
        break;
    case 3:
        printf("3. Terça-feira\n");
        break;
    case 4:
        printf("4. Quarta-feira\n");
        break;
    case 5:
        printf("5. Quinta-feira\n");
        break;
    case 6:
        printf("6. Sexta-feira\n");
        break;
    case 7:
        printf("7. Sábado\n");
        break;
    default:
        printf("Opção invalida\n");
        break;
    }
}