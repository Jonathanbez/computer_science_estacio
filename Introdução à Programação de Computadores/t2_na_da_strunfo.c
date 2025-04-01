#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int opcao, populacao, populacao2, pontosTuristicos, pontosTuristicos2;
    char nomePais[60], nomePais2[60];
    float area, area2, pib, pib2;

    printf("JOGO SUPER TRUNFO!\n");

    // CADASTRAMENTO 1° CARTA
    printf("JOGADOR 1 - CADASTRE A CARTA\n\n");    
    printf("País: \n");
    fgets(nomePais, 60, stdin);
    //nomePais2[strcspn(nomePais, "\n")] = 0;
    printf("População: \n");
    scanf("%d", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("Digite o PIB: \n");
    scanf("%f", &pib);
    printf("Quantidade de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos);
    getchar();

    // CADASTRAMENTO 2° CARTA
    printf("\nJOGADOR 2 - CADASTRE A CARTA\n\n");    
    printf("País: \n");
    fgets(nomePais2, 60, stdin);
    //nomePais2[strcspn(nomePais2, "\n")] = 0;
    printf("População: \n");
    scanf("%d", &populacao2);
    printf("Área: \n");
    scanf("%f", &area2);
    printf("Digite o PIB: \n");
    scanf("%f", &pib2);
    printf("Quantidade de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    //EXIBE DADOS CARTA JOGADOR 1 (1° carta)
    printf("DADOS CARTA 1\n");
    printf("JOGADOR 1 - País: %s\n", nomePais);
    printf("JOGADOR 1 - População: %d\n", populacao);
    printf("JOGADOR 1 - Área: %.2f\n", area);
    printf("JOGADOR 1 - PIB: %.2f\n", pib);
    printf("JOGADOR 1 - Pontos Turísticos: %d\n", pontosTuristicos);
    float densidade = populacao / area;
    printf("JOGADOR 1 - Densidade demográfica: %f\n", densidade);

    //EXIBE DADOS CARTA JOGADOR 2 (2° carta)
    printf("DADOS CARTA 1\n");
    printf("JOGADOR 2 - País: %s\n", nomePais2);
    printf("JOGADOR 2 - População: %d\n", populacao2);
    printf("JOGADOR 2 - Área: %.2f\n", area2);
    printf("JOGADOR 2 - PIB: %.2f\n", pib2);
    printf("JOGADOR 2 - Pontos Turísticos: %d\n", pontosTuristicos2);
    float densidade2 = populacao2 / area2;
    printf("JOGADOR 2 - Densidade demográfica: %f\n", densidade2);

    printf("ESCOLHA DA COMPARAÇÃO\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos Tuísticos\n5. Densidade Demogŕafica\n");
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
        printf("Comparação entre População: \n");
        if(populacao > populacao2){
            printf("VENCEDOR: JOGADOR 1");
        }
        else if(populacao == populacao2){
            printf("EMPATE");
        }
        else{
            printf("VENCEDOR: JOGAODR 2");
        }
        break;
    case 2:
        printf("Comparação entre Área: \n");
        if(area > area2){
            printf("VENCEDOR: JOGADOR 1");
        }
        else if(area == area2){
            printf("EMPATE");
        }
        else{
            printf("VENCEDOR: JOGAODR 2");
        }
        break;
    case 3:
        printf("Comparação entre PIB: \n");
        if(pib > pib2){
            printf("VENCEDOR: JOGADOR 1");
        }
        else if(pib == pib2){
            printf("EMPATE");
        }
        else{
            printf("VENCEDOR: JOGAODR 2");
        }
        break;
    case 4:
        printf("Comparação entre Pontos Turísticos: \n");
        if(pontosTuristicos > pontosTuristicos2){
            printf("VENCEDOR: JOGADOR 1");
        }
        else if(pontosTuristicos == pontosTuristicos2){
            printf("EMPATE");
        }
        else{
            printf("VENCEDOR: JOGAODR 2");
        }
        break;
    case 5:
        printf("Comparação entre Densidade Demográfica: \n");
        if(densidade > densidade2){
            printf("VENCEDOR: JOGADOR 1");
        }
        else if(densidade == densidade2){
            printf("EMPATE");
        }
        else{
            printf("VENCEDOR: JOGAODR 2");
        }
        break;
    
    default:
        printf("OPÇÃO INVALIDA");
        break;
    }
}