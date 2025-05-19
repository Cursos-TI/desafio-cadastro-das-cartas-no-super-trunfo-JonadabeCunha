#include <stdio.h>

int main () {

    // definindo variaveis 01
    char estado_1;
    char codigo_1[4];
    char cidade_1[20];
    int populacao_1;
    float area_1;
    float pib_1;
    int pontostur_1;
    
    // definindo variaveis 02
    char estado_2;
    char codigo_2[4];
    char cidade_2[20];
    int populacao_2;
    float area_2;
    float pib_2;
    int pontostur_2;

    //cadastro de cartas
    
    printf("CADASTRE A CARTA 01 \n");

    printf("Escolha uma letra de 'A' a 'H' para representar o estado brasileiro: \n");
    scanf("%c", &estado_1);

    printf("Escolha o código do estado: Ex A01 a A99 \n");
    scanf("%s", codigo_1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade_1);

    printf("População total da cidade:\n");
    scanf("%d", &populacao_1);

    printf("Area da cidade em metros quadrados?\n");
    scanf("%f", &area_1);

    printf("qual o PIB da cidade:\n");
    scanf("%f", &pib_1);

    printf("quantos pontos turisticos a cidade possui?\n");
    scanf("%i", &pontostur_1);

    printf("\n");
    

    printf("CADASTRE A CARTA 02 \n");

    printf("Escolha uma letra de 'A' a 'H' para representar o estado brasileiro: \n");
    scanf("%s", &estado_2);

    printf("Escolha o código do estado: Ex B01 a B99 \n");
    scanf("%s", codigo_2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade_2);

    printf("População total da cidade:\n");
    scanf("%d", &populacao_2);

    printf("Area da cidade em metros quadrados?\n");
    scanf("%f", &area_2);

    printf("qual o PIB da cidade:\n");
    scanf("%f", &pib_2);

    printf("quantos pontos turisticos a cidade possui?\n");
    scanf("%i", &pontostur_2);

    printf("\n");

    // novas propriedades
    float densidade_1, pibcapta_1;
    float densidade_2, pibcapta_2;

    densidade_1 = (float) populacao_1 / area_1;
    densidade_2 = (float) populacao_2 / area_2;

    pibcapta_1 = (float) pib_1 / populacao_1;
    pibcapta_2 = (float) pib_2 / populacao_2;

    float power1, power2, inverso1, inverso2;

    inverso1 = 1 / densidade_1;
    inverso2 = 1 / densidade_2;

    power1 = (float) populacao_1 + area_1 + pib_1 + pontostur_1 + pibcapta_1 + inverso1;
    power2 = (float) populacao_2 + area_2 + pib_2 + pontostur_2 + pibcapta_2 + inverso2;


    // exibição de cartas cadastradas 
    
    printf("CARTA 01 \n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", codigo_1);
    printf("Nome da cidade: %s\n", cidade_1);
    printf("População: %i\n", populacao_1);
    printf("Área: %.2f\n", area_1);
    printf("PIB: %.2F\n", pib_1);
    printf("Densidade populaciona: %.2f\n", densidade_1);
    printf("PIB per Capta: %.2f\n", pibcapta_1);
    printf("Super Poder: %.2f\n", power1);

    
    printf("\n");

    printf("CARTA 02\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codigo_2);
    printf("Nome da cidade: %s\n", cidade_2);
    printf("População: %i\n", populacao_2);
    printf("Área: %.2f\n", area_2);
    printf("PIB: %.2f\n", pib_2);
    printf("Densidade populaciona: %.2f\n", densidade_2);
    printf("PIB per Capta: %.2f\n", pibcapta_2);
    printf("Super Poder: %.2f\n", power2);

    printf("\n");

    // comparação de cartas 

    printf("***DUELO DE CARTAS***\n");
    printf("\n");
    printf(" %s VS %s!\n", cidade_1, cidade_2);
    printf("\n");
    printf(" POPULAÇÃO:\n");
    printf("%s É MAIOR QUE %s?\n", cidade_1, cidade_2);
    printf("%d\n", populacao_1 > populacao_2);
    printf(" ÁREA:\n");
    printf("%s É MAIOR QUE %s?\n", cidade_1, cidade_2);
    printf("%d\n", area_1 > area_2);
    printf(" PIB:\n");
    printf("%s É MAIOR QUE %s?\n", cidade_1, cidade_2);
    printf("%d\n", pib_1 > pib_2);
    printf(" DENSIDADE:\n");
    printf("%s É MAIOR QUE %s?\n", cidade_1, cidade_2);
    printf("%d\n", densidade_1 > densidade_2);
    printf(" PIB PER CAPTA:\n");
    printf("%s É MAIOR QUE %s?\n", cidade_1, cidade_2);
    printf("%d\n", pibcapta_1 > pibcapta_2);
    printf(" SUPER PODER:\n");
    printf("%s É MAIOR QUE %s?\n", cidade_1, cidade_2);
    printf("%d\n", power1 > power2);
    printf("\n");
    printf("*** FIM ***");

    return 0;


}