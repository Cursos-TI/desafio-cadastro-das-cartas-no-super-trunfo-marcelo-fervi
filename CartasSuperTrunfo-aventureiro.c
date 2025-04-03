#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas (duas!! Conforme o README.md)
void desafioAventureiro() {
    // Atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigoDaCidade1[5] = "A000";
    char nomeCidade1[32] = "";
    int populacaoCidade1 = 0;
    float areaCidade1 = 0;
    float pibCidade1 = 0;
    int pontosTuristicosCidade1 = 0;
    float densidadePopulacionalCidade1 = 0.0;
    float pibPerCapitaCidade1 = 0.0;

    char codigoDaCidade2[5] = "A000";
    char nomeCidade2[32] = "";
    int populacaoCidade2 = 0;
    float areaCidade2 = 0;
    float pibCidade2 = 0;
    int pontosTuristicosCidade2 = 0;
    float densidadePopulacionalCidade2 = 0.0;
    float pibPerCapitaCidade2 = 0.0;

    // Solicita ao usuário que insira as informações da PRIMEIRA cidade, como o código, nome, população, área, etc.
    printf("Insira o código da primeira cidade:\n");
    scanf("%s", &codigoDaCidade1);

    printf("Insira o nome da primeira cidade:\n");
    scanf("%s", &nomeCidade1);

    printf("Insira o tamanho da população da primeira cidade:\n");
    scanf("%d", &populacaoCidade1);

    printf("Insira o tamanho da área da primeira cidade:\n");
    scanf("%f", &areaCidade1);

    printf("Insira o PIB da primeira cidade:\n");
    scanf("%f", &pibCidade1);

    printf("Insira o número de pontos turísticos da primeira cidade:\n");
    scanf("%d", &pontosTuristicosCidade1);

    // Solicita ao usuário que insira as informações da SEGUNDA cidade, como o código, nome, população, área, etc.
    printf("Insira o código da segunda cidade:\n");
    scanf("%s", &codigoDaCidade2);

    printf("Insira o nome da segunda cidade:\n");
    scanf("%s", &nomeCidade2);

    printf("Insira o tamanho da população da segunda cidade:\n");
    scanf("%d", &populacaoCidade2);

    printf("Insira o tamanho da área da segunda cidade:\n");
    scanf("%f", &areaCidade2);

    printf("Insira o PIB da segunda cidade:\n");
    scanf("%f", &pibCidade2);

    printf("Insira o número de pontos turísticos da segunda cidade:\n");
    scanf("%d", &pontosTuristicosCidade2);

    printf("\n");

    // Define as propriedades que precisam ser calculadas após termos todas as informações da PRIMEIRA cidade
    densidadePopulacionalCidade1 = ((float)populacaoCidade1 / areaCidade1);
    pibPerCapitaCidade1 = (pibCidade1 / (float)populacaoCidade1);

    // Define as propriedades que precisam ser calculadas após termos todas as informações da SEGUNDA cidade
    densidadePopulacionalCidade2 = ((float)populacaoCidade2 / areaCidade2);
    pibPerCapitaCidade2 = (pibCidade2 / (float)populacaoCidade2);

    // Exibe os valores inseridos para cada atributo da PRIMEIRA cidade, um por linha.
    printf("Atributos da primeira cidade '%s':\n", nomeCidade1);
    printf("Código: %s\n", codigoDaCidade1);
    printf("Tamanho da população: %d\n", populacaoCidade1);
    printf("Tamanho da área: %f\n", areaCidade1);
    printf("Total de pontos turísticos: %d\n", pontosTuristicosCidade1);
    printf("Densidade Populacional: %f\n", densidadePopulacionalCidade1);
    printf("PIB per Capita: %f\n", pibPerCapitaCidade1);
    printf("PIB total: %f\n", pibCidade1);
    printf("\n");

    // Exibe os valores inseridos para cada atributo da SEGUNDA cidade, um por linha.
    printf("Atributos da segunda cidade '%s':\n", nomeCidade2);
    printf("Código: %s\n", codigoDaCidade2);
    printf("Tamanho da população: %d\n", populacaoCidade2);
    printf("Tamanho da área: %f\n", areaCidade2);
    printf("Total de pontos turísticos: %d\n", pontosTuristicosCidade2);
    printf("Densidade Populacional: %f\n", densidadePopulacionalCidade2);
    printf("PIB per Capita: %f\n", pibPerCapitaCidade2);
    printf("PIB total: %f\n", pibCidade2);
}

int main() {
    desafioAventureiro();

    return 0;
}