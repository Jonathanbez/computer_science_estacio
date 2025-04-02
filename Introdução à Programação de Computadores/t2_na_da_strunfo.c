#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int opcao, populacao, populacao2, pontosTuristicos, pontosTuristicos2;
    char nomePais[60], nomePais2[60];
    float area, area2, pib, pib2;

    printf("JOGO SUPER TRUNFO!\n");

    // Cadastramento 1° carta
    printf("JOGADOR 1 - CADASTRE A CARTA\n\n");    
    printf("País: \n");
    fgets(nomePais, 60, stdin);
    nomePais[strcspn(nomePais, "\n")] = 0; // Remove '/n' da variavel 'nomePais'
    printf("População: \n");
    scanf("%d", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("Digite o PIB: \n");
    scanf("%f", &pib);
    printf("Quantidade de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos);
    getchar(); // Limpa o buffer após scanf()

    // Cadastramento 2° carta
    printf("\nJOGADOR 2 - CADASTRE A CARTA\n\n");    
    printf("País: \n");
    fgets(nomePais2, 60, stdin);
    nomePais2[strcspn(nomePais2, "\n")] = 0; // Remove '/n' da variavel 'nomePais2'
    printf("População: \n");
    scanf("%d", &populacao2);
    printf("Área: \n");
    scanf("%f", &area2);
    printf("Digite o PIB: \n");
    scanf("%f", &pib2);
    printf("Quantidade de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos dados da Carta 1 / float "densidade" já com calculo
    printf("DADOS CARTA 1 - JOGADOR 1\n");
    printf("JOGADOR 1 - País: %s\n", nomePais);
    printf("JOGADOR 1 - População: %d\n", populacao);
    printf("JOGADOR 1 - Área: %.2f\n", area);
    printf("JOGADOR 1 - PIB: %.2f\n", pib);
    printf("JOGADOR 1 - Pontos Turísticos: %d\n", pontosTuristicos);
    float densidade = populacao / area; // float "densidade" já com calculo
    printf("JOGADOR 1 - Densidade demográfica: %f\n", densidade);

    // Exibição dos dados da Carta 1
    printf("DADOS CARTA 2 - JOGADOR 2\n");
    printf("JOGADOR 2 - País: %s\n", nomePais2);
    printf("JOGADOR 2 - População: %d\n", populacao2);
    printf("JOGADOR 2 - Área: %.2f\n", area2);
    printf("JOGADOR 2 - PIB: %.2f\n", pib2);
    printf("JOGADOR 2 - Pontos Turísticos: %d\n", pontosTuristicos2);
    float densidade2 = populacao2 / area2; // float "densidade" já com calculo
    printf("JOGADOR 2 - Densidade demográfica: %f\n", densidade2);

    // Menu interativo para escolha da comparação
    printf("\nESCOLHA DA COMPARAÇÃO\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Demográfica\n");
    printf("Digite a opção (1-5): ");
    scanf("%d", &opcao);
    
    // Lógica de comparação com switch
    switch (opcao)
    {
    case 1: // População
        printf("\nComparação entre População:\n");
        printf("Pais 1: %s - População: %d", nomePais, populacao);
        printf("Pais 2: %s - População: %d", nomePais2, populacao2);
        if(populacao > populacao2){
            printf("VENCEDOR: %s - JOGADOR 1\n", nomePais);
        }
        else if(populacao == populacao2){
            printf("EMPATE!\n");
        }
        else{
            printf("VENCEDOR: %s JOGADOR 2\n", nomePais2);
        }
        break;
    case 2: // Área
        printf("\nComparação entre Área: \n");
        printf("Pais 1: %s - Área: %.2f\n", nomePais, area);
        printf("Pais 2: %s - Área: %.2f\n", nomePais2, area2);
        if(area > area2){
            printf("VENCEDOR: %s - JOGADOR 1\n", nomePais);
        }
        else if(area == area2){
            printf("EMPATE!");
        }
        else{
            printf("VENCEDOR: %s - JOGADOR 2\n", nomePais2);
        }
        break;
    case 3:
        printf("\nComparação entre PIB:\n");
        printf("Pais 1: %s - PIB: %.2f\n", nomePais, pib);
        printf("Pais 2: %s - PIB: %.2f\n", nomePais2, pib2);
        if(pib > pib2){
            printf("VENCEDOR: %s - JOGADOR 1\n", nomePais);
        }
        else if(pib == pib2){
            printf("EMPATE!\n");
        }
        else{
            printf("VENCEDOR: %s - JOGADOR 2\n", nomePais2);
        }
        break;
    case 4:
        printf("\nComparação entre Pontos Turísticos: \n");
        printf("Pais 1: %s - Pontos Turísticos: %d\n", nomePais, pontosTuristicos);
        printf("Pais 2: %s - Pontos Turísticos: %d\n", nomePais2, pontosTuristicos2);
        if(pontosTuristicos > pontosTuristicos2){
            printf("VENCEDOR: %s - JOGADOR 1\n", nomePais);
        }
        else if(pontosTuristicos == pontosTuristicos2){
            printf("EMPATE\n");
        }
        else{
            printf("VENCEDOR: %s - JOGADOR 1\n", nomePais2);
        }
        break;
    case 5:
        printf("\nComparação entre Densidade Demográfica: \n");
        printf("Pais 1: %s - Densidade Demográfica: %.2f\n", nomePais, densidade);
        printf("Pais 2: %s - Densidade Demográfica: %.2f\n", nomePais2, densidade2);
        if(densidade < densidade2){
            printf("VENCEDOR: %s - JOGADOR 1\n", nomePais);
        }
        else if(densidade == densidade2){
            printf("EMPATE\n");
        }
        else{
            printf("VENCEDOR: %s - JOGADOR 2\n", nomePais2);
        }
        break;
    
    default:
        printf("OPÇÃO INVALIDA");
        break;
    }

    return 0;
}