#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int var1, var2, var3, var4;
printf("Digite o primeiro numero:");
scanf("%d", &var1);
printf("\nDigite o segundo numero:");
scanf("%d", &var2);
printf("\nDigite o terceiro numero:");
scanf("%d", &var3);
printf("\nDigite o quarto numero:");
scanf("%d", &var4);
printf("\n'%d'+'%d'+'%d'+'%d'='%d'", var1, var2, var3, var4, var1+var2+var3+var4);
	return 0;
}
