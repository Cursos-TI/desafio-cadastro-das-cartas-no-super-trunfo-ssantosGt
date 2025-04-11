#include <stdio.h>

int main() {
  
     //Carta1
     char Estado [20]; 
     char Codigocarta [20];
     char nomecidade [20];
     int populaçao;
     float areaemKm;
     float Pib;
     int NpontosT;

     //Carta2
    
     char Estado2 [20]; 
     char Codigocarta2 [20];
     char nomecidade2  [20];
     int populaçao2;
     float aareaemKm²;
     float Pib2; 
     int NpontosT2;

    printf("Bem-Vindo Ao Jogo Super Trunfo !!!\n");
    printf("Insira Informações para uma Cidade \n");

    printf("Uma letra de A a H para Cidade:");
    scanf(" %s", Estado);

    printf("Um número de 01 a 04:");
    scanf(" %s", Codigocarta);

    printf("Nome da cidade:");
    scanf(" %s", nomecidade);

    printf("Número de habitantes:");
    scanf("%i", &populaçao);

     printf("Número de aréa em Km²:");
     scanf("%f", &areaemKm);  

   printf("Digite o PIB");
   scanf("%f", &Pib);

   printf("Números de Pontos Turisticos:");
   scanf("%i", &NpontosT);

    //resultados originais

    printf("Sua Carta foi criada com sucesso!!\n");
    printf("-  Letra Inicial é: %s \n - Número: %s \n - Nome da Cidade: %s \n - Numero Habitantes: %i \n - Aréa em Km²: %f - PIB: %f  \n - Pontos turisticos %i \n",
    Estado, Codigocarta, nomecidade, populaçao, areaemKm, Pib, NpontosT);


    //segunda rodada (carta)

    printf("Segunda Carta !!! \n");
    printf("Insira Informações \n");

    printf("Uma letra de A a H para Cidade:");
    scanf(" %s", Estado2);

    printf("Um número de 01 a 04:");
    scanf(" %s", Codigocarta2);

    printf("Nome da cidade:");
    scanf(" %s", nomecidade2);

    printf("Número de habitantes:");
    scanf("%i", &populaçao2);

     printf("Número de aréa em Km²:");
     scanf("%f", &aareaemKm²);  

   printf("Digite o PIB");
   scanf("%f", &Pib2);

   printf("Números de Pontos Turisticos:");
   scanf("%i", &NpontosT2);
    
   //resultados originais segunda carta

   printf("Sua Segunda Carta foi criada com sucesso!!\n");
   printf("-  Letra Inicial é:  %s \n - Número: %s \n - Nome da Cidade: %s \n - Numero Habitantes: %i \n - Aréa em Km²: %f \n - PIB: %f  \n - Pontos turisticos %i",
   Estado2, Codigocarta2, nomecidade2, populaçao2, aareaemKm², Pib2, NpontosT2);

return 0;

}