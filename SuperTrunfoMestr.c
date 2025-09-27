#include <stdio.h>

int main(){
    // Variáveis da Carta 1:
    char estado1[3];
    char codigo1[4];
    char cidade1[100];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidadepopulacional1;
    float pibpercapita1;
    float superpoder1;

    // Variáveis da Carta 2:
    char estado2[3];
    char codigo2[4];
    char cidade2[100];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidadepopulacional2;
    float pibpercapita2;
    float superpoder2;

    // Entrada de Dados da Carta 1:
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Digite a sigla do seu Estado: \n");
    scanf("%2s", estado1);

    printf("Digite o códgo de sua carta: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da sua cidade: \n");
    scanf("%s", cidade1);

    printf("Digite a sua população: \n");
    scanf("%lu", &populacao1);

    printf("Digite a sua área em km²: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos1);

    // Cálculo da Densidade Populacional da Carta 1:
    densidadepopulacional1 = populacao1 / area1;

    // Cálculo do PIB per Capita da Carta 1:
    pibpercapita1 = pib1 / (float)populacao1;

    // Cálculo do Super Poder da Carta 1:
    superpoder1 = (float)populacao1 + area1 + pib1 + (float)pontosturisticos1 + pibpercapita1;

    printf("\n"); // Apenas pulando uma linha.

    // Entrada de Dados da Carta 2:
    printf("=== Cadastro da Carta 2 ===\n");

    printf("Digite a sigla do seu estado: \n");
    scanf("%2s", estado2);

    printf("Digite o códgo de sua carta: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da sua cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a sua população: \n");
    scanf("%lu", &populacao2);

    printf("Digite a sua área em km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos2);

    // Cálculo da Densidade Populacional 2:
    densidadepopulacional2 = populacao2 / area2;

    // Cálculo do PIB per Capita da Carta 2:
    pibpercapita2 = pib2 / (float)populacao2;

    // Cálculo do Super Poder da Carta 2:
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)pontosturisticos2 + pibpercapita2;

    printf("\n"); // Apenas pulando uma linha.

    // Exibição das Informações da Carta 1:
    printf("Carta 1: \n");
    printf("Estado 1: %s\n", estado1);
    printf("Código 1: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f\n", densidadepopulacional1);
    printf("PIB per Capita: %.2f\n", pibpercapita1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("\n"); // Apenas pulando uma linha.

    // Exibição das Informações da Carta 2:
    printf("Carta 2: \n");
    printf("Estado 2: %s\n", estado2);
    printf("Código 2: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);

    printf("\n"); // Apenas pulando uma linha.

    int opcao1;
    int resultado1;
    printf("Escolha um dos atributos abaixo para a comparação.\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos");
    printf("5. Densidade Demográfica\n");
    printf("Escolha a comparação: \n");
    scanf("%d", &opcao1);

    printf("\n"); // Apenas pulando uma linha.

    switch (opcao1)
    {
    case 1:
    resultado1 = populacao1 > populacao2 ? 1 : 0;
    break;

    case 2:
    resultado1 = area1 > area2 ? 1 : 0;
    break;

    case 3:
    resultado1 = pib1 > pib2 ? 1 : 0;
    break;

    case 4:
    resultado1 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;
    break;
    
    case 5:
    resultado1 = densidadepopulacional1 > densidadepopulacional2 ? 1 : 0;
    break;

    default:
        printf("Opção inválida!\n");
    break;
    }

    int opcao2;
    int resultado2;
    printf("Escolha um dos atributos abaixo para a comparação.\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos");
    printf("5. Densidade Demográfica\n");
    printf("Escolha: \n");
    scanf("%d", &opcao2);

    if (opcao1 == opcao2)
    {
        printf("Você escolheu o mesmo atributo que o anterior");
    }else{
        switch (opcao2)
        {
        case 1:
        resultado2 = populacao1 > populacao2 ? 1 : 0;
        break;

        case 2:
        resultado2 = area1 > area2 ? 1 : 0;
        break;

        case 3:
        resultado2 = pib1 > pib2 ? 1 : 0;
        break;

        case 4:
        resultado2 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;
        break;
        
        case 5:
        resultado2 = densidadepopulacional1 > densidadepopulacional2 ? 1 : 0;
        break;
        }
    }

    printf("\n"); // Apenas pulando uma linha.
    // Início da Exibição de Resultados da Carta 1 para o 1° Atributo:
    printf("Exibição de comparação do 1° Atributo escolhido da Carta 1.\n");
    printf("Carta 1 - Cidade: %s - ", cidade1);
    switch(opcao1){
    case 1: printf("População: %lu\n", populacao1); break;
    case 2: printf("Área: %.2f\n", area1); break;
    case 3: printf("PIB: %.2f\n", pib1); break;
    case 4: printf("Pontos Turísticos: %d\n", pontosturisticos1); break;
    case 5: printf("Densidade Demográfica: %.2f\n", densidadepopulacional1); break;
    }

    // Início da Exibição de Resultados da Carta 2 para o 1° Atributo:
    printf("Exibição de comparação do 1° Atributo escolhido da Carta 2.\n");
    printf("Carta 2 - Cidade: %s - ", cidade2);
    switch(opcao1){
    case 1: printf("População: %lu\n", populacao2); break;
    case 2: printf("Área: %.2f\n", area2); break;
    case 3: printf("PIB: %.2f\n", pib2); break;
    case 4: printf("Pontos Turísticos: %d\n", pontosturisticos2); break;
    case 5: printf("Densidade Demográfica: %.2f\n", densidadepopulacional2); break;
    }
    if (resultado1 == 1)
    {
        printf("Carta 1 venceu.\n");
    }else{
        printf("Carta 2 venceu.\n");
    }

    printf("\n");

    // Início da Exibição de Resultados da Carta 2 para o 2° Atributo:
    printf("Exibição de comparação do 2° Atributo escolhido da Carta 1.\n");
    printf("Carta 1 - Cidade: %s - ", cidade1);
    switch(opcao2){
    case 1: printf("População: %lu\n", populacao1); break;
    case 2: printf("Área: %.2f\n", area1); break;
    case 3: printf("PIB: %.2f\n", pib1); break;
    case 4: printf("Pontos Turísticos: %d\n", pontosturisticos1); break;
    case 5: printf("Densidade Demográfica: %.2f\n", densidadepopulacional1); break;
    }

    // Início da Exibição de Resultados da Carta 2 para o 2° Atributo:
    printf("Exibição de comparação do 2° Atributo escolhido da Carta 2.\n");
    printf("Carta 2 - Cidade: %s - ", cidade2);
    switch(opcao2){
    case 1: printf("População: %lu\n", populacao2); break;
    case 2: printf("Área: %.2f\n", area2); break;
    case 3: printf("PIB: %.2f\n", pib2); break;
    case 4: printf("Pontos Turísticos: %d\n", pontosturisticos2); break;
    case 5: printf("Densidade Demográfica: %.2f\n", densidadepopulacional2); break;
    }

    if (resultado2 == 1)
    {
        printf("Carta 1 venceu.\n");
    }else{
        printf("Carta 2 venceu.\n");
    }

    // Soma para o Atributo 1 da Carta 1:
    float soma1 = 0;
    swicth (opcao1)
    {
    case 1: soma1 += populacao1; break;
    case 2: soma1 += area1; break;
    case 3: soma1 += pib1; break;
    case 4: soma1 += pontosturisticos1; break;
    case 5: soma1 += densidadepopulacional1; break;
    }

    // Soma para o Atributo 2 da Carta 1:
    swicth (opcao2)
    {
    case 1: soma1 += populacao1; break;
    case 2: soma1 += area1; break;
    case 3: soma1 += pib1; break;
    case 4: soma1 += pontosturisticos1; break;
    case 5: soma1 += densidadepopulacional1; break;
    }

    // Soma para o Atributo 1 da Carta 2:
    float soma2 = 0;
    swicth (opcao1)
    {
    case 1: soma2 += populacao2; break;
    case 2: soma2 += area2; break;
    case 3: soma2 += pib2; break;
    case 4: soma2 += pontosturisticos2; break;
    case 5: soma2 += densidadepopulacional2; break;
    }

    // Soma para o Atributo 2 da Carta 2:
    swicth (opcao2)
    {
    case 1: soma2 += populacao2; break;
    case 2: soma2 += area2; break;
    case 3: soma2 += pib2; break;
    case 4: soma2 += pontosturisticos2; break;
    case 5: soma2 += densidadepopulacional2; break;
    }

    printf("\n");
    printf("\n=== VENCEDOR ===\n");
    printf("Soma 1: %.2f\n", soma1);
    printf("Soma 2: %.2f", soma2);
    if(soma1 > soma2){
        printf("Carta 1 venceu!\n");
    }else if(soma 2 > soma 1){
        printf("Carta 2 venceu!\n");
    }else{
        printf("O jogo empatou!\n");
    }

    return 0;
}