#include <stdio.h>

int main(){
    int idade, idade2, maior;

    printf("Irmão 1 - Qual idade? \n");
    scanf("%d", &idade);
    printf("Irmão 2 - Qual idade? \n");
    scanf("%d", &idade2);

    idade == idade2 ? printf("Mesma idade!\n") : (idade > idade2 ? (maior = idade) && printf("Irmão 1 é mais velhor %d\n", maior) :
    (maior = idade2) && printf("Irmão 2 é mais velho %d\n", maior));

    return(0);
}