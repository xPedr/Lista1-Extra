#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int hora, Minutos;
printf("Digite a hora do dia de agora:");
scanf("%d", &hora);
Minutos = hora * 60;
if(hora>24){
	printf("Erro!");
} else {
	printf("Ja se passaram %d minutos", Minutos);
}
	return 0;
}
