#include <stdio.h>
int main () {

//carta 1
    char estado1 [50];
    char codigo1 [10];
    char cidade1 [50];
    int populacao1;
    float area1;
    float pib1;
    int turismo1;
//carta 2
    char estado2 [50];
    char codigo2 [10];
    char cidade2 [50];
    int populacao2;
    float area2;
    float pib2;
    int turismo2;


    printf("<<<<Bem-vindo ao super trunfo>>>>\n ----vamos começar a jogar\n");
    printf("Escolha o estado da carta 1: ");
    scanf(" %s", estado1);
    printf("Escolha o código da carta 1: ");
    scanf(" %s", codigo1);
    printf("Escolha a cidade da carta 1: ");
    scanf(" %s", cidade1);
    printf("Escolha a população da carta 1: ");
    scanf("%d", &populacao1);
    printf("Escolha a área da carta 1: ");
    scanf("%f", &area1);
    printf("Escolha o PIB da carta 1: ");
    scanf("%f", &pib1);
    printf("Escolha o turismo da carta 1: ");
    scanf("%d", &turismo1);

    printf("<<<Agora vamos para a carta 2>>>\n");

    printf("Escolha o estado da carta 2: ");
    scanf(" %s", estado2);
    printf("Escolha o código da carta 2: ");
    scanf(" %s", codigo2);
    printf("Escolha a cidade da carta 2: ");
    scanf("%s", cidade2);
    printf("Escolha a população da carta 2: ");
    scanf("%d", &populacao2);
    printf("Escolha a área da carta 2: ");
    scanf("%f", &area2);
    printf("Escolha o PIB da carta 2: ");
    scanf("%f", &pib2);
    printf("Escolha o turismo da carta 2: ");
    scanf("%d", &turismo2);
//carta 1
    printf("====carta 1====\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Turismo: %d\n", turismo1);

    //carta 2
    printf("====carta 2====\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Turismo: %d\n", turismo2);

    //resultado da carta 1
    printf(">>>carta 1<<<\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Turismo: %d\n", turismo1);

    //resultado da carta 2
    printf("<<<carta 2>>>\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);sdf
    printf("Turismo: %d\n", turismo2);



     
    return 0;




}