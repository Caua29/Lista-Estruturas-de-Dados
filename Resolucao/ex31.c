#include <stdio.h>

int main(){

    int anos, cigarrosDia;
    float precoCarteira;

    printf("Anos fumando: ");
    scanf("%d",&anos);

    printf("Cigarros por dia: ");
    scanf("%d",&cigarrosDia);

    printf("Preco da carteira: ");
    scanf("%f",&precoCarteira);

    float totalCarteiras = (anos*365*cigarrosDia)/20.0;

    printf("Total gasto: R$ %.2f",totalCarteiras*precoCarteira);

    return 0;
}