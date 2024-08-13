/* Autor: Matheus Guilherme Moreira de Oliveira 
Data: 10/08/2024 
Objetivo: Ler duas variáveis A e B, se a variável A for menor que B, fazer Y= B – A, se B for menor que A fazer Y= A – B,
caso sejam iguais fazer Y = A + B, imprimir no final os valores de A, B e Y.  */
#include <stdio.h>
int main () {
 int A;
 int B;
 int Y;
  printf("Digite o valor de A: ");
	scanf("%d" ,&A);
	
	printf("Digite o valor de B: ");
	scanf("%d" ,&B);

	if (A < B)
	{
		Y = B - A;
	} else if (B < A) {
		Y = A - B;
	} else {
		Y = A + B;
	} 
	printf("\n Os valores finais sao:\nA = %d\nB = %d\nY = %d\n", A,B,Y);
	
	
	
 
 
 









	return 0;
}