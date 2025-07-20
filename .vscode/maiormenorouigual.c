#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;


    //GERAR NÚMERO ALEATÓRIO
    srand(time(0));
    numeroComputador = rand() % 100 + 1; // Números entre 1 e 100, o + 1 garante que o número seja pelo menos 1 e adicione aos 99 e seja possível 100

    //INICIO DO JUEGO
    printf("Bem vindo ao jogo MAIOR, MENOR OU IGUAL!\n");
    printf("Você deve escolher um número e o tipo de comparação.\n");
    printf("M. MAIOR\n");
    printf("N. MENOR \n");
    printf("I. IGUAL\n");

    //EXIBIR NÚMERO DO COMPUTADOR
   printf("Escolha a comparação: ");
    scanf("%c", &tipoComparacao);

    printf("Digite seu número (entre 1 e 100):");
    scanf("%d", &numeroJogador);
    
//exibir numero do computador
    switch (tipoComparacao) {
        case 'M':
        case 'm':
        printf("Você escolheu a opção maior.\n");
         resultado = numeroJogador > numeroComputador ? 1 : 0;
           
        break;
        case 'N':
        case 'n':
        printf("Você escolheu a opção menor.\n");
        resultado = numeroJogador < numeroComputador ? 1: 0;
           
        break;
        case'I':
        case'i':
        printf("Você escolheu a opção igual.\n");
        resultado = numeroJogador == numeroComputador ? 1 : 0;
            
        break;
        default:
        printf("opção de jogo inválida.");

        
    }
    printf("O número do computador é: %d, e o seu número é: %d\n", numeroComputador, numeroJogador);
    if (resultado){
        printf("\nvocê venceu! <:\n");
    }else {
        printf("você perdeu! :<\n");
    }






    }






































    


















