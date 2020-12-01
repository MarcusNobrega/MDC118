#include <stdio.h>

struct data {
    int dia;
    int mes;
    int ano;
} defData;

int main(){
    struct data defData;

    printf("Coloque o dia: ");
    scanf("%d", &defData.dia);

    printf("Coloque o número do mês: ");
    scanf("%d", &defData.mes);

    printf("Coloque o ano: ");
    scanf("%d", &defData.ano);

    printf("Padrão BR: ");
    printf("%d\\%d\\%d \n", defData.dia, defData.mes, defData.ano);

    printf("Padrão US: ");
    printf("%d\\%d\\%d \n", defData.mes, defData.dia, defData.ano);

}
