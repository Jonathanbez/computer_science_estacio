#include <stdio.h>

int main(){
    int maiorIdade = 18;
    int atualIdade;

    printf("Digite sua idade: \n");
    scanf("%d", &atualIdade);
    
    if(atualIdade >= maiorIdade){
        printf("Voce é maior de idade!");
    }
    else{
        printf("Voce ainda é de menor!");
    }
}
