/* Autor: Matheus Guilherme Moreira de Oliveira 
Data: 10/08/2024 
Objetivo:   gratificação de Natal a seus funcionários, baseada no numero de horas extras. 
*/
#include <stdio.h>
int main() {
  int horas_extras;
  int horas_falta;
  int h;
  printf("Quais sao suas horas extras?: ");
  scanf("%d", & horas_extras);
  printf("Quais sao suas horas faltantes?: ");
  scanf("%d", & horas_falta);

  h = horas_extras - horas_falta;

  if (h >= 0 && h <= 10) {
    printf(" O premio foi de R$20,00\n");

  } else if (h >= 10 && h <= 20) {
      printf(" O premio foi de R$40,00\n");

    } else if (h >= 20 && h <= 30) {
        printf(" O premio foi de R$60,00\n");

    }  else if (h >= 30 && h <= 40) {
         printf(" O premio foi de R$80,00\n");
    }   else if (h >= 40 && h <= 100) {
          printf(" O premio foi de R$100,00\n");
    }

return 0;
}