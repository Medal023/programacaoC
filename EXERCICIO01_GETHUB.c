#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main(){
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    int codigo1, codigo2, codigo3, codigo4;
    char cidade1[50], cidade2[50], cidade3[50], cidade4[50];
    int populacao1, populacao2, populacao3, populacao4;
    float area1, area2, area3, area4;
    float pib1, pib2, pib3, pib4;
    int numero1, numero2, numero3, numero4;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("DESAFIO SUPER TRUNFO - PAISES\n");
    printf("CARTA 01\n");
    
    printf("Insira o Codigo da primeira cidade: ");
    scanf("%s", &codigo1);
    
    printf("Insira o nome da cidade: ");
    scanf("%s", &cidade1);

    printf("Insira quantos kilometros: ");
    scanf("%f", &area1);

    printf("Qual a PIB da cidade? ");
    scanf("%f", &pib1);

    printf("Quantos pontos turisticos existem na cidade? ");
    scanf("%d", &numero1);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Codigo da Cidade é: %s\n", codigo1);
    printf("O Nome da cidade é: %s\n", cidade1);
    printf("A aréa da cidade é de Quilometros quadrados %.0f\n", area1);
    printf("A Pib e de %.0f\n", pib1);
    printf("Existem %d pontos turisticos na cidade 01\n", numero1);


    return 0;
}


