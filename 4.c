#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int d1 , d2 , d3 , d4 , d5 , d6 , d7 , d8 , d9 , d10 , d11;
printf("Digite somente os numeros do seu CPF:\n");
d1 = getche();
d2 = getche();
d3 = getche();
d4 = getche();
d5 = getche();
d6 = getche();
d7 = getche();
d8 = getche();
d9 = getche();
d10 = getche();
d11 = getche();
printf("\nSe CPF vem da regiao de ");
switch (d9){
	case '1':
		printf("DF, GO, MS, MT, TO.");
	break;
	case '2':
		printf("AC, AM, AP, PA, RO, RR.");
	break;
	case '3': 
    	printf("CE, MA, PI.");
    break;
    case '4': 
    	printf("AL, PB, PE, RN.");
    break;
    case '5': 
    	printf("BA, SE.");
    break;
    case '6': 
    	printf("MG.");
    break;
    case '7': 
    	printf("ES, RJ.");
    break;
    case '8': 
    	printf("SP.");
    break;
    case '9': 
    	printf("PR, SC.");
    break;
    case '0': 
    	printf("RS.");
    break;
    default:
    	printf("\ndigito verificador invalido: \n");

}
	return 0;
}
