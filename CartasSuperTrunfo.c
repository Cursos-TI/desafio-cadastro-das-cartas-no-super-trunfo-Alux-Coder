#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    int id;
    char name[50];
    int population;
    float PIB;
    int turistc_points;

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    printf("-----------------------------------------------\n");
    printf("Cadastro de cartas.\nSuper Trunfo\n");
    printf("-----------------------------------------------\n");
    
    printf("Qual o id da carta?");
    scanf("%i", &id);
    
    printf("Qual o nome da cidade?");
    scanf("%s", &name);
    
    printf("Qual a população da cidade?");
    scanf("%i", &population);
    
    printf("Qual o PIB desta cidade?");
    scanf("%f", &PIB);
    
    printf("E por ultimo, quais os pontos turisticos?");
    scanf("%i", &turistc_points);

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("-----------------------------------------------\n");
    printf("ID: %i \nNome da cidade: %s \nPopulação: %i \nPIB: %f \nPontos Turisticos: %i \n", id, name, population, PIB, turistc_points);
    printf("-----------------------------------------------\n");
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
