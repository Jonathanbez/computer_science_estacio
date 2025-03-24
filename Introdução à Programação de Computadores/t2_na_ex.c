#include <stdio.h>

int main(){
    int idade;

    printf("DIgite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 60){
        printf("Você é idoso.");
    }
    else if(idade >= 18 && idade < 60){
        printf("Você é adulto.");
    }
    else if(idade >= 12 && idade < 18){
        printf("Você é adolecente.");
    }
    else{
        printf("Você é criança.");
    }
}