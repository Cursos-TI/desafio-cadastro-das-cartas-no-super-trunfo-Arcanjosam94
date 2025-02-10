#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
  char estado;
  char codigo_da_carta[10];
  char nome_da_cidade[50];
  int populacao;
  float area_em_km2;
  float PIB;
  int numero_de_pontos_turisticos;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
  printf("Estado:");
  scanf(" %c", &estado);
  printf("Codigo da carta:");
  scanf("%s", codigo_da_carta);
  printf("Cidade:");
  scanf("%s", nome_da_cidade);
  printf("Populaçao:");
  scanf("%d", &populacao);
  printf("Area (em km2):");
  scanf("%f", &area_em_km2);
  printf("PIB:");
  scanf("%f", &PIB);
  printf("Pontos turisticos:");
  scanf("%d", &numero_de_pontos_turisticos);

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
  printf("\nDados da carta\n");
  printf("Estado: %c\n", estado);
  printf("Codigo da carta: %s\n", codigo_da_carta);
  printf("Cidade: %s\n", nome_da_cidade);
  printf("Populacao: %d\n", populacao);
  printf("Area (em km2): %.2f\n", area_em_km2);
  printf("PIB: %.2f\n", PIB);
  printf("Pontos turisticos: %d\n", numero_de_pontos_turisticos);
  return 0;
}
