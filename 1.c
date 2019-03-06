#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
char p1 , p2 , p3 , p4, p5 , p6;

printf("Digite 6 caracteres para serem invertidos:\t");
p1 = getchar();
p2 = getchar();
p3 = getchar();
p4 = getchar();
p5 = getchar();
p6 = getchar();
printf("%c %c %c %c %c %c", p6 , p5 , p4 , p3 , p2 , p1);
	return 0;
}
