#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado1[20], estado2[20];
  char codigo1[4], codigo2[4];
  char cidade1[20], cidade2[20];
  int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontos_turisticos1, pontos_turisticos2;
  float densidade_populacional1, densidade_populacional2;
  float pib_per_capita1, pib_per_capita2;
  float super_poder1, super_poder2;


  // Área para entrada de dados da primeira carta

  printf("cadastro da carta 1\n");

  printf("Nome do estado: ");
  scanf("%s", &estado1);

  printf("Código: ");
  scanf("%s", &codigo1);

  printf("Cidade: ");
  scanf("%s", &cidade1);

  printf("Populacao: ");
  scanf("%d", &populacao1);

  printf("área km²: ");
  scanf("%f", &area1);

  printf("PIB: ");
  scanf("%f", &pib1);

  printf("Número de postos turista: ");
  scanf("%d", &pontos_turisticos1);

  
  // Área para entrada de dados da segunda carta

   printf("\ncadastro da carta 2\n");

   printf("Nome do estado: ");
   scanf("%s", &estado2);

   printf("Código: ");
   scanf("%s", &codigo2);

   printf("Cidade: ");
   scanf("%s", &cidade2);

   printf("Populacao: ");
   scanf("%d", &populacao2);

   printf("área km²: ");
   scanf("%f", &area2);

   printf("PIB: ");
   scanf("%f", &pib2);

   printf("Número de postos turista: ");
   scanf("%d", &pontos_turisticos2);


  // Área para exibição dos dados da cidade da primeira carta

  printf("\nCadastro da carta 1\n");
  printf("Estado: %s\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões\n", pib1);
  printf("Pontos turisticos: %d\n", pontos_turisticos1);

  densidade_populacional1 = (float)(populacao1 / area1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);

  pib_per_capita1 = (float)(pib1 / populacao1);
  printf("PIB per Capita: %.2f Reais\n", pib_per_capita1);

  super_poder1 = (float) pontos_turisticos1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + densidade_populacional1;
  printf("Super Poder: %.2f\n", super_poder1);

  

  // Área para exibição dos dados da cidade da segunda carta

  printf("\nCadastro da carta 2\n");
  printf("Estado: %s\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões\n", pib2);
  printf("Pontos turisticos: %d\n", pontos_turisticos2);

  densidade_populacional2 = (float)(populacao2 / area2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);

  pib_per_capita2 = (float)(pib2 / populacao2);
  printf("PIB per Capita: %.2f Reais\n", pib_per_capita2);

  super_poder2 =(float) pontos_turisticos2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + densidade_populacional2;
  printf("Super Poder: %.2f\n", super_poder2);


  // Comparação de carta
  printf("\nComparação de cartas\n");

  printf("População: ");
  if (populacao1 > populacao2){
    printf("A carta 1 venceu: (%d)\n", populacao1 > populacao2);
  }else{
    printf("A carta 2 venceu: (%d)\n", populacao1 > populacao2);
  }

  printf("Área: ");
  if (area1 > area2){
    printf("A carta 1 venceu: (%d)\n", area1 > area2);
  }else{
    printf("A carta 2 venceu: (%d)\n", area1 > area2);
  }

  printf("PIB: ");
  if (pib1 > pib2){
    printf("A carta 1 venceu: (%d)\n", pib1 > pib2);
  }else{
    printf("A carta 2 venceu: (%d)\n", pib1 > pib2);
  }

  printf("Pontos Turísticos: ");
  if (pontos_turisticos1 > pontos_turisticos2){
    printf("A carta 1 venceu: (%d)\n", pontos_turisticos1 > pontos_turisticos2);
  }else{
    printf("A carta 2 venceu: (%d)\n", pontos_turisticos1 > pontos_turisticos2);
  }

  printf("Densidade: ");
  if (densidade_populacional1 > densidade_populacional2){
    printf("A carta 1 venceu: (%d)\n", densidade_populacional1 > densidade_populacional2);
  }else{
    printf("A carta 2 venceu: (%d)\n", densidade_populacional1 > densidade_populacional2);
  }

  printf("PIB per Capita: ");
  if (pib_per_capita1 > pib_per_capita2){
    printf("A carta 1 venceu: (%d)\n", pib_per_capita1 > pib_per_capita2);
  }else{
    printf("A carta 2 venceu: (%d)\n", pib_per_capita1 > pib_per_capita2);
  }

  
  printf("\nCarta 1 (%s) Super Poder: %.2f\n", estado1, super_poder1);
  printf("Carta 2 (%s) Super Poder: %.2f\n", estado2, super_poder2);

  if (super_poder1 > super_poder2){
    printf("Resultado: Carta 1 (%s) venceu!\n", estado1);
  }else{
     printf("Resultado: Carta 2 (%s) venceu!\n", estado2);
  }
  
return 0;

} 