#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigoDaCidade[5] = "A000";
    char nome[32] = "";
    int populacao = 0;
    int area = 0;
    int pib = 0;
    int pontosTuristicos = 0;

    // Solicita ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Insira o código da cidade:\n");
    scanf("%s", &codigoDaCidade);

    printf("Insira o nome da cidade:\n");
    scanf("%s", &nome);

    printf("Insira o tamanho da população da cidade:\n");
    scanf("%d", &populacao);

    printf("Insira o tamanho da área da cidade:\n");
    scanf("%d", &area);

    printf("Insira o PIB da cidade:\n");
    scanf("%d", &pib);

    printf("Insira o número de pontos turísticos da cidade:\n");
    scanf("%d", &pontosTuristicos);

    // Exibe os valores inseridos para cada atributo da cidade, um por linha.
    printf("Atributos da cidade '%s':\n", nome);
    printf("Código: %s\n", codigoDaCidade);
    printf("Tamanho da população: %d\n", populacao);
    printf("Tamanho da área: %d\n", area);
    printf("PIB: %d\n", pib);
    printf("Total de pontos turísticos: %d\n", pontosTuristicos);

    return 0;
}