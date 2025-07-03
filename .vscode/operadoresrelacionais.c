#include<stdio.h>

int main(){

    int a = 10;
    int b = 20;
    char c = 'a'; //ela armazena o valor do caracter na tabela ascii


    printf("a > b: %d \n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a == b: %d \n", a == b);
    printf("a != b: %d", a != b);


// 1 é verdadeiro, e 0 é falso


//comparar inteiros com caracteres funciona pq na verdade
//o que é comparado é o valor do caracter correspondente na tabela
//ASCII
printf("x >= c: %d\n",a >= c);


    return 0;
}