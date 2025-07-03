#include <stdio.h>

//função recursiva basica para somar numeros de n a 1 
int soma (int n) {
    if (n == 1 ){
        return 1;
    } else {
        return n + soma(n-1);
    }
    
    }

 int main(){

int numero = 5;
int resultado = soma(numero); //chamo a função recursiva

printf("Soma de 1 até %d = %d\n", numero, resultado);

return 0;




 }








   