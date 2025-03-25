#include <stdio.h>

int main(){

    int idade;
    float renda;

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua renda mensal: \n");
    scanf("%f", &renda);

    if (renda <= 2000){
        if (idade >= 18 || idade <= 60){
            printf("Você está qualificado para o desconto especial.\n");
        }
        else{
            printf("Você não está qualificado para o desconto devido a sua renda\n");
        }
    } else{
        printf("Você não atende aos criterios.\n");

    }
}