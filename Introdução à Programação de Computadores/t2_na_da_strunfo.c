#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int populacao, populacao2, pontosTuristicos,
    pontosTuristicos2, atr, atr1, soma1 = 0, soma2 = 0;
    char nomePais[60], nomePais2[60], opcao, opcao1;
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
    getchar();

    // Calculo das densidades
    float densidade = populacao / area;
    float densidade2 = populacao2 / area2;

    // Exibição dos dados da Carta 1 / float "densidade" já com calculo
    printf("DADOS CARTA 1 - JOGADOR 1\n");
    printf("JOGADOR 1 - País: %s\n", nomePais);
    printf("JOGADOR 1 - População: %d\n", populacao);
    printf("JOGADOR 1 - Área: %.2f\n", area);
    printf("JOGADOR 1 - PIB: %.2f\n", pib);
    printf("JOGADOR 1 - Pontos Turísticos: %d\n", pontosTuristicos);
    printf("JOGADOR 1 - Densidade demográfica: %f\n", densidade);

    // Exibição dos dados das Cartas
    printf("DADOS CARTA 2 - JOGADOR 2\n");
    printf("JOGADOR 2 - País: %s\n", nomePais2);
    printf("JOGADOR 2 - População: %d\n", populacao2);
    printf("JOGADOR 2 - Área: %.2f\n", area2);
    printf("JOGADOR 2 - PIB: %.2f\n", pib2);
    printf("JOGADOR 2 - Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("JOGADOR 2 - Densidade demográfica: %f\n", densidade2);

    // Menu interativo para escolha da comparação
    printf("\n*** ESCOLHA DA COMPARAÇÃO ***\n");
    printf("A. Escolha 2 atributos\nB. Escolha todos os atributos");
    printf("Digite o tipo de comparação (A ou B): \n");
    scanf("%c", &opcao);
    
    // Lógica de comparação com switch
    switch (opcao)
    {
        case 'A': // Escolha de 2 atributos opção 2
        case 'a':
        printf("\n*** Escolha quais atributos das cartas para comparação ***\n");
        printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Demográfica\n");
        printf("Escolha o primeiro atributo(1-5): ");
        scanf("%d", &atr);
        printf("Escolha o segundo atributo(1-5): ");
        scanf("%d", &atr1);
        
        // Primeiro atributo 
            switch (atr)
            {
            case 1:
                soma1 = populacao > populacao2 ? 1 : 0;
                soma2 = populacao < populacao2 ? 1 : 0;
                printf("População - Jogador 1: %d  vs Jogador 2: %d\n", populacao, populacao);
            break;
            case 2:
                soma1 = area > area2 ? 1 : 0;
                soma2 = area < area2 ? 1 : 0;
                printf("Area - Jogador 1: %.2f  vs Jogador 2: %.2f\n", area, area2);
            break;
            case 3:
                soma1 = pib > pib2 ? 1 : 0;
                soma2 = pib < pib2 ? 1 : 0;
                printf("PIB - Jogador 1: %.2f vs Jogador 2: %.2f\n", pib, pib2);            
            case 4:
                soma1 = pontosTuristicos > pontosTuristicos2 ? 1 : 0;
                soma2 = pontosTuristicos < pontosTuristicos2 ? 1 : 0;
                printf("Pontos Turísticos - Jogador 1: %d vs Jogador 2: %d\n", pontosTuristicos, pontosTuristicos2);
            case 5:
                soma1 = densidade < densidade2 ? 1 : 0;
                soma2 = densidade > densidade2 ? 1 : 0;
                printf("Densidade = Jogador 1: %.2f vs Jogador 2: %.2f\n", densidade, densidade2);
            break;
            return 1;
            }
                if(atr == atr1)
                {
                    printf("VOCÊ ESCOLHEU O MESMO ATRIBUTO!\n");
                } 
                else
                {
                    switch (atr1)
                    {
                        case 1:
                        soma1 += populacao > populacao2 ? 1 : 0;
                        soma2 += populacao < populacao2 ? 1 : 0;
                        printf("População - Jogador 1: %d  vs Jogador 2: %d\n", populacao, populacao);
                    break;
                    case 2:
                        soma1 += area > area2 ? 1 : 0;
                        soma2 += area < area2 ? 1 : 0;
                        printf("Area - Jogador 1: %.2f  vs Jogador 2: %.2f\n", area, area2);
                    break;
                    case 3:
                        soma1 += pib > pib2 ? 1 : 0;
                        soma2 += pib < pib2 ? 1 : 0;
                        printf("PIB - Jogador 1: %.2f vs Jogador 2: %.2f\n", pib, pib2);            
                    case 4:
                        soma1 += pontosTuristicos > pontosTuristicos2 ? 1 : 0;
                        soma2 += pontosTuristicos < pontosTuristicos2 ? 1 : 0;
                        printf("Pontos Turísticos - Jogador 1: %d vs Jogador 2: %d\n", pontosTuristicos, pontosTuristicos2);
                    case 5:
                        soma1 += densidade < densidade2 ? 1 : 0;
                        soma2 += densidade > densidade2 ? 1 : 0;
                        printf("Densidade = Jogador 1: %.2f vs Jogador 2: %.2f\n", densidade, densidade2);
                    break;
                    default:
                        printf("OPÇÃO INVALIDA");
                    return 1;
                    }
                    printf("\nRESULTADO:\n");
                    printf("Jogador 1: %d pontos\nJogador 2: %d pontos", soma1, soma2);
                    printf("Vencedor: %s\n", soma1 > soma2 ? "Jogaodr 1" : (soma1 < soma2 ? "Jogador 2" : "Empate"));
                }
            case 'B': // Escolha de 2 atributos opção 2
            case 'b':

                soma1 = populacao > populacao2 ? 1 : 0;
                soma2 = populacao < populacao2 ? 1 : 0;
                printf("População - Jogador 1: %d  vs Jogador 2: %d\n", populacao, populacao);

                soma1 += area > area2 ? 1 : 0;
                soma2 += area < area2 ? 1 : 0;
                printf("Area - Jogador 1: %.2f  vs Jogador 2: %.2f\n", area, area2);
                soma1 += pib > pib2 ? 1 : 0;
                soma2 += pib < pib2 ? 1 : 0;
                printf("PIB - Jogador 1: %.2f vs Jogador 2: %.2f\n", pib, pib2);            

                soma1 += pontosTuristicos > pontosTuristicos2 ? 1 : 0;
                soma2 += pontosTuristicos < pontosTuristicos2 ? 1 : 0;
                printf("Pontos Turísticos - Jogador 1: %d vs Jogador 2: %d\n", pontosTuristicos, pontosTuristicos2);
                soma1 += densidade < densidade2 ? 1 : 0;
                soma2 += densidade > densidade2 ? 1 : 0;

                printf("Densidade = Jogador 1: %.2f vs Jogador 2: %.2f\n", densidade, densidade2);
                printf("\nRESULTADO:\n");
                printf("Jogador 1: %d pontos\nJogador 2: %d pontos", soma1, soma2);
                printf("Vencedor: %s\n", soma1 > soma2 ? "Jogaodr 1" : (soma1 < soma2 ? "Jogador 2" : "Empate"));
                break;
        default:
            printf("OPÇÃO INVALIDA");
        break;
        }
    return 0;
}