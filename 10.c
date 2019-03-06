#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
int var1, var2, aux;
printf("Digite a primeira variavel inteira:");
scanf("%d", &var1);
printf("Digite a segunda variavel inteira:");
scanf("%d", &var2);
aux = var1;
var1 = var2;
var2 = aux;
printf("A variavel 1 eh: %d\nA variavel 2 eh:%d", var1, var2);
	return 0;
}
