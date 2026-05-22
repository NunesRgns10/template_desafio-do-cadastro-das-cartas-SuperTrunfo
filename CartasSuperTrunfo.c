#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Carta 1
  char estado = '0';
  char codCarta[04] = " ";
  char nomeCidade[30] = " ";
  int populacao = 0;
  float area = 0.0f;
  float PIB =  0.0f;
  int numPontoTuristico = 0;

  // Carta 2
  // Esta não é uma prática correta. o código foi duplicado porque a instrução era não usar laço na lógica.
  char estado2 = '0';
  char codCarta2[04] = " ";
  char nomeCidade2[30] = " ";
  int populacao2 = 0;
  float area2 = 0.0f;
  float PIB2 =  0.0f;
  int numPontoTuristico2 = 0;

  // Área para entrada de dados
    printf("  ******  Entre com os dados das cartas *****  \n");
    printf("Entre com a letra A: \n");
    scanf("%c", estado);
    printf("Código da Carta =  a letra do estado seguida de um número de 01 a 04: \n");
    scanf("%c", codCarta);
    printf("Informe o Nome  da Cidade: \n");
    scanf("%s", nomeCidade);
    printf("Informe o número de habitantes dsa cidade: \n");
    scanf("%d", &populacao);
    printf("Informe a área de cidade em km2: \n");
    scanf("%.f", &area);
    printf("Informe o PIB da cidade: \n");
    scanf("%f", &PIB);
    printf("Informe o número de pontos turísticos da cidade: \n");
    scanf("%d", &numPontoTuristico);

  // Área para exibição dos dados da cidade 1
    printf("  ******  exibição dos dados digitados por carta *****  \n");
    printf("Estado: %c\n", estado);
    printf("Código da Carta: %s \n", codCarta);
    printf("Cidade: %s \n", nomeCidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área da Cidade: %.2f km2\n", area);
    printf("PIB da Cidade: %.2f reais\n", PIB);
    printf("Pontos turísticos da Cidade: %.d .\n", numPontoTuristico);

    printf(" ---------------------------------------  \n");
  // Área para exibição dos dados da cidade 2
     printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s \n", codCarta2);
    printf("Cidade: %s \n", nomeCidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área da Cidade: %.2f m2\n", area2);
    printf("PIB da Cidade: %.2f reais\n", PIB2);
    printf("Pontos turísticos da Cidade: %.d .\n", numPontoTuristico2);

    printf(" ---------------------------------------  \n");





return 0;
} 
