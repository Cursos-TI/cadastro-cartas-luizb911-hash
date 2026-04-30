#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char pais1;
  char cod1[4];
  char nomecidade1 [50];
  int população1, pontos1;
  float area1, pib1;
  
  char pais2;
  char cod2[4];
  char nomecidade2 [50];
  int população2, pontos2;
  float area2, pib2;
  // Área para entrada de dados
  printf("Insira o para a carna N1.\n");
  printf("Insira o dado do pais (A-B):\n");
  scanf("%c", &pais1);
  printf("Insira o codigo da carta EX: A01):\n");
  scanf(" %s", cod1);
  printf("Insira nome da cidade:\n");
  scanf(" %s", nomecidade1);
  printf("Insira a população:\n");
  scanf("%d", &população1);
  printf("Insira a area em KM:\n");
  scanf("%f", &area1);
  printf("Insira o pib:\n");
  scanf("%f", &pib1);
  printf("Numero de pontos turisticos:\n");
  scanf("%d", &pontos1);

  printf("Insira o para a carna N2.\n");
  printf("Insira o dado do pais (A-B):\n");
  scanf(" %c", &pais2);
  printf("Insira o codigo da carta EX: A01):\n");
  scanf(" %s", cod2);
  printf("Insira nome da cidade:\n");
  scanf(" %s", nomecidade2);
  printf("Insira a população:\n");
  scanf("%d", &população2);
  printf("Insira a area em KM:\n");
  scanf("%f", &area2);
  printf("Insira o pib:\n");
  scanf("%f", &pib2);
  printf("Numero de pontos turisticos:\n");
  scanf("%d", &pontos2);


  // Área para exibição dos dados da cidade

return 0;
} 
