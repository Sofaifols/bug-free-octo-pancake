#include <stdio.h>

int main(){


/*
INCREMENTO (++)
Pré-incremento ++a
Pós-incremento a++
ACRESCENTA SOMENTE 1 UNIDADE


DECREMENTO (--)
Pré-decremento --a
Pós-decremento a--
DIMINUI SOMENTE 1 UNIDADE
*/


int numero1 =1, resultado;

 printf("Antes incremento: %d \n", numero1);
 numero1++;// numero1 = numero1 + 1;com pós incremento
 // com atribuição: numero1 += 1;
 //pós incremento
 //resultado = numero1;
 //numero++;
 printf("Após incremento: %d \n", numero1);

 resultado = ++numero1;
printf("pré-incremento - número1:  %d - resultado %d \n", numero1, resultado);





printf("Antes do decremento: %d - resultado: %d", numero1, resultado); 
 numero1--;//numero1 = numero1 - 1;com decremento
 //com atribuição numero1 -=1;

 resultado = --numero1;
 printf("Pré-decremento - numero1:  %d  - resultado %d \n", numero1, resultado);
 //printf("Após decremento: %d \n", numero1); 









// usar x++ quando quiser usar valor antigo e só depois atualizar
// usar ++x quando precisar do valor já atualizado(incrementdao imediatamente)




}