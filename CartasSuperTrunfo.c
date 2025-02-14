#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
void desafioNovato() {
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
}

void desafioAventureiro() {
    // Atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigoDaCidade[5] = "A000";
    char nome[32] = "";
    int populacao = 0;
    int area = 0;
    int pib = 0;
    int pontosTuristicos = 0;
    float densidadePopulacional = 0.0;
    float pibPerCapita = 0.0;

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

    // Define as propriedades que precisam ser calculadas após termos todas as informações da cidade
    densidadePopulacional = ((float)populacao / (float)area);
    pibPerCapita = ((float)pib / (float)populacao);

    // Exibe os valores inseridos para cada atributo da cidade, um por linha.
    printf("Atributos da cidade '%s':\n", nome);
    printf("Código: %s\n", codigoDaCidade);
    printf("Tamanho da população: %d\n", populacao);
    printf("Tamanho da área: %d\n", area);
    printf("Total de pontos turísticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %f\n", densidadePopulacional);
    printf("PIB per Capita: %f\n", pibPerCapita);
    printf("PIB total: %d\n", pib);
}

void perguntarDadosDaCidade(char* codigoDaCidade, char* nome, int& populacao, int& area, int& pib, int& pontosTuristicos, float& densidadePopulacional, float& pibPerCapita, float& superPoder) {
    // Atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    //codigoDaCidade[5] = "A000";
    //nome = "";
    //int populacao = 0;
    //int area = 0;
    //int pib = 0;
    //int pontosTuristicos = 0;
    //float densidadePopulacional = 0.0;
    //float pibPerCapita = 0.0;
    //float superPoder = 0.0;

    // Solicita ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Insira o código da cidade:\n");
    scanf("%s", codigoDaCidade);

    printf("Insira o nome da cidade:\n");
    scanf("%s", nome);

    printf("Insira o tamanho da população da cidade:\n");
    scanf("%d", &populacao);

    printf("Insira o tamanho da área da cidade:\n");
    scanf("%d", &area);

    printf("Insira o PIB da cidade:\n");
    scanf("%d", &pib);

    printf("Insira o número de pontos turísticos da cidade:\n");
    scanf("%d", &pontosTuristicos);

    // Define as propriedades que precisam ser calculadas após termos todas as informações da cidade
    densidadePopulacional = ((float)populacao / (float)area);
    pibPerCapita = ((float)pib / (float)populacao);
    superPoder = densidadePopulacional + pibPerCapita + (float)pontosTuristicos + (float)area + (float)populacao + (float)pib;
}

//Função válida para todas as propriedades, MENOS Densidade Populacional.
void compararPropriedadeGeralEInformarCidadeGanhadora(const char* propriedadeNome, float carta1Valor, float carta2Valor, char* carta1NomeDaCidade, char* carta2NomeDaCidade) {
    if (carta1Valor > carta2Valor) {
        printf("%s: %f e %f (Vencedor: '%s'; Valor: %f)\n", propriedadeNome, carta1Valor, carta2Valor, carta1NomeDaCidade, carta1Valor);
    }
    else if (carta2Valor > carta1Valor) {
        printf("%s: %f e %f (Vencedor: '%s'; Valor: %f)\n", propriedadeNome, carta1Valor, carta2Valor, carta2NomeDaCidade, carta2Valor);
    }
    else {
        printf("%s: %f e %f (Vencedor: Empate; Valor: %f)\n", propriedadeNome, carta1Valor, carta2Valor, carta1Valor);
    }
}

void compararDensidadePopulacionalEInformarCidadeGanhadora(const char* propriedadeNome, float carta1Valor, float carta2Valor, char* carta1NomeDaCidade, char* carta2NomeDaCidade) {
    if (carta1Valor > carta2Valor) {
        printf("%s: %f e %f (Vencedor: '%s'; Valor: %f)\n", propriedadeNome, carta1Valor, carta2Valor, carta2NomeDaCidade, carta2Valor);
    }
    else if (carta2Valor > carta1Valor) {
        printf("%s: %f e %f (Vencedor: '%s'; Valor: %f)\n", propriedadeNome, carta1Valor, carta2Valor, carta1NomeDaCidade, carta1Valor);
    }
    else {
        printf("%s: %f e %f (Vencedor: Empate; Valor: %f)\n", propriedadeNome, carta1Valor, carta2Valor, carta1Valor);
    }
}

void desafioMestre() {
    printf("Iremos comparar duas cartas de cidades. Siga os procedimentos abaixo:\n");

    char* codigoDaCidade = new char[5];
    char* nome = new char[32];
    int populacao, area, pib, pontosTuristicos;
    float densidadePopulacional, pibPerCapita, superPoder;
    printf("- Primeira cidade\n");
    perguntarDadosDaCidade(codigoDaCidade, nome, populacao, area, pib, pontosTuristicos, densidadePopulacional, pibPerCapita, superPoder);

    char* codigoDaCidade2 = new char[5];
    char* nome2 = new char[32];
    int populacao2, area2, pib2, pontosTuristicos2;
    float densidadePopulacional2, pibPerCapita2, superPoder2;
    printf("- Segunda cidade\n");
    perguntarDadosDaCidade(codigoDaCidade2, nome2, populacao2, area2, pib2, pontosTuristicos2, densidadePopulacional2, pibPerCapita2, superPoder2);

    // Exibe os valores inseridos para cada atributo da cidade, um por linha.
    printf("Resultado da comparação entre as cidades '%s' e '%s':\n", nome, nome2);
    compararPropriedadeGeralEInformarCidadeGanhadora("Tamanho da população", populacao, populacao2, nome, nome2);
    compararPropriedadeGeralEInformarCidadeGanhadora("Tamanho da área", area, area2, nome, nome2);
    compararPropriedadeGeralEInformarCidadeGanhadora("Total de pontos turísticos", pontosTuristicos, pontosTuristicos2, nome, nome2);
    compararDensidadePopulacionalEInformarCidadeGanhadora("Densidade populacional", densidadePopulacional, densidadePopulacional2, nome, nome2);
    compararPropriedadeGeralEInformarCidadeGanhadora("PIB per Capita", pibPerCapita, pibPerCapita2, nome, nome2);
    compararPropriedadeGeralEInformarCidadeGanhadora("PIB total", pib, pib2, nome, nome2);
    compararPropriedadeGeralEInformarCidadeGanhadora("Superpoder", superPoder, superPoder2, nome, nome2);
}

int main() {
    //desafioNovato();
    //desafioAventureiro();
    desafioMestre();

    return 0;
}