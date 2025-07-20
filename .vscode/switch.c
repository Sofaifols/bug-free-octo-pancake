#include <stdio.h>
int main(){
    /*int opcao;

    printf("Escolha uma opção:\n");
    printf("1. Verificar saldo.\n");
    printf("2. Fazer depósito.\n");
    printf("3. Fazer saque.\n");
    scanf("%d", &opcao);


    switch (opcao){
        case 1:
            printf("Saldo: R$1000,00\n");
            break;
        case 2:
            printf("Depósito realizado com sucesso!\n");
            break;
        case 3:
            printf("Saque realizado com sucesso!\n");
            break;
        default:
            printf("Opção inválida, tente novamente.\n");

    }
    return 0;
    }
*/

    int dia=3;

    switch (dia) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n;");
            break;
        case 3:
            printf("Terça-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
         case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
            
        case 7:
            printf("Sábado.");
            break;
        default:
            printf("Dia inválido.\n");

    }
    return 0;
}