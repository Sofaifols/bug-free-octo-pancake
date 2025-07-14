#include <stdio.h>

    int main(){
        float temperatura, umidade;
        unsigned int estoque, estoquemin;
        

        estoquemin = 1000;


        printf("Entre com a temperatura:\n");
            scanf("%f", &temperatura);

        printf("Entre com a umidade:\n");
            scanf("%f", &umidade);

        printf("Entre com o estoque:\n");
             scanf("%u", &estoque); //especificador u de formato unsigned

        if (temperatura >30 ){
            printf("TEMPERATURA ALTA!\n");
        }else{
            printf("Temperatura dentro dos parâmetros.\n");
    
        }
        if (umidade > 50){
            printf("UIDADE ELEVADA!\n");
        }else{
            printf("Umidade dentro dos parâmetros.\n");
        }

        if (estoque < estoquemin){
            printf("ESTOQUE NÍVEL MINÍMO!\n");
        }else{
            printf("Estoque conforme os parâmetros.\n");
        }
        //SENSORRRRRRRRR, VERDADEIRO OU FALSA, OU SEJA, MONITORAR PARÂMETROS
    }