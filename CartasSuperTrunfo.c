#include <stdio.h>

#include <stdio.h>

int main() {
    
    int codigo;
    char nome[50];
    int populacao;
    float area;
    double pib;
    int pontos_turisticos;

    // Mensagem inicial
    printf("Desafio Super Trunfo - Cadastro de Cartas\n\n");

    // Captura de dados do usuário
    printf("Digite o código da cidade: 021");
    scanf("%d", &codigo);

    printf("Digite o nome da cidade: Rio de Janeiro ");
    scanf("%\n", nome);  

    printf("Digite a população da cidade: 6.000.000");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em km²: 1.200");
    scanf("%f", &area);

    printf("Digite o PIB da cidade em bilhões: 331,28");
    scanf("%lf", &pib);

    printf("Digite o número de pontos turísticos da cidade: 58");
    scanf("%d", &pontos_turisticos);

    
    printf("\n=== Dados da Cidade Cadastrada ===\n");
    printf("Código: %d\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2lf bilhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);

    return 0;
}

