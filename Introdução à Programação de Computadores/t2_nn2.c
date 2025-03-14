#include <stdio.h>

int main(){
    float temperatura, umidade;
    unsigned int estoque;
    unsigned int estoqueMinimo = 1000;

    printf("Digite a temperetura: \n");
    scanf("%f", &temperatura);
    printf("Digite a umidade: \n");
    scanf("%f", &umidade);
    printf("Digite o estoque: \n");
    scanf("%u", &estoque);

    if(temperatura > 30){
        printf("A temperatura esta alta.\n"); 
    }else{
        printf("Temperatura dentro dos parametros.\n");
    }

    if(umidade > 50){
        printf("Umidade elevada.\n");
    }else{
        printf("Umidade dentro dos parametros.\n");
    }
    if(estoque < estoqueMinimo){
        printf("Estoque abaixo do limite.\n");
    }else{
        printf("Estoque dentro dos parametros.\n");
    }
}
k