#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    int id, id2;
    char name[50], name2[50];
    int population, population2;
    float area, area2;
    float PIB, PIB2;
    int turistc_points, turistc_points2;
    float PIB_per_capta, PIB_per_capta2;
    float Densi_population, Densi_population2;
    int points, points2;


    printf("-----------------------------------------------\n");
    printf("Cadastro de cartas.\nSuper Trunfo\n");
    printf("-----------------------------------------------\n");
    printf("**Carta01***\n");
    
    printf("Qual o id da carta?");
    scanf("%i", &id);
    
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

    Densi_population = (float) population / area;

    PIB_per_capta = PIB / population;

    printf("-----------------------------------------------\n");
    printf("*** Informações gerais\n");
    printf("ID: %i \nNome da cidade: %s \nPopulação: %i \nArea da cidade: %.2fkm \nPIB: %.2f \nPontos Turisticos: %i \n", id, name, population, area, PIB, turistc_points);
    printf("\n*** Informações calculadas\n");
    printf("PIB per Capta: %.2f\nDensidade Populacional: %.2f\n", PIB_per_capta, Densi_population);
    printf("-----------------------------------------------\n");
    
    printf("**Carta02***\n");

    printf("Qual o id da carta?");
    scanf("%i", &id2);
    
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

    Densi_population2 = (float) population2 / area2;

    PIB_per_capta2 = PIB2 / population2;

    printf("-----------------------------------------------\n");
    printf("*** Informações gerais\n");
    printf("ID: %i \nNome da cidade: %s \nPopulação: %i \nArea da cidade: %.2fkm \nPIB: %.2f \nPontos Turisticos: %i \n", id2, name2, population2, area2, PIB2, turistc_points2);
    printf("\n*** Informações calculadas\n");
    printf("PIB per Capta: %.2f\nDensidade Populacional: %.2f\n", PIB_per_capta2, Densi_population2);
    printf("-----------------------------------------------\n");

    printf("\n***Comparação de Cartas\n");
    printf("\n** %s VS %s **\n", name, name2);
    printf("População: %i | %i \n", points += population > population2, points2 += population < population2);
    printf("Densidade Populacional: %i | %i \n", points += Densi_population < Densi_population2, points2 += Densi_population > Densi_population2);
    printf("Area da cidade: %i | %i \n", points += area > area2, points2 += area < area2);
    printf("PIB: %i | %i \n", points += PIB > PIB2, points2 += PIB < PIB2);
    printf("PIB per capita: %i e %i \n", points += PIB_per_capta > PIB_per_capta2, points2 += PIB_per_capta < PIB_per_capta2);
    printf("Pontos Turisticos: %i | %i \n", points += turistc_points > turistc_points2, points2 += turistc_points < turistc_points2);

    printf("\n-----------------------------------------------\n");

    printf("*** Placar\n");

    printf("-----------------------------------------------\n");

    printf("-- %s: %i\n", name, points);
    printf("-- %s: %i\n", name2, points2);

    return 0;
}
