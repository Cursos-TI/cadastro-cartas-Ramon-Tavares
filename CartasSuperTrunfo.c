#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado;
  char codigo;
  char cidade;
  int populacao;
  float area;
  float pib;
  int pontos_turisticos;

  // Área para entrada de dados

  printf("cadastro da carta 1\n");

  printf("Nome do estado: ");
  scanf("%s", &estado);

  printf("Código: ");
  scanf("%s", &codigo);

  printf("Cidade: ");
  scanf("%s", &cidade);

  printf("Populacao: ");
  scanf("%d", &populacao);

  printf("área km²: ");
  scanf("%f", &area);

  printf("PIB: ");
  scanf("%f", &pib);

  printf("Número de postos turista: ");
  scanf("%d", &pontos_turisticos);

  // Área para exibição dos dados da cidade

  printf("\nCadastro da carta 1\n");
  printf("Estado: %s\n", estado);
  printf("Código: %s\n", codigo);
  printf("Cidade: %s\n", cidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: %.2f bilhões\n", pib);
  printf("Pontos turisticos: %d\n", pontos_turisticos);

return 0;

} 
