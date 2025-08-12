#include <stdio.h>

int main() {
    printf("----- SUPER TRUNFO - PAISES -----\n\n");

    // Variáveis da primeira cidade
    char estado1[50], codigo1[4], nome1[100];
    int populacao1, pontos1;
    float area1, PIB1, densidade1;

    // Variáveis da segunda cidade
    char estado2[50], codigo2[4], nome2[100];
    int populacao2, pontos2;
    float area2, PIB2, densidade2;

    // Cadastro da primeira carta
    printf("=== Cadastro da 1ª cidade ===\n");
    printf("Estado: ");
    scanf(" %49[^\n]", estado1);

    printf("Código da carta (ex: A01): ");
    scanf(" %3s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %99[^\n]", nome1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB total (em milhões): ");
    scanf("%f", &PIB1);

    printf("Pontos turísticos: ");
    scanf("%d", &pontos1);

    // Cadastro da segunda carta
    printf("\n=== Cadastro da 2ª cidade ===\n");
    printf("Estado: ");
    scanf(" %49[^\n]", estado2);

    printf("Código da carta (ex: A01): ");
    scanf(" %3s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %99[^\n]", nome2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB total (em milhões): ");
    scanf("%f", &PIB2);

    printf("Pontos turísticos: ");
    scanf("%d", &pontos2);

    // Cálculo da densidade populacional
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    // Exibir cartas
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %s\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f milhões\nPontos turísticos: %d\nDensidade populacional: %.2f hab/km²\n",
           estado1, codigo1, nome1, populacao1, area1, PIB1, pontos1, densidade1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %s\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f milhões\nPontos turísticos: %d\nDensidade populacional: %.2f hab/km²\n",
           estado2, codigo2, nome2, populacao2, area2, PIB2, pontos2, densidade2);

    // Menu para escolha do atributo
    int atributo;
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População (maior vence)\n");
    printf("2 - Área (maior vence)\n");
    printf("3 - PIB (maior vence)\n");
    printf("4 - Pontos turísticos (maior vence)\n");
    printf("5 - Densidade populacional (menor vence)\n");
    printf("Digite sua escolha: ");
    scanf("%d", &atributo);

    // Comparação
    printf("\n=== Comparação ===\n");

    if (atributo == 1) { // População - maior vence
        if (populacao1 > populacao2)
            printf("Vencedora: %s (maior população)\n", nome1);
        else if (populacao2 > populacao1)
            printf("Vencedora: %s (maior população)\n", nome2);
        else
            printf("Empate!\n");
    }
    else if (atributo == 2) { // Área - maior vence
        if (area1 > area2)
            printf("Vencedora: %s (maior área)\n", nome1);
        else if (area2 > area1)
            printf("Vencedora: %s (maior área)\n", nome2);
        else
            printf("Empate!\n");
    }
    else if (atributo == 3) { // PIB - maior vence
        if (PIB1 > PIB2)
            printf("Vencedora: %s (maior PIB)\n", nome1);
        else if (PIB2 > PIB1)
            printf("Vencedora: %s (maior PIB)\n", nome2);
        else
            printf("Empate!\n");
    }
    else if (atributo == 4) { // Pontos turísticos - maior vence
        if (pontos1 > pontos2)
            printf("Vencedora: %s (mais pontos turísticos)\n", nome1);
        else if (pontos2 > pontos1)
            printf("Vencedora: %s (mais pontos turísticos)\n", nome2);
        else
            printf("Empate!\n");
    }
    else if (atributo == 5) { // Densidade populacional - menor vence
        if (densidade1 < densidade2)
            printf("Vencedora: %s (menor densidade populacional)\n", nome1);
        else if (densidade2 < densidade1)
            printf("Vencedora: %s (menor densidade populacional)\n", nome2);
        else
            printf("Empate!\n");
    }
    else {
        printf("Opção inválida!\n");
    }

    return 0;
}
