#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Calculando a Densidade Populacional e PIB per Capita

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Variáveis da Carta 1

  char estado1[20] = "Paraíba";
  char cidade1[50] = "Guarabira";
  char codigo1[20] = "P01";
  int populacao1;
  float area1;
  float pib1;
  int pontosturisticos1;
  float densidadepopulacional1;
  double pibpercapita1;

  // Variáveis da Carta 2

  char estado2[20] = "Pernambuco";
  char cidade2[50] = "Recife";
  char codigo2[20] = "P02";
  int populacao2;
  float area2;
  float pib2;
  int pontosturisticos2;
  float densidadepopulacional2;
  double pibpercapita2;

  // Cálculos da Densidade Populacional e PIB per Capita das Cartas 1 e 2:

  densidadepopulacional1 = (float) populacao1 / area1;
  pibpercapita1 = (double) pib1 / populacao1;
  densidadepopulacional2 = (float) populacao2 / area2;
  pibpercapita2 = (double) pib2 / populacao2;

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

  // Comandos para a impressão das informações na tela:

  printf("Estado: %s\n", estado1, estado2);
  printf("Cidade: %s\n", cidade1, cidade2);
  printf("Código: %s\n", codigo1, codigo2);
  printf("População: %d\n", populacao1, populacao2);
  printf("Área: %.2f km²\n", area1, area2);
  printf("PIB: %.2f Bilhões de Reais\n", pib1, pib2);
  printf("Pontos Turísticos: %d\n", pontosturisticos1, pontosturisticos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1, densidadepopulacional2);
  printf("PIB per Capita: %.2f Reais\n", pibpercapita1, pibpercapita2);

return 0;
}