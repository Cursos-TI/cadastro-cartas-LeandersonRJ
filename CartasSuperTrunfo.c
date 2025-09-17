#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Variáveis da Carta 1

  char estado1[20] = "Paraíba";
  char cidade1[20] = "Guarabira";
  char codigo1[10] = "P01";
  int populacao1 = 8000;
  float area1 = 25000000;
  float pib1 = 25.0;
  int pontosturisticos1 = 10;

  // Variáveis da Carta 2

  char estado2[20] = "Pernambuco";
  char cidade2[20] = "Recife";
  char codigo2[10] = "P02";
  int populacao2 = 7000;
  float area2 = 20000000;
  float pib2 = 20.0;
  int pontosturisticos2 = 12;

  // Área para entrada dos dados

  // Comandos para o jogador colocar os dados da carta:

  printf("Digite o nome do Estado: \n");
  scanf("%s", &estado1, &estado2);

  printf("Digite o nome da Cidade: \n");
  scanf("%s", &cidade1, &cidade2);

  printf("Digite o Código da Carta: \n");
  scanf("%s", &codigo1, &codigo2);

  printf("População da Cidade: \n");
  scanf("%d", &populacao1, &populacao2);

  printf("Área da Cidade: \n");
  scanf("%f", &area1, &area2);

  printf("PIB da Cidade: \n");
  scanf("%f", &pib1, &pib2);

  printf("Pontos Turísticos: \n");
  scanf("%d", &pontosturisticos1, &pontosturisticos2);

  // Área para exibição dos dados

  // Comandos para a impressão das informações na tela:

  printf("Estado: %s\n", estado1, estado2);
  printf("Cidade: %s\n", cidade1, cidade2);
  printf("Código: %s\n", codigo1, codigo2);
  printf("População: %d\n", populacao1, populacao2);
  printf("Área: %.0f\n", area1, area2);
  printf("PIB: %.0f\n", pib1, pib2);
  printf("Pontos Turísticos: %d\n", pontosturisticos1, pontosturisticos2);

return 0;
}