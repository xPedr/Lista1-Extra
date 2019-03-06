#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
char exercicio[2];
printf("Digite dois numeros:");
exercicio[1] = getche();
exercicio[2] = getche();
printf("A dezena eh: %c", exercicio[1]);
	return 0;
}
