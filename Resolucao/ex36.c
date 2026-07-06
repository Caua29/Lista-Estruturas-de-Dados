#include <stdio.h>
#include <math.h>

int main(){

    float largura,comprimento,potencia;

    printf("Largura: ");
    scanf("%f",&largura);

    printf("Comprimento: ");
    scanf("%f",&comprimento);

    printf("Potencia da lampada: ");
    scanf("%f",&potencia);

    float area = largura*comprimento;
    float watts = area*18;

    printf("Lampadas necessarias = %.0f",ceil(watts/potencia));

    return 0;
}