#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
float n1 , n2 ;
printf("Olá! Quer saber qual número é maior? Digite eles aqui:");
scanf("%f", &n1);
scanf("%f", &n2);
while (n1>n2){
	printf("O maior numero eh: %f", n1);
	break;
}
while (n2>n1){
	printf("O maior numero eh: %f", n2);
	break;
}
	return 0;
}
