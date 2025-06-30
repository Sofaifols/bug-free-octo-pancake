#include<stdio.h>

int main(){
int a = 10;
int b = 3;

//evitar perda de dados, com as conversões. para quando se trabalhar com varíaveis distintas
float quociente = (float) a /b; // 'a' é explicitamente convertido para float

printf("Quociente: %.2f \n", quociente);



return 0;







}