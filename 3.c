#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
int n1 , n2 , n3 , n4 , n5 , soma , verificadorConta , verificadorAcesso;

printf("Digite o numero da sua conta: \n");
n1 = getche();
n2 = getche();
n3 = getche();
n4 = getche();
n5 = getche();
n1 *= 6;
n2 *= 5;
n3 *= 4;
n4 *= 3;
n5 *= 2;
soma = n1 + n2 + n3 + n4 + n5;
verificadorConta = soma % 11;
printf("\nDigite o seu verificador de acesso: ");
scanf("%d", &verificadorAcesso);
if (verificadorConta == 0 && verificadorAcesso == 1){
	printf("Acesso concedido.");
}
if (verificadorConta == 1 && verificadorAcesso == 0){
	printf("Acesso concedido.");
}
if (verificadorAcesso == 11){
	printf("Acesso concedido.");
} else {
	printf("Acesso negado.");
}
	return 0;
}
