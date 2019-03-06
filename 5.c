#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//declaração de variáveis
char timeA[20], timeB[20], timeC[20], timeD[20];
int timeA1, timeA2, timeA3, timeB1, timeB2, timeB3, timeC1, timeC2, timeC3, timeD1, timeD2, timeD3;
int rtimeA1, rtimeA2, rtimeA3, rtimeB1, rtimeB2, rtimeB3, rtimeC1, rtimeC2, rtimeC3, rtimeD1, rtimeD2, rtimeD3;
int pontosA, pontosB, pontosC, pontosD, pontosA1, pontosB1, pontosC1, pontosD1;
int resTimeA, resTimeB, resTimeC, resTimeD, resTimeA1, resTimeB1, resTimeC1, resTimeD1;

// I/O + calculos
printf("\nDigite o nome do time A:\t");
scanf("%s", &timeA);
printf("\nDigite o nome do time B:\t");
scanf("%s", &timeB);
printf("\nDigite o nome do time C:\t");
scanf("%s", &timeC);
printf("\nDigite o nome do time D:\t");
scanf("%s", &timeD);
printf("\nDigite os resultados do time A em sequencia, se o jogo nao tiver ocorrido aperte ENTER:");
scanf("%d %d %d %d %d %d", &timeA1, &timeA2, &timeA3, &rtimeA1, &rtimeA2, &rtimeA3);
printf("\nQuantas vitorias o time A obteve?");
scanf("%d", &pontosA);
printf("\nQuantos empates o time A obteve?");
scanf("%d", &pontosA1);
resTimeA = pontosA * 3 + pontosA1;
printf("\nDigite os resultados do time B em sequencia, se o jogo nao tiver ocorrido aperte ENTER:");
scanf("%d %d %d %d %d %d", &timeB1, &timeB2, &timeB3, &rtimeB1, &rtimeB2, &rtimeB3);
printf("\nQuantas vitorias o time B obteve?");
scanf("%d", &pontosB);
printf("\nQuantos empates o time B obteve?");
scanf("%d", &pontosB1);
resTimeB = pontosB * 3 + pontosB1;
printf("\nDigite os resultados do time C em sequencia, se o jogo nao tiver ocorrido aperte ENTER:");
scanf("%d %d %d %d %d %d", &timeC1, &timeC2, &timeC3, &rtimeC1, &rtimeC2, &rtimeC3);
printf("\nQuantas vitorias o time C obteve?");
scanf("%d", &pontosC);
printf("\nQuantos empates o time C obteve?");
scanf("%d", &pontosC1);
resTimeC = pontosC * 3 + pontosC1;
printf("\nDigite os resultados do time D em sequencia, se o jogo nao tiver ocorrido aperte ENTER:");
scanf("%d %d %d %d %d %d", &timeD1, &timeD2, &timeD3, &rtimeD1, &rtimeD2, &rtimeD3);
printf("\nQuantas vitorias o time D obteve?");
scanf("%d", &pontosD);
printf("\nQuantos empates o time D obteve?");
scanf("%d", &pontosD1);
resTimeD = pontosD * 3 + pontosD1;
resTimeA1 = timeA1 + timeA2 + timeA3 + rtimeA1 + rtimeA2 + rtimeA3;
resTimeB1 = timeB1 + timeB2 + timeB3 + rtimeB1 + rtimeB2 + rtimeB3;
resTimeC1 = timeC1 + timeC2 + timeC3 + rtimeC1 + rtimeC2 + rtimeC3;
resTimeD1 = timeD1 + timeD2 + timeD3 + rtimeD1 + rtimeD2 + rtimeD3;
//RESULTADO 1
printf("\nO time A fez %d pontos e %d gols.", resTimeA, resTimeA1);
printf("\nO time B fez %d pontos e %d gols.", resTimeB, resTimeB1);
printf("\nO time C fez %d pontos e %d gols.", resTimeC, resTimeC1);
printf("\nO time D fez %d pontos e %d gols.", resTimeD, resTimeD1);
//RESULTADO 2
printf("\nJogo: %s\t %d x %d\t %s", timeA, timeA1, timeB1, timeB);
printf("\nJogo: %s\t %d x %d\t %s", timeA, timeA1, timeC1, timeC);
printf("\nJogo: %s\t %d x %d\t %s", timeA, timeA1, timeD1, timeD);
printf("\nJogo: %s\t %d x %d\t %s", timeB, timeB2, timeC2, timeC);
printf("\nJogo: %s\t %d x %d\t %s", timeB, timeB3, timeD2, timeD);
printf("\nJogo: %s\t %d x %d\t %s", timeC, timeC3, timeD3, timeD);
printf("\nJogo: %s\t %d x %d\t %s", timeA, rtimeA1, rtimeB1, timeB);
printf("\nJogo: %s\t %d x %d\t %s", timeA, rtimeA1, rtimeC1, timeC);
printf("\nJogo: %s\t %d x %d\t %s", timeA, rtimeA1, rtimeD1, timeD);
printf("\nJogo: %s\t %d x %d\t %s", timeB, rtimeB2, rtimeC2, timeC);
printf("\nJogo: %s\t %d x %d\t %s", timeB, rtimeB3, rtimeD2, timeD);
printf("\nJogo: %s\t %d x %d\t %s", timeC, rtimeC3, rtimeD3, timeD);
	return 0;
}
