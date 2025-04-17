#include <stdio.h>
int main (){

    // primeira carta

    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float pibpercapita1;
    float superpoder1;

    // segunda carta

    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float pibpercapital2;
    float superpoder2;

    // resultados da comparação

    int VenceuPopulacao;
    int venceuarea;
    int venceuPIB;
    int venceupontos;
    int venceupibpercapita;
    int venceudensidade;
    int venceusuperpoder;

    // cadastro da primeira carta

    printf("Cadastro da primeira cartas:\n");
    printf("população: ");
    scanf("%lu", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);

    // calculo dos novos atributos da primeira carta

    densidade1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;
    superpoder1 = populacao1 + area1 + pib1 + pontos1 + pibpercapita1 + (1.0 / densidade1);

    // cadastro da segunda carta

    printf("\nCadastro da segunda carta:\n");
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);

    // calculo dos novos atributos da segunda carta

    densidade2 = populacao2 / area2;
    pibpercapital2 = pib2 / populacao2;
    superpoder2 = populacao2 + area2 + pib2 + pontos2 + pibpercapital2 + (1.0 / densidade2);

    // exibicao dos dados primeira carta

    printf("\n--- Dados da primeira carta ---\n");
    printf("População: %lu\n", populacao1);
    printf("Area: %d\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per capital: %.2f\n", pibpercapita1);
    printf("Super poder: %.2f\n", superpoder1);

    // exibição da segunda carta

    printf("\n--- Dados da segunda carta ---\n");
    printf("População: %lu\n", populacao2);
    printf("Area: %d\n", area2);
    printf("PIB: %d.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB per capital: %2.f\n", pibpercapital2);
    printf("Super poder: %.2f\n", superpoder2);

    // comparaçoes (1 se carta 1 vence, 0 se carta 2 vence)

    VenceuPopulacao = populacao1 > populacao2 ? 1 : 0;
    venceuarea = area1 > area2 ? 1 : 0;
    venceuPIB = pib1 > pib2 ? 1 : 0;
    venceupontos = pontos1 > pontos2 ? 1 : 0;
    venceudensidade = densidade1 < densidade2 ? 1 : 0;
    venceupibpercapita = pibpercapita1 > pibpercapital2 ? 1 : 0;
    venceusuperpoder = superpoder1 > superpoder2 ? 1 : 0;

    // Resultados
    
    printf("\n--- Comparação ---\n");
    printf("Populacao: %d\n", VenceuPopulacao);
    printf("Area: %d\n", venceuarea);
    printf("PIB: %d\n", venceuPIB);
    printf("Pontos Turisticos: %d\n", venceupontos);
    printf("Densidade Populacional (menor vence): %d\n", venceudensidade);
    printf("PIB per Capita: %d\n", venceupibpercapita);
    printf("Super Poder: %d\n", venceusuperpoder);

    return 0;
}