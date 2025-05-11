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

    printf("Escolha uma letra de 'A' a 'H' para representar o estado brasileiro:\n");
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

    // exibição de cartas cadastradas 
    
    printf("CARTA 01 \n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", codigo_1);
    printf("Nome da cidade: %s\n", cidade_1);
    printf("População: %i\n", populacao_1);
    printf("Área: %f\n", area_1);
    printf("PIB: %f\n", pib_1);

    printf("\n");
    
    printf("CARTA 02\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codigo_2);
    printf("Nome da cidade: %s\n", cidade_2);
    printf("População: %i\n", populacao_2);
    printf("Área: %f\n", area_2);
    printf("PIB: %f\n", pib_2);

    

    return 0;


}
