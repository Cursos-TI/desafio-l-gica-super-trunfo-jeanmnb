#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

    // Variáveis para armazenar os dados da primeira carta
    char estado1;
    char codigo1[4];
    char nome_estado1[50];
    int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;    

    // Variáveis para armazenar os dados da segunda carta
    char estado2;
    char codigo2[4];
    char nome_estado2[50];
    int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;

    // Leitura dos dados da primeira carta
    printf("Digite as informações da Carta 1:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf("%c", nome_estado1); // Lê strings com espaços
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos automáticos para carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;


    // Leitura dos dados da segunda carta
    printf("\nDigite as informações da Carta 2:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %c", nome_estado2); // Lê strings com espaços
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos automáticos para carta 1
    densidade2 = populacao1 / area1;
    pibPerCapita2 = pib2 / populacao2;

    char atributo[50]= "populacao";

    if(populacao1 > populacao2){
        printf("carta1 venceu");
    }
    else if(populacao2 > populacao1){
        printf("carta2 venceu");
    }
    else{
        printf("jogo empatado");
    }
    return 0;
    }
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    

