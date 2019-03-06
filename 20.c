#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

float total, parcela;
printf("Digite o valor total:");
scanf("%f", &total);
parcela = total/3;
printf("A entrada eh: %.2f \nA primeira parcela eh: %.2f\nA segunda parcela eh: %.2f", parcela+0.01, parcela, parcela);

//MOTIVO: TODOS OS CALCULOS SAO ARREDONDADOS PARA CIMA
	return 0;
}
