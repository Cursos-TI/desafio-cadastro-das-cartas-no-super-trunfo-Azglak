#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

struct Cidade {
    char Nome;
    int População;
    float Area;
    float PIB;
    int NPTuristicos;
};

int main() {
    struct Cidade cidade1;
    struct Cidade cidade2;
    
    printf("Olá, bem-vindo ao Super Trunfo Cidades!\nPor favor, insira os dados da primeira cidade.\n");
    printf("População:\n");
    scanf("%d", &cidade1.População);
    printf("Área:\n");
    scanf("%f", &cidade1.Area);
    printf("PIB:\n");
    scanf("%f", &cidade1.PIB);
    printf("Número de pontos turísticos:\n");
    scanf("%d", &cidade1.NPTuristicos);

    printf("Ótimo.\nAgora insira os da segunda cidade.\n");
    printf("População:\n");
    scanf("%d", &cidade2.População);
    printf("Área:\n");
    scanf("%f", &cidade2.Area);
    printf("PIB:\n");
    scanf("%f", &cidade2.PIB);
    printf("Número de pontos turísticos:\n");
    scanf("%d", &cidade2.NPTuristicos);
    
    printf("A primeira cidade é o lar de %d pessoas, tem %f de área, %f de PIB e possui %d pontos turísticos\n",cidade1.População, cidade1.Area, cidade1.PIB, cidade1.NPTuristicos);
    
    printf("Já a segunda é populada por %d pessoas, tem %f de área, %f de PIB e possui %d pontos turísticos", cidade2.População, cidade2.Area, cidade2.PIB, cidade2.NPTuristicos);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
