#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int horas, minutos, segundos;
float entrada, var, aux;
printf("Digite a quantidade de minutos a serem convertidos:\n");
scanf("%f", &entrada);
var = entrada-(int)entrada;
segundos = var*60;
aux = entrada - var;
while(aux>=60){
	aux-=60;
	horas++;
}
printf("\n\n\nRESULTADO:\n%d horas, ", horas);
minutos = aux;
printf("%d minutos e %d segundos.", minutos, segundos);

/*aux = entrada*60;
var = aux-(entrada-(int)entrada*60);
horas = var/60;
var = aux-(entrada-(int)entrada*60);
minutos*/

	return 0;
}
