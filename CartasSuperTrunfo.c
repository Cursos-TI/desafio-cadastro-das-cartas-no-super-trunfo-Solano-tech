#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Solano

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    //Definição das variáveis da carta A
    char estadoA[20];
    char codA[5];
    char cidadeA[20];
    int populacaoA;
    int ptsTurismoA;
    float areaA;
    float pibA;
    float perCapitaA;
    float densidadeDemograficaA;

    //Definição das variáveis da carta B
    char estadoB[20];
    char codB[5];
    char cidadeB[20];
    int populacaoB;
    int ptsTurismoB;
    float areaB;
    float pibB;
    float perCapitaB;
    float densidadeDemograficaB;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    //Cadastro da carta A
    printf("Cadastro da Carta A\n");

    printf("Informe o estado: ");
    scanf("%s", estadoA); //Leitura do nome informado e armazenamento do valor na variável estadoA

    printf("Informe o código da cidade: ");
    scanf("%s", codA); //Leitura do código informado e armazenamento do valor na variável codA    

    printf("Informe o nome da cidade: ");
    scanf("%s", cidadeA); //Leitura do nome informado e armazenamento do valor na variável cidadeA

    printf("Informe a área da cidade: ");
    scanf("%f", &areaA); //Leitura da área da cidade informada e armazenamento do valor na variável areaA

    printf("Informe a população da cidade: ");
    scanf("%d", &populacaoA); //Leitura da população da cidade informada e armazenamento do valor na variável populacaoA

    printf("Informe o PIB da cidade: ");
    scanf("%f", &pibA); //Leitura do PIB da cidade informada e armazenamento do valor na variável pibA

    printf("Informe o número de pontos turísticos da cidade: ");
    scanf("%d", &ptsTurismoA);   //Leitura do número de pontos turísticos da cidade informados e armazenamento do valor na variável ptsTurismoA     

    //Cadastro da carta B
    printf("Cadastro da Carta B\n");

    printf("Informe o estado: ");
    scanf("%s", estadoB); //Leitura do nome informado e armazenamento do valor na variável estadoB

    printf("Informe o código da cidade: ");
    scanf("%s", codB); //Leitura do código informado e armazenamento do valor na variável codB    

    printf("Informe o nome da cidade: ");
    scanf("%s", cidadeB); //Leitura do nome informado e armazenamento do valor na variável cidadeB

    printf("Informe a área da cidade: ");
    scanf("%f", &areaB); //Leitura da área da cidade informada e armazenamento do valor na variável areaB

    printf("Informe a população da cidade: ");
    scanf("%d", &populacaoB); //Leitura da população da cidade informada e armazenamento do valor na variável populacaoB

    printf("Informe o PIB da cidade: ");
    scanf("%f", &pibB); //Leitura do PIB da cidade informada e armazenamento do valor na variável pibB

    printf("Informe o número de pontos turísticos da cidade: ");
    scanf("%d", &ptsTurismoB);   //Leitura do número de pontos turísticos da cidade informados e armazenamento do valor na variável ptsTurismoB 
    
    // Cálculo da Densidade Demográfica
    densidadeDemograficaA = populacaoA / areaA;
    densidadeDemograficaB = populacaoB / areaB;

    // Cálculo PIB Per Capita
    perCapitaA = (pibA * 1000000000) / populacaoA;
    perCapitaB = (pibB * 1000000000) / populacaoB;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //Exibição da carta A
    printf("\n*** CARTA A ***\n");
    printf("Estado: %s\n", estadoA);
    printf("Código: %s\n", codA);
    printf("Nome da Cidade: %s\n", cidadeA);
    printf("Área: %.2f km2 \n", areaA);
    printf("População: %d habitantes \n", populacaoA);
    printf("PIB: R$ %.2f bilhões de reais \n", pibA);
    printf("Número de Pontos Turísticos: %d \n", ptsTurismoA);
    printf("Densidade Demográfica: %.2f hab/km2 \n", densidadeDemograficaA);
    printf("PIB Per Capita: %.2f reais \n", perCapitaA);

    //Exibição da carta B
    printf("\n*** CARTA B ***\n");
    printf("Estado: %s\n", estadoB);
    printf("Código: %s\n", codB);
    printf("Nome da Cidade: %s\n", cidadeB);
    printf("Área: %.2f km2 \n", areaB);
    printf("População: %d habitantes \n", populacaoB);
    printf("PIB: R$ %.2f bilhões de reais \n", pibB);
    printf("Número de Pontos Turísticos: %d \n", ptsTurismoB);
    printf("Densidade Demográfica: %.2f hab/km2 \n", densidadeDemograficaB);
    printf("PIB Per Capita: %.2f reais \n", perCapitaB);

    return 0;
}
