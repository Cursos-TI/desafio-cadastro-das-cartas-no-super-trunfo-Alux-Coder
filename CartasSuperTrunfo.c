#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {

    // Declarando variaveis
    char state[25], state2[25];
    int id, id2;
    char name[50], name2[50];
    int population, population2;
    float area, area2;
    float PIB, PIB2;
    int turistc_points, turistc_points2;
    float PIB_per_capta, PIB_per_capta2;
    float Densi_population, Densi_population2;
    int points, points2;

    // Iniciando Jogo e recebendo os inputs do usuario com sua 1ª carta
    printf("-----------------------------------------------\n");
    printf("Cadastro de cartas.\nSuper Trunfo\n");
    printf("-----------------------------------------------\n");
    printf("**Carta01***\n");
    
    printf("Qual o id da carta?");
    scanf("%i", &id);
    
    printf("Qual o estado da sua cidade?");
    scanf(" %s", state);
    
    printf("Qual o nome da cidade?");
    scanf(" %s", name);
    
    printf("Qual a população da cidade?");
    scanf("%i", &population);
    
    printf("Qual a area da cidade?");
    scanf("%f", &area);
    
    printf("Qual o PIB desta cidade?");
    scanf("%f", &PIB);
    
    printf("E por ultimo, quais os pontos turisticos?");
    scanf("%i", &turistc_points);
    
    // Calculando PIB per capita e densidade populacional
    Densi_population = (float) population / area;
    
    PIB_per_capta = PIB / population;
    
    //Apresentando as informações das cartas
    printf("-----------------------------------------------\n");
    printf("*** Informações gerais\n");
    printf("ID: %i \nNome da cidade: %s \nPopulação: %i \nArea da cidade: %.2fkm \nPIB: R$ %.2f \nPontos Turisticos: %i \n", id, name, population, area, PIB, turistc_points);
    printf("\n*** Informações calculadas\n");
    printf("PIB per Capta: R$ %.2f\nDensidade Populacional: %.2f\n", PIB_per_capta, Densi_population);
    printf("-----------------------------------------------\n");
    
    // Iniciando Jogo e recebendo os inputs do usuario com sua 2ª carta
    printf("**Carta02***\n");
    
    printf("Qual o id da carta?");
    scanf("%i", &id2);
    
    printf("Qual o estado da sua cidade?");
    scanf(" %s", state2);
    
    printf("Qual o nome da cidade?");
    scanf(" %s", name2);
    
    printf("Qual a população da cidade?");
    scanf("%i", &population2);
    
    printf("Qual a area da cidade?");
    scanf("%f", &area2);
    
    printf("Qual o PIB desta cidade?");
    scanf("%f", &PIB2);
    
    printf("E por ultimo, quais os pontos turisticos?");
    scanf("%i", &turistc_points2);
    
    // Calculando PIB per capita e densidade populacional
    Densi_population2 = (float) population2 / area2;
    
    PIB_per_capta2 = PIB2 / population2;
    
    //Apresentando as informações das cartas
    printf("-----------------------------------------------\n");
    printf("*** Informações gerais\n");
    printf("ID: %i \nNome da cidade: %s \nPopulação: %i \nArea da cidade: %.2fkm \nPIB: R$ %.2f \nPontos Turisticos: %i \n", id2, name2, population2, area2, PIB2, turistc_points2);
    printf("\n*** Informações calculadas\n");
    printf("PIB per Capta: R$ %.2f\nDensidade Populacional: %.2f\n", PIB_per_capta2, Densi_population2);
    printf("-----------------------------------------------\n");
    
    // Comparação das cartas
    printf("\n***Comparação de Cartas\n");
    printf("\n** %s VS %s **\n", name, name2);

    printf("\nComparação de PIB:\n");

    printf("Carta 01 - %s (%s): R$ %.2f\n", name, state, PIB);
    printf("Carta 02 - %s (%s): R$ %.2f\n", name2, state2, PIB2);

    printf("\n*** RESULTADO:");

    //Verificando qual o PIB maior
    if (PIB > PIB2) {
        printf("CARTA 01 ( %s ) VENCEDORA\n\nParabens Jogador 1", name);
    }
    else {
        printf("CARTA 02 ( %s ) VENCEDORA\n\nParabens Jogador 2", name2);
    }
    
    printf("-----------------------------------------------\n");

    return 0;
}