#include <stdio.h>

int main(){
    int idade;
    float altura;
    char opcao;
    char nome[20];
    //sintaxe scanf
    //scanf("formato1" "formato2, &variavel1, variavel2, ...");
    //Para ler um dade e preciso ter na frente da variavel (&) por exemplo: &idade.
    

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("A idade é: %d\n", idade);

    
    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("A altura é: %f\n", altura);

     
    printf("Digite o seu nome: ");
    scanf("%s", &nome);
    printf("Seu nome é: %s\n", nome);

    printf("Digite o seu caractere: ");
    scanf(" %c", &opcao);
    printf("Seu caractere é: %c\n", opcao);


    /*
    printf("%formato1 %formato2 %formato3", variavel1, variavel2, variavel3)

    %d: Imprime um inteiro no formato decimal.
    %i: Equivalente a %d
    %f: Imprime um número de ponto flutuante no formato padrão, tambem pode-se limitar á duas casas decimais exemplo: (%.2f).
    %e: Imprime um número de ponto flutuante na notação cientifica.
    %c: Imprime um único caractere.
    %s: Imprime uma cadeia (string) de caracteres.
    */
}
