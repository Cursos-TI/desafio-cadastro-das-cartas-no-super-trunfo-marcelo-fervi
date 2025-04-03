#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas (duas!! Conforme o README.md)
void perguntarDadosDaCidade(char* codigoDaCidade, char* nome, unsigned long int& populacao, float& area, float& pib, int& pontosTuristicos, float& densidadePopulacional, float& pibPerCapita, float& superPoder) {
    // Atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    //codigoDaCidade[5] = "A000";
    //nome = "";
    //int populacao = 0;
    //float area = 0;
    //float pib = 0;
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
    scanf("%lu", &populacao);

    printf("Insira o tamanho da área da cidade:\n");
    scanf("%f", &area);

    printf("Insira o PIB da cidade:\n");
    scanf("%f", &pib);

    printf("Insira o número de pontos turísticos da cidade:\n");
    scanf("%d", &pontosTuristicos);

    // Define as propriedades que precisam ser calculadas após termos todas as informações da cidade
    densidadePopulacional = ((float)populacao / area);
    pibPerCapita = (pib / (float)populacao);
    superPoder = densidadePopulacional + pibPerCapita + (float)pontosTuristicos + area + (float)populacao + pib;
}

//Função válida para comparar todas as propriedades, MENOS Densidade Populacional.
//Esta variante deve ser usada SOMENTE para variáveis do tipo INT32 (int).
void compararPropriedadeGeralEInformarCidadeGanhadora_Int32(const char* propriedadeNome, int carta1Valor, int carta2Valor, char* carta1NomeDaCidade, char* carta2NomeDaCidade) {
    if (carta1Valor > carta2Valor) {
        printf("%s: %d e %d (Vencedor: '%s'; Valor: %f)\n", propriedadeNome, carta1Valor, carta2Valor, carta1NomeDaCidade, carta1Valor);
    }
    else if (carta2Valor > carta1Valor) {
        printf("%s: %d e %d (Vencedor: '%s'; Valor: %f)\n", propriedadeNome, carta1Valor, carta2Valor, carta2NomeDaCidade, carta2Valor);
    }
    else {
        printf("%s: %d e %d (Vencedor: Empate; Valor: %f)\n", propriedadeNome, carta1Valor, carta2Valor, carta1Valor);
    }
}

//Função válida para comparar todas as propriedades, MENOS Densidade Populacional.
//Esta variante deve ser usada SOMENTE para variáveis do tipo UINT64 (unsigned long int).
void compararPropriedadeGeralEInformarCidadeGanhadora_UInt64(const char* propriedadeNome, unsigned long int carta1Valor, unsigned long int carta2Valor, char* carta1NomeDaCidade, char* carta2NomeDaCidade) {
    if (carta1Valor > carta2Valor) {
        printf("%s: %lu e %lu (Vencedor: '%s'; Valor: %f)\n", propriedadeNome, carta1Valor, carta2Valor, carta1NomeDaCidade, carta1Valor);
    }
    else if (carta2Valor > carta1Valor) {
        printf("%s: %lu e %lu (Vencedor: '%s'; Valor: %f)\n", propriedadeNome, carta1Valor, carta2Valor, carta2NomeDaCidade, carta2Valor);
    }
    else {
        printf("%s: %lu e %lu (Vencedor: Empate; Valor: %f)\n", propriedadeNome, carta1Valor, carta2Valor, carta1Valor);
    }
}

//Função válida para comparar todas as propriedades, MENOS Densidade Populacional.
//Esta variante deve ser usada SOMENTE para variáveis do tipo SINGLE32 (float).
void compararPropriedadeGeralEInformarCidadeGanhadora_Single32(const char* propriedadeNome, float carta1Valor, float carta2Valor, char* carta1NomeDaCidade, char* carta2NomeDaCidade) {
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

//Densidade Populacional necessita de uma lógica de comparação diferente para determinar qual carta é a vencedora.
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
    unsigned long int populacao;
    int pontosTuristicos;
    float area, pib, densidadePopulacional, pibPerCapita, superPoder;
    printf("- Primeira cidade\n");
    perguntarDadosDaCidade(codigoDaCidade, nome, populacao, area, pib, pontosTuristicos, densidadePopulacional, pibPerCapita, superPoder);

    char* codigoDaCidade2 = new char[5];
    char* nome2 = new char[32];
    unsigned long int populacao2;
    int pontosTuristicos2;
    float area2, pib2, densidadePopulacional2, pibPerCapita2, superPoder2;
    printf("- Segunda cidade\n");
    perguntarDadosDaCidade(codigoDaCidade2, nome2, populacao2, area2, pib2, pontosTuristicos2, densidadePopulacional2, pibPerCapita2, superPoder2);

    // Exibe os valores inseridos para cada atributo da cidade, um por linha.
    printf("Resultado da comparação entre as cidades '%s' e '%s':\n", nome, nome2);
    compararPropriedadeGeralEInformarCidadeGanhadora_UInt64("Tamanho da população", populacao, populacao2, nome, nome2);
    compararPropriedadeGeralEInformarCidadeGanhadora_Single32("Tamanho da área", area, area2, nome, nome2);
    compararPropriedadeGeralEInformarCidadeGanhadora_Int32("Total de pontos turísticos", pontosTuristicos, pontosTuristicos2, nome, nome2);
    compararDensidadePopulacionalEInformarCidadeGanhadora("Densidade populacional", densidadePopulacional, densidadePopulacional2, nome, nome2);
    compararPropriedadeGeralEInformarCidadeGanhadora_Single32("PIB per Capita", pibPerCapita, pibPerCapita2, nome, nome2);
    compararPropriedadeGeralEInformarCidadeGanhadora_Single32("PIB total", pib, pib2, nome, nome2);
    compararPropriedadeGeralEInformarCidadeGanhadora_Single32("Superpoder", superPoder, superPoder2, nome, nome2);
}

int main() {
    desafioMestre();

    return 0;
}