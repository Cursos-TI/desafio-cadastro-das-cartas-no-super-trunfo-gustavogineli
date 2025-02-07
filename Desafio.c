#include <stdio.h>

int main() {
   
    char nomeEstado[50], nomeCidade[50];
    float populacao, area, pib;
    int pontosTuristicos;

    // cadastrar 8 estados, com 4 cidades por estado
    for (char estado = 'A'; estado <= 'H'; estado++) {  // De A a H (8 estados)
        //  nome do estado
        printf("\nDigite o nome do estado %c:\n", estado);
        fgets(nomeEstado, sizeof(nomeEstado), stdin);  // 
        
        // Exibindo o nome do estado
        printf("Estado %c: %s\n", estado, nomeEstado);
        
        //  cadastrar as 4 cidades do estado
        for (int i = 1; i <= 4; i++) {  // 4 cidades por estado
            // Gerando o código da cidade no formato "Letra + Número" 
            char codigo[5];
            sprintf(codigo, "%c%02d", estado, i);

            // Exibindo informações de cadastro para o usuário
            printf("\nCadastro da cidade %s\n", codigo);

            // Pegando os dados da cidade
            printf("Digite o nome da cidade: ");
            fgets(nomeCidade, sizeof(nomeCidade), stdin); 

            printf("Digite a população da cidade: ");
            scanf("%f", &populacao);

            printf("Digite a área da cidade (em km²): ");
            scanf("%f", &area);

            printf("Digite o PIB da cidade: ");
            scanf("%f", &pib);

            printf("Digite o número de pontos turísticos: ");
            scanf("%d", &pontosTuristicos);

            
            getchar(); 

            // Exibindo os dados da cidade cadastrada
            printf("\nDados cadastrados para a cidade %s:\n", codigo);
            printf("Nome: %s", nomeCidade); 
            printf("População: %.2f\n", populacao);
            printf("Densidade populacional: %.1f\n", populacao / area);
            printf("Área: %.2f km²\n", area);
            printf("PIB: %.2f\n", pib);
            printf("PIB per capita %.2f\n", pib / populacao);
            printf("Pontos turísticos: %d\n", pontosTuristicos);
            printf("---------------------------------------------\n");
        }
    }

    return 0;
}
