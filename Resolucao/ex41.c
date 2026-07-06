#include <stdio.h>

int main() {

    int codigo, carrosVendidos;
    char nome[50];
    float vendas, salarioFixo, comissaoCarro;

    printf("Codigo: ");
    scanf("%d",&codigo);

    printf("Nome: ");
    scanf(" %[^\n]",nome);

    printf("Carros vendidos: ");
    scanf("%d",&carrosVendidos);

    printf("Valor total das vendas: ");
    scanf("%f",&vendas);

    printf("Salario fixo: ");
    scanf("%f",&salarioFixo);

    printf("Comissao por carro: ");
    scanf("%f",&comissaoCarro);

    float salario = salarioFixo +
                    carrosVendidos * comissaoCarro +
                    vendas * 0.05;

    printf("\nCodigo: %d",codigo);
    printf("\nNome: %s",nome);
    printf("\nSalario: R$ %.2f",salario);

    return 0;
}