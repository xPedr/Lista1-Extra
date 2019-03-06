#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int var1, var2, aux;
printf("Digite a primeira variavel:");
scanf("%d", &var1);
printf("Digite a segunda variavel:");
scanf("%d", &var2);
aux = var1%var2;
printf("O resto da divisao da primeira pela segunda eh: %d", aux);
	return 0;
}
