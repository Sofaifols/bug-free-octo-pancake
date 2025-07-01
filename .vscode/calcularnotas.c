#include <stdio.h>

int main(){
// variáveis das notas

//coloquei as variaveis na mesma linha pra poupar 
float nota1, nota2, nota3, media;

//entrada do programa de calculo de medias
printf("\n ===== BEM VINDO AO PROGRAMA DE CÁLCULO DE NOTAS =====\n");
printf("\n ¨¨ de acordo com suas notas, vamos calcular a média ¨¨ \n");

printf("\n -- Digite sua primeira nota:\n");
scanf("%f", &nota1);


printf(" -- Digite sua segunda nota: \n");
scanf("%f", &nota2);


printf(" -- Digite sua terceira nota: \n");
scanf("%f", &nota3);


media = (nota1 + nota2 + nota3) / 3;


printf("\n º A média das suas notas é : %.1f \n", media);
printf("\n");









 
return 0;












}