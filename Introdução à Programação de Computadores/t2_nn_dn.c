#include <stdio.h>

int main() {

    // Variaveis
    char ufEstado[4];
    char codigoCarta[5];
    char nomeCidade[25];
    int populacao;
    float area_cidade;
    float PIB;
    int pontos_turistico;
    
    char ufEstado2[4];
    char codigoCarta2[5];
    char nomeCidade2[25];
    int populacao2;
    float area_cidade2;
    float PIB2;
    int pontos_turistico2;
    

    printf("SUPER TRUNFO!\n");

    // 1° CARTA
    printf("CADASTRE A 1° CARTA\n");    
    printf("Digite o UF do Estado: \n");
    fgets(ufEstado, 4, stdin);
      
    printf("Digite codigo da carta: \n");
    scanf(codigoCarta, 5, stdin);

    printf("Digite nome da cidade: \n");
    fgets(nomeCidade, 25, stdin);

    printf("Digite quantidade populacional: \n");
    scanf("%d", &populacao);

    printf("Digite Área da Cidade: \n");
    scanf("%f", &area_cidade);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite Pontos Turisticos: \n\n");
    scanf("%d", &pontos_turistico);
    getchar();

    // 2° CARTA
    printf("CADASTRE A 2° CARTA\n");
    
    printf("Digite o UF do Estado: \n");
    fgets(ufEstado2, 4, stdin);

    printf("Digite codigo da carta: \n");
    fgets(codigoCarta2, 5, stdin);

    printf("Digite nome da cidade: \n");
    fgets(nomeCidade2, 25, stdin);

    printf("Digite quantidade populacional: \n");
    scanf("%d", &populacao2);

    printf("Digite Área da Cidade: \n");
    scanf("%f", &area_cidade2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite Pontos Turisticos: ");
    scanf("%d", &pontos_turistico2);

    //Exibe dados cadasstrados (1° carta)
    printf("\n\n1° Carta: %s\n", codigoCarta);
    printf("1° Estado  %s\n", ufEstado);
    printf("1° Cidade: %s", nomeCidade);
    printf("1° Codigo: %s\n", codigoCarta);
    printf("1° População: %i\n", populacao);
    printf("1° Área: %.2f\n", area_cidade);
    printf("1° PIB: %.2f\n", PIB);
    printf("1° Pontos Turisticos: %d\n\n", pontos_turistico);
    float densidade = populacao / area_cidade;
    float PIBper = PIB / populacao;
    printf("1° Densidade Populacional: %f", densidade);
    printf("2° PIB per capita: %f", PIBper);
    //Exibe dados cadasstrados (2° carta)
    printf("\n\n2° Carta: %s\n", codigoCarta2);
    printf("2° Estado  %s\n", ufEstado2);
    printf("2° Cidade: %s", nomeCidade2);
    printf("2° Codigo: %s\n", codigoCarta2);
    printf("2° População: %i\n", populacao2);
    printf("2° Área: %.2f\n", area_cidade2);
    printf("2° PIB: %.2f\n", PIB);
    printf("2° Pontos Turisticos: %d\n\n", pontos_turistico2);
    float densidade2 = populacao2 / area_cidade2;
    float PIBper2 = PIB / populacao2;

    printf("1° Densidade Populacional: %f", densidade2);
    printf("2° PIB per capita: %f", PIBper2);

    if(populacao > populacao2){
        printf("CARTA 1 VENCEU! %s (%s): %d", nomeCidade, ufEstado, populacao);
    }
}
