#include <stdio.h>

int main(){

    int segredo,tentativa;

    printf("Numero secreto: ");
    scanf("%d",&segredo);

    for(int i=1;i<=4;i++){

        printf("Tentativa %d: ",i);
        scanf("%d",&tentativa);

        if(tentativa==segredo){

            printf("Acertou na tentativa %d",i);
            return 0;

        }

    }

    printf("Nao acertou.");

    return 0;
}