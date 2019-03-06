#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
float var1;
int var2;
printf("Digite um numero com ate uma casa decimal:");
scanf("%f", &var1);
var2 = (int)var1;
printf("%d", var2);
	return 0;
}
