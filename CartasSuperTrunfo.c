#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

   char estado;
   char codigo[4];
   char cidade[50];
   int populacao;
   float area;
   float pib;
   int pontos_turisticos;
   
   printf("Carta 1 \n");

   printf("Digite seu estado:");
   scanf("%c", &estado);

   printf("Digite seu código:");
   scanf("%s", &codigo);

   printf("Nome da cidade:");
   scanf("%s", &cidade);

   printf("População:");
   scanf("%d", &populacao);

   printf("Área:");
   scanf("%f", &area);

   printf("PIB:");
   scanf("%f", &pib);

   printf("Número de pontos Turísticos:");
   scanf("%d", &pontos_turisticos);
   
   printf("\n");
   printf("Carta 1 \n");
   printf("Estado: %c \n", estado);
   printf("Código: %s \n", codigo);
   printf("Cidade: %s \n", cidade);
   printf("População: %d milhões \n", populacao);
   printf("Área: %f km² \n", area);
   printf("PIB: %f bilhões de reais\n", pib);
   printf("Números de pontos Turísticos: %d \n", pontos_turisticos);
   
   printf("\n");

   printf("Carta 2 \n");

   printf("Digite seu estado:");
   scanf("%c", &estado);

   printf("Digite seu código:");
   scanf("%s", &codigo);

   printf("Nome da cidade:");
   scanf("%s", &cidade);

   printf("População:");
   scanf("%d", &populacao);

   printf("Área:");
   scanf("%f", &area);

   printf("PIB:");
   scanf("%f", &pib);

   printf("Número de pontos Turísticos:");
   scanf("%d", &pontos_turisticos);
   
   printf("\n");
   printf("Carta 2 \n");
   printf("Estado: %c \n", estado);
   printf("Código: %s \n", codigo);
   printf("Cidade: %s \n", cidade);
   printf("População: %d milhões \n", populacao);
   printf("Área: %f km² \n", area);
   printf("PIB: %f bilhões de reais\n", pib);
   printf("Números de pontos Turísticos: %d \n", pontos_turisticos);
   
   
    return 0;
}

