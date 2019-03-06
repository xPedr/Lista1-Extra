#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int nascimento, atual, aux;
printf("Digite o seu ano de nascimento:");
scanf("%d", &nascimento);
atual = 2019;
aux = atual - nascimento;
atual = aux;
printf("Assumindo que voce ja fez aniversario este ano, sua idade eh %d anos.", &atual);
	return 0;
}
