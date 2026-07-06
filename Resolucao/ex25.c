#include <stdio.h>

int main(){

    float largura, comprimento;
    float areaTotal = 0;

    int continuar = 1;

    while(continuar){

        printf("Largura: ");
        scanf("%f",&largura);

        printf("Comprimento: ");
        scanf("%f",&comprimento);

        areaTotal += largura*comprimento;

        printf("Continuar? (1-Sim 0-Nao): ");
        scanf("%d",&continuar);
    }

    printf("\nArea Total = %.2f m²",areaTotal);

    return 0;
}