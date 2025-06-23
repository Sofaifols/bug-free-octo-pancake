#include <stdio.h>
    int main(){

        int idade, matricula;
        float altura;
        char nome[20];


        printf("Digite sua idade:\n");
        scanf("%d", &idade);

        printf("Digite sua altura:\n");
        scanf("%f", &altura);

        printf("Digite o seu nome:\n");
        scanf("%s",&nome);

        printf("Digite sua mátricula:\n");
        scanf("%d", &matricula);

        printf("Nome do aluno: %s \n  - Mátricula: %d\n", nome, matricula);
        printf("Idade: %d \n- Altura: %f\n", idade, altura);

        return 0;






    }


