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
    char codigoA[3];
    char cidadeA[10];
    int populacaoA;
    float areaA;
    float pibA;
    int ptsTurismoA;

    /*
    //Definição das variáveis da carta B
    char codigoB[3];
    char cidadeB[20];
    int populacaoB;
    float areaB;
    float pibB;
    int ptsTurismoB;
    */

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    //Cadastro da carta A
    printf("Cadastro da Carta A \n");

    printf("Digite o código da cidade: ");
    scanf("%s", codigoA); //Leitura do código informado e armazenamento do valor na variável codigoA

    printf("Digite o nome da cidade: ");
    scanf("%s", cidadeA); //Leitura do nome informado e armazenamento do valor na variável cidadeA
/*    printf("Informe a área da cidade: ");
    scanf("%f", &areaA); //Leitura da área da cidade informada e armazenamento do valor na variável areaA

    printf("Informe a população da cidade: ");
    scanf("%d", &populacaoA); //Leitura da população da cidade informada e armazenamento do valor na variável populacaoA

    printf("Informe o PIB da cidade: ");
    scanf("%f", &pibA); //Leitura do PIB da cidade informada e armazenamento do valor na variável pibA

    printf("Informe o número de pontos turísticos da cidade: ");
    scanf("%d", &ptsTurismoA);   //Leitura do número de pontos turísticos da cidade informados e armazenamento do valor na variável ptsTurismoA  
*/
/*    //Cadastro da carta B
    printf("Cadastro da Carta B\n");

    printf("Digite o nome da cidade: ");
    scanf("%s\n", cidadeB); //Leitura do nome informado e armazenamento do valor na variável cidadeB

    printf("Digite o código da cidade: ");
    scanf("%s\n", codigoB); //Leitura do código informado e armazenamento do valor na variável codigoB

    printf("Informe a área da cidade: ");
    scanf("%f\n", &areaB); //Leitura da área da cidade informada e armazenamento do valor na variável areaB

    printf("Informe a população da cidade: ");
    scanf("%d\n", &populacaoB); //Leitura da população da cidade informada e armazenamento do valor na variável populacaoB

    printf("Informe o PIB da cidade: ");
    scanf("%f\n", &pibB); //Leitura do PIB da cidade informada e armazenamento do valor na variável pibB

    printf("Informe o número de pontos turísticos da cidade: ");
    scanf("%d\n", &ptsTurismoB);   //Leitura do número de pontos turísticos da cidade informados e armazenamento do valor na variável ptsTurismoB     
*/
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //Exibição da carta A
    printf("\nCARTA A\n");
    printf("Código: %s\n", codigoA);
    printf("Nome da Cidade: %s\n", cidadeA);

/*    printf("Área: %.1f km2 \n", areaA);
    printf("População: %d \n", populacaoA);
    printf("PIB: R$ %.1f \n", pibA);
    printf("Número de pontos Turísticos: %d \n", ptsTurismoA);
*/
    return 0;
}
