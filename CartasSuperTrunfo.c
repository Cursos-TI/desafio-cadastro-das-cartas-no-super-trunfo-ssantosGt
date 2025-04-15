#include <stdio.h>

int main() {
    // Carta 1
    char Estado[20]; 
    char Codigocarta[20];
    char nomecidade[20];
    int populacao;
    float areaemKm;
    float Pib;
    int NpontosT;
    float densidadepop1;

    // Carta 2
    char Estado2[20]; 
    char Codigocarta2[20];
    char nomecidade2[20];
    int populacao2;
    float areaemKm2;
    float Pib2; 
    int NpontosT2;
    float densidadepop2;

    // Início
    printf("Bem-Vindo Ao Jogo Super Trunfo !!!\n");
    printf("Insira Informações para uma Cidade \n");

    printf("Uma letra de A a H para Cidade: ");
    scanf(" %s", Estado);

    printf("Um número de 01 a 04: ");
    scanf(" %s", Codigocarta);

    printf("Nome da cidade: ");
    scanf(" %s", nomecidade);

    printf("Número de habitantes: ");
    scanf("%i", &populacao);

    printf("Número de área em Km²: ");
    scanf("%f", &areaemKm);  

    printf("Digite o PIB: ");
    scanf("%f", &Pib);

    printf("Números de Pontos Turísticos: ");
    scanf("%i", &NpontosT);

    // Cálculo densidade carta 1
    densidadepop1 = (float) populacao / areaemKm;

    // Resultados carta 1
    printf("Sua Carta foi criada com sucesso!!\n");
    printf("- Letra Inicial: %s\n", Estado);
    printf("- Número: %s\n", Codigocarta);
    printf("- Nome da Cidade: %s\n", nomecidade);
    printf("- Número Habitantes: %i\n", populacao);
    printf("- Área em Km²: %.2f\n", areaemKm);
    printf("- PIB: %.2f\n", Pib);
    printf("- Pontos turísticos: %i\n", NpontosT);
    printf("- Densidade Populacional: %.2f\n", densidadepop1);

    // Segunda carta
    printf("\nSegunda Carta !!!\n");
    printf("Insira Informações \n");

    printf("Uma letra de A a H para Cidade: ");
    scanf(" %s", Estado2);

    printf("Um número de 01 a 04: ");
    scanf(" %s", Codigocarta2);

    printf("Nome da cidade: ");
    scanf(" %s", nomecidade2);

    printf("Número de habitantes: ");
    scanf("%i", &populacao2);

    printf("Número de área em Km²: ");
    scanf("%f", &areaemKm2);  

    printf("Digite o PIB: ");
    scanf("%f", &Pib2);

    printf("Números de Pontos Turísticos: ");
    scanf("%i", &NpontosT2);

    // Cálculo densidade carta 2
    densidadepop2 = (float) populacao2 / areaemKm2;

    // Resultados carta 2
    printf("Sua Segunda Carta foi criada com sucesso!!\n");
    printf("- Letra Inicial: %s\n", Estado2);
    printf("- Número: %s\n", Codigocarta2);
    printf("- Nome da Cidade: %s\n", nomecidade2);
    printf("- Número Habitantes: %i\n", populacao2);
    printf("- Área em Km²: %.2f\n", areaemKm2);
    printf("- PIB: %.2f\n", Pib2);
    printf("- Pontos turísticos: %i\n", NpontosT2);
    printf("- Densidade Populacional: %.2f\n", densidadepop2);

    return 0;
}
