#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int nota50, nota10, nota5, nota1, aux, total;
printf("Digite a quantia a ser sacada:");
scanf("%d", &total);
aux = total;
while (total>=50){
	aux-50;
	break;
}
while (total>=10){
	aux-10;
	break;
}
while (total>=5){
	aux-5;
	break;
}
while (total>=1){
	aux-1;
	break;
}
printf("Retire seu dinheiro.");
	return 0;
}
