#include <stdio.h>

int main(){
/* soma
subtração
multiplicação 
divisão
*/

int n1, n2;
int soma, sub, div, multi;



printf("Entre com o número 1: \n");
scanf("%d", &n1);

printf("Entre com o número 2:\n");
scanf("%d", &n2);

//soma
soma = n1 + n2;
//multiplicação
multi = n1 * n2;
//divisão
div = n1 / n2;
//subtração
sub = n1 - n2;



printf("A soma dos dois números: %d\n", soma);
printf("A subtração entre os dois núemros: %d\n" , sub);
printf("A multiplicação dos dois números: %d\n", multi);
printf("A divisão dos dois números: %d \n", div);



}