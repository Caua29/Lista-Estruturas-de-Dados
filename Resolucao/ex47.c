#include <stdio.h>

int main(){

    float salarioFixo;
    int produtos;

    float soma=0;
    float maior=0;

    for(int i=1;i<=1200;i++){

        printf("\nFuncionario %d\n",i);

        scanf("%f",&salarioFixo);
        scanf("%d",&produtos);

        float comissao;

        if(produtos<=5)
            comissao=1.5;
        else if(produtos<=50)
            comissao=2.0;
        else
            comissao=2.5;

        float salario=salarioFixo+produtos*comissao;

        printf("Salario: %.2f\n",salario);

        soma+=salario;

        if(salarioFixo>maior)
            maior=salarioFixo;

    }

    printf("\nMedia salarios: %.2f",soma/1200);
    printf("\nMaior salario fixo: %.2f",maior);

    return 0;
}