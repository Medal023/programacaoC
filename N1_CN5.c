#include <stdio.h>

int main(){
    int idade = 27;
    float altura = 1.78;
    char opcao = 'A';
    char nome[20] = "alison";

    printf("A idade do %s é: %d\n", nome, idade);
    printf("A altura é: %.2f\n", altura);
    printf("A opção é: %c\n", opcao);
    
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
