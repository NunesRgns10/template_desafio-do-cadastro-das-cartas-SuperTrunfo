#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
// <>--> Código corrigido, formato das variáveis na inicialização e na saída de dados 22.maio. 19:18
int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Carta 1
    char estado;
    char codCarta[4]; // Aumentado para 4 para caber "A01" + \0
    char nomeCidade[30];
    int populacao = 0;
    float area = 0.0f;
    float PIB = 0.0f;
    int numPontoTuristico = 0;

// acrescentado no nível intermediário
    float densidade = 0.0f;
    float PIBPerCapita = 0.0f;

  // Carta 2
  // Esta não é uma prática correta. o código foi duplicado porque a instrução era não usar laço na lógica.
  char estado2;
  char codCarta2[4];
  char nomeCidade2[30];
  int populacao2 = 0;
  float area2 = 0.0f;
  float PIB2 =  0.0f;
  int numPontoTuristico2 = 0;
// acrescentado no nível intermediário
    float densidade2 = 0.0f;
    float PIBPerCapita2 = 0.0f;


  // Área para entrada de dados
   printf("  ******  Entre com os dados das cartas *****  \n");

    printf("Entre com a letra do estado (Ex: A): \n");
    scanf(" %c", &estado); // Espaço antes do %c para limpar o buffer
    
    printf("Código da Carta (Ex: A01): \n");
    scanf(" %s", codCarta); // Sem & e com %s
    
    printf("Informe o Nome da Cidade: \n");
    scanf(" %s", nomeCidade); // Sem &
    
    printf("Informe o número de habitantes da cidade: \n");
    scanf("%d", &populacao);
    
    printf("Informe a área da cidade em km2: \n");
    scanf("%f", &area); // Sem o .2
    
    printf("Informe o PIB da cidade: \n");
    scanf("%f", &PIB); // Sem o .2
    
    printf("Informe o número de pontos turísticos da cidade: \n");
    scanf("%d", &numPontoTuristico);

printf("  ******  Entre com os dados da carta 2 *****  \n");

   printf("Entre com a letra do estado (Ex: B): \n");
    scanf(" %c", &estado2); // Espaço antes do %c para limpar o buffer
    
    printf("Código da Carta (Ex: B01): \n");
    scanf(" %s", codCarta2); // Sem & e com %s
    
    printf("Informe o Nome da Cidade: \n");
    scanf(" %s", nomeCidade2); // Sem &
    
    printf("Informe o número de habitantes da cidade: \n");
    scanf("%d", &populacao2);
    
    printf("Informe a área da cidade em km2: \n");
    scanf("%f", &area2); // Sem o .2
    
    printf("Informe o PIB da cidade: \n");
    scanf("%f", &PIB2); // Sem o .2
    
    printf("Informe o número de pontos turísticos da cidade: \n");
    scanf("%d", &numPontoTuristico2);

// calcula densidades populacionais
    densidade = (populacao / area);      // densidade populacional da cidade 1
    densidade2 = (populacao2 / area2);    // densidade populacional da cidade 2
    PIBPerCapita = (PIB / populacao);    // pib per capita da cidade 1
    PIBPerCapita2 = (PIB2 / populacao2); // pib per capita da cidade 2


  // Área para exibição dos dados da cidade 1
    printf("  ******  exibição dos dados digitados por carta *****  \n");
    printf("Estado: %c\n", estado);
    printf("Código da Carta: %s \n", codCarta);
    printf("Cidade: %s \n", nomeCidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área da Cidade: %.2f km2\n", area);
    printf("PIB da Cidade: %.2f reais\n", PIB);
    printf("Pontos turísticos da Cidade: %.2f .\n", numPontoTuristico);
    printf("Densidade populacional da Cidade: %.2f .\n", densidade );
    printf("PIB per capita: %.2f .\n", PIBPerCapita);
    

    printf(" ---------------------------------------  \n");

  // Área para exibição dos dados da cidade 2
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s \n", codCarta2);
    printf("Cidade: %s \n", nomeCidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área da Cidade: %.2f km2\n", area2);
    printf("PIB da Cidade: %.2f reais\n", PIB2);
    printf("Pontos turísticos da Cidade: %d .\n", numPontoTuristico2);
    printf("Densidade populacional da Cidade: %.2f .\n", densidade2 );
    printf("PIB per capita: %.2f .\n", PIBPerCapita2);
 

    printf(" ---------------------------------------  \n");
    
return 0;
} 
