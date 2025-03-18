#include <stdio.h>

int main() {

    // Variaveis
    char estado[25];
    char codigoCarta[5];
    char nomeCidade[25];
    int populacao;
    float area_cidade;
    float PIB;
    int pontos_turistico;
    float densidade = populacao / area_cidade;
    float PIBper = PIB / populacao;

    char estado2[25];
    char codigoCarta2[5];
    char nomeCidade2[25];
    int populacao2;
    float area_cidade2;
    float PIB2;
    int pontos_turistico2;
    float densidade2 = populacao2 / area_cidade2;
    float PIBper2 = PIB / populacao2

    printf("SUPER TRUNFO!\n");

    // 1° CARTA
    printf("CADASTRE A 1° CARTA");    
    printf("Digite o nome do Estado: \n");
    fgets(estado, 50, stdin);
      
    printf("Digite codigo da carta: ");
    scanf("%s", codigoCarta);

    printf("Digite nome da cidade: ");
    fgets(nomeCidade, 50, stdin);

    printf("Digite quantidade populacional: ");
    scanf("%d", &populacao);

    printf("Digite Área da Cidade: ");
    scanf("%f", &area_cidade);

    printf("Digite o PIB: ");
    scanf("%f", &PIB);

    printf("Digite Pontos Turisticos: ");
    scanf("%d", &pontos_turistico);


    // 2° CARTA
    printf("CADASTRE A 2° CARTA");
    
    printf("Digite o nome do Estado: \n");
    fgets(estado2, 25, stdin);

    printf("Digite codigo da carta: ");
    scanf("%s", codigoCarta2);

    printf("Digite nome da cidade: ");
    fgets(nomeCidade2, 25, stdin);

    printf("Digite quantidade populacional: ");
    scanf("%d", &populacao2);

    printf("Digite Área da Cidade: ");
    scanf("%f", &area_cidade2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("Digite Pontos Turisticos: ");
    scanf("%d", &pontos_turistico2);

    //Exibe dados cadasstrados (1° carta)
    printf("\n\n1° Carta: %s\n", codigoCarta);
    printf("1° Estado  %c\n", estado);
    printf("1° Cidade: %s", nomeCidade);
    printf("1° Codigo: %s\n", codigoCarta);
    printf("1° População: %i\n", populacao);
    printf("1° Área: %.2f\n", area_cidade);
    printf("1° PIB: %.2f\n", PIB);
    printf("1° Pontos Turisticos: %d\n\n", pontos_turistico);
    printf("1° Densidade Populacional: %f", densidade);
    printf("2° PIB per capita: %f", PIBper);
    //Exibe dados cadasstrados (2° carta)
    printf("\n\n2° Carta: %s\n", codigoCarta2);
    printf("2° Estado  %c\n", estado2);
    printf("2° Cidade: %s", nomeCidade2);
    printf("2° Codigo: %s\n", codigoCarta2);
    printf("2° População: %i\n", populacao2);
    printf("2° Área: %.2f\n", area_cidade2);
    printf("2° PIB: %.2f\n", PIB);
    printf("2° Pontos Turisticos: %d", pontos_turistico2);
    printf("1° Densidade Populacional: %f", densidade2);
    printf("2° PIB per capita: %f", PIBper2);