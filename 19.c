#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
float numero;
int aux;
printf("Digite um numero com casas decimais:\n");
scanf("%f", &numero);
aux = (int)numero;
numero = numero-aux;
printf("A parte decimal do numero eh aproximadamente: %.2f", numero);
	return 0;
}
