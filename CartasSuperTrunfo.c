#include <stdio.h>
int main(){

  char estado1, estado2;
  char codigo_da_carta1[5], codigo_da_carta2 [5];
  char nome_da_cidade1[30], nome_da_cidade2[30];
  unsigned long int populacao1, populacao2;
  float area1,PIB1,DensidadePopulacional1,PIBperCapita1,InversoDensidadePopulacional1,SuperPoder1;
  float area2,PIB2,DensidadePopulacional2,PIBperCapita2,InversoDensidadePopulacional2,SuperPoder2;
  int numeroDePontosTuristicos1,numeroDePontosTuristicos2;

  printf("Desafio Super Trunfo Paises\n");

  printf("Estado:\n");
  scanf(" %c", &estado1);
  printf("Codigo da carta:\n");
  scanf("%s", codigo_da_carta1);
  printf("Cidade:\n");
  scanf("%s", nome_da_cidade1);
  printf("Populaçao:\n");
  scanf("%lu", &populacao1);
  printf("Area (em km2):\n");
  scanf("%f", &area1);
  printf("PIB:\n");
  scanf("%f", &PIB1);
  printf("Pontos turisticos:\n");
  scanf("%d", &numeroDePontosTuristicos1);

//CALCULOS DA CARTA 1
  DensidadePopulacional1 = (float)populacao1 / area1;
  PIBperCapita1 = PIB1 / (float)populacao1;
  InversoDensidadePopulacional1 = 1 / DensidadePopulacional1;
  SuperPoder1 = populacao1 + area1 + PIB1 + numeroDePontosTuristicos1 + PIBperCapita1 + InversoDensidadePopulacional1;


  // INFORMANDO A CARTA 1
  printf("\nDados da carta 1\n");

  printf("Estado: %c\n", estado1);
  printf("Codigo da carta: %s\n", codigo_da_carta1);
  printf("Cidade: %s\n", nome_da_cidade1);
  printf("Populacao: %lu\n", populacao1);
  printf("Area (em km2): %.2f\n", area1);
  printf("PIB: %.2f\n", PIB1);
  printf("Pontos turisticos: %d\n", numeroDePontosTuristicos1);
  printf("Densidade Populacional: %.2f\n", DensidadePopulacional1);
  printf("PIB per Capita: %f\n", PIBperCapita1);
  printf("SuperPoder: %f\n", SuperPoder1); 


 

  printf("Estado:\n");
  scanf(" %c", &estado2);
  printf("Codigo da carta:\n");
  scanf("%s", codigo_da_carta2);
  printf("Cidade:\n");
  scanf("%s", nome_da_cidade2);
  printf("Populaçao:\n");
  scanf("%lu", &populacao2);
  printf("Area (em km2):\n");
  scanf("%f", &area2);
  printf("PIB:\n");
  scanf("%f", &PIB2);
  printf("Pontos turisticos:\n");
  scanf("%d", &numeroDePontosTuristicos2);

  

//CALCULOS DA CARTA 2
DensidadePopulacional2 = (float)populacao2 / area2;
PIBperCapita2 = PIB2 / (float)populacao2;  
InversoDensidadePopulacional2 = 1 / DensidadePopulacional2;
SuperPoder2 = populacao2 + area2 + PIB2 + numeroDePontosTuristicos2 + PIBperCapita2 + InversoDensidadePopulacional2; 


  // INFORMANDO A CARTA 2
  printf("\nDados da carta 2\n");

  printf("Estado: %c\n", estado2);
  printf("Codigo da carta: %s\n", codigo_da_carta2);
  printf("Cidade:%s\n", nome_da_cidade2);
  printf("Populacao: %lu\n", populacao2);
  printf("Area (em km2): %.2f\n", area2);
  printf("PIB: %.2f\n", PIB2);
  printf("Pontos turisticos: %d\n", numeroDePontosTuristicos2);
  printf("Densidade Populacional: %.2f\n", DensidadePopulacional2);
  printf("PIB per Capita: %f\n", PIBperCapita2);
  printf("SuperPoder: %f\n", SuperPoder2);
  
  
// FAZENDO AS COMPARAÇOES
  printf("Populacçao: Carta 1 ganhou ? = %d\n", (populacao1 > populacao2));
  printf("Area: Carta 1 ganhou ? = %d\n", (area1 > area2));
  printf("PIB: Carta 1 ganhou ? = %d\n", (PIB1 > PIB2));
  printf("Pontos turisticos: Carta 1 ganhou ? = %d\n", (numeroDePontosTuristicos1 > numeroDePontosTuristicos2));
  printf("Densidade Populacional: Carta 1 ganhou ? = %d\n", (DensidadePopulacional1 > DensidadePopulacional2));
  printf("PIB per Capita: Carta 1 ganhou ? = %d\n", (PIBperCapita1 > PIBperCapita2));
  printf("Super Poder: Carta 1 ganhou ? = %d\n", (SuperPoder1 > SuperPoder2));
  
  return 0;



}
