/* Autor: Matheus Guilherme Moreira de Oliveira 
Data: 10/08/2024 
Objetivo: desconto na mensalidade a ser paga. 
*/
#include <stdio.h>
int main() {
    char nome[100];
    int idade;
    char sexo;
    float mensalidade, desconto;

    printf("Digite o nome do cliente: ");
    scanf("%s", nome);

    printf("Digite a idade do cliente: ");
    scanf("%d", &idade);

    printf("Digite o sexo do cliente: ");
    scanf("%s", &sexo);

    printf("Digite a mensalidade a ser paga: R$");
    scanf("%f", &mensalidade);

    
   if (sexo == 'F') {
        if (idade <= 30) {
            desconto = .2 * mensalidade;
        } else if (idade >= 31 && idade <= 40) {
            desconto = .3 * mensalidade;
        } else {
            desconto = .35 * mensalidade;
        }
   } else if (sexo == 'M' && idade <25) {
       desconto = .25* mensalidade; 
}
     float valorAPagar=mensalidade-desconto;

    printf("\nNome do cliente: %s\nIdade: %d anos\nSexo: %c\nMensalidadetotal a pagar : R$%.2f \nValor apagar %.2f \nDesconot %.2f ",nome,idade,sexo,mensalidade,valorAPagar,desconto);

 return 0 ;
}