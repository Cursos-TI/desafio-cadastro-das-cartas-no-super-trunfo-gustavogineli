#include <stdio.h>

int main() {
    char nomeEstado1[50], nomeEstado2[50];
    float populacao1, populacao2, area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2;

    // Cadastrar o estado 1
    printf("\nDigite o nome do estado 1:\n");
    fgets(nomeEstado1, sizeof(nomeEstado1), stdin);

    printf("Digite a população do estado 1: ");
    scanf("%f", &populacao1);

    printf("Digite a área do estado 1 (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB do estado 1: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos do estado 1: ");
    scanf("%d", &pontosTuristicos1);
    
    // Consumir o '\n' deixado pelo scanf
    getchar();

    // Cadastrar o estado 2
    printf("\nDigite o nome do estado 2:\n");
    fgets(nomeEstado2, sizeof(nomeEstado2), stdin);

    printf("Digite a população do estado 2: ");
    scanf("%f", &populacao2);

    printf("Digite a área do estado 2 (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB do estado 2: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos do estado 2: ");
    scanf("%d", &pontosTuristicos2);
    
    getchar();  // Para consumir o '\n' deixado pelo scanf

    // Calculando a densidade populacional
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    // Exibindo a comparação de densidade populacional
    printf("\nComparação de cartas (Atributo: Densidade populacional):\n");

    printf("Carta 1 - %s: %.2f habitantes/km²\n", nomeEstado1, densidade1);
    printf("Carta 2 - %s: %.2f habitantes/km²\n", nomeEstado2, densidade2);

    if (densidade1 < densidade2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", nomeEstado1);
    } else if (densidade2 < densidade1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", nomeEstado2);
    } else {
        printf("\nResultado:s Empate! Ambos têm a mesma densidade populacional.\n");
    }

    return 0;
}
