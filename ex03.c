/* Autor: Matheus Guilherme Moreira de Oliveira 
Data: 10/08/2024 
Objetivo: programa que lê o nome de um funcionário, as horas por ele trabalhadas e seu salário  hora. */
#include <stdio.h>
int main (){
	char nome[40];
	float salariohora;
	float horastrab;
	float salariofinal;

	printf("Qual o seu nome?: ");
	scanf("%s" ,&nome);
	
	printf("Qual seu salario por hora?: ");
	scanf("%f" ,&salariohora);

	printf("Qual o seu total de horas trabalhadas?: ");
	scanf("%f" ,&horastrab);

	float horasextras = horastrab - 40;

	if(horasextras >40)
	{
		salariofinal =(40 * salariohora) + ((horasextras*1.5)*salariohora);
	} else {
		salariofinal = horastrab * salariohora;
	}
	
	printf("\nNome do funcionario: %s\nSalario hora: %f\nHoras trabalhadas: %.2f\nSalario final: %.2f\n"
	, nome,salariohora,horastrab,salariofinal);

	return 0;
}