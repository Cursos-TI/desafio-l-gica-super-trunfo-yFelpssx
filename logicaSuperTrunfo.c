#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.
int main(){

    printf("-----SUPER TRUNFO PAISES-----\n");

    
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

//VARIÁVEIS DA PRIMEIRA CIDADE.
    char codigo1[4];
    int população1;
    float PIB1;
    char nome1[100];
    int pontos1;
    
//VARIÁVEIS DA SEGUNDA CIDADE.
    char codigo2[4];    
    int população2;
    float PIB2;
    char nome2[100];
    int pontos2;

 // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
// Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

  //CADASTRO DA PRIMEIRA CARTA.
   
    printf("Digite o código da carta (ex: A01): ");
    scanf("%3s", codigo1);
  
    printf("Nome da cidade: ");
    scanf("%s", nome1);

    printf("O PIB total: ");
    scanf("%f", &PIB1);
    
    printf("População desta cidade: ");
    scanf("%i", &população1);

    printf("Digite quantos pontos turísticos contém: ");
    scanf("%d", &pontos1);


//APENAS PARA SEPARAR AS CARTAS.
    printf("\n");


//CADASTRO DA SEGUNDA CARTA.
    
    printf("Digite o código da carta (ex: A01): ");
    scanf("%3s", codigo2);

    printf("Nome da segunda cidade: ");
    scanf("%s", nome2);

    printf("O PIB total: ");
    scanf("%f", &PIB2);
    
    printf("População desta cidade: ");
    scanf("%i", &população2);

    printf("Digite quantos pontos turísticos contém: ");
    scanf("%d", &pontos2);


//APENAS PARA SEPARAR
    printf("\n");


//PARA GANHADOR DA POPULAÇÃO
if(população1 > população2){
    printf("%s tem menor população\n", nome2);
    printf("A cidade vencedora é: %s\n", nome2);
}else if(população1 < população2){
    printf("%s tem menor população\n", nome1);
    printf("A cidade vencedora é: %s\n", nome1);
}else{
    printf("empataram!\n");
}

//PARA GANHADOR DO PIB
if (PIB1 > PIB2){
    printf("%s tem o maior valor em PIB", nome1);
    printf("A cidade vencedora é: %s\n", nome1);
}else if(PIB1 < PIB2){
    printf("%s tem o maior valor em PIB", nome2);
    printf("A cidade vencedora é: %s\n", nome2);
}else{
    printf("empataram!\n");
}


    

















 return 0;
/* code */
}


    
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

   