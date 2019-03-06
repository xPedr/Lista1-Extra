#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
float mercadoria, parcela;
printf("Digite o valor da mercadoria:");
scanf("%f", &mercadoria);
parcela = mercadoria/3;
printf("Valor: %.2f\nEntrada: %.2f\n1 Parcela: %.2f\n2 Parcela: %.2f", mercadoria, parcela, parcela, parcela);
	return 0;
}
