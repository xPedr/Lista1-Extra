#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
char nome_p1[20], nome_p2[20];
int idade_p1, idade_p2, aux;
printf("Digite o nome da primeira pessoa:");
scanf("%s", &nome_p1);
printf("\nDigite o nome da segunda pessoa:");
scanf("%s", &nome_p2);
printf("\nDigite a idade da segunda pessoa:");
scanf("%d", &idade_p2);
printf("\nDigite a idade da primeira pessoa:");
scanf("%d", &idade_p1);
aux = idade_p1;
idade_p1 = idade_p2;
idade_p2 = aux;

printf("\n\n\nA primeira pessoa eh %s e sua idade eh %d anos.", nome_p1, idade_p1);
printf("A segunda pessoa eh %s e sua idade eh %d anos.", nome_p2, idade_p2);
	return 0;
}
