#include <stdio.h>

    int main(){
        int idade;
        float altura;
        char opcao;
        char nome[22];

printf("OHAYO, me informe sua idade, digitando aqui -->");
    scanf("%d", &idade); 
    //SEMPRE COLOCAR & ANTES DAS VARIAVEIS NO SCANF
    // scanf para a entrada de dados
    // setar do mesmo jeito os especificadores!
printf("Me fala sua altura também?\n");
scanf("%f", &altura);
printf("E qual sua opção?\n");
scanf(" %s", &opcao);
printf("a altura é : %f\n a opção é : %c ", altura, opcao);






    }