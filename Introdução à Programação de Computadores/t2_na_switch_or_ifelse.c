#include <stdio.h>

int main(){
    
    int dia;

    printf("Escolha intuitivamento valor para dia da semana\n");
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