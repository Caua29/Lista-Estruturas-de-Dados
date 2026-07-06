#include <stdio.h>

int main() {

    int num;

    printf("Digite um numero entre 0 e 9: ");
    scanf("%d",&num);

    if(num < 0 || num > 9){
        printf("Numero invalido!");
        return 0;
    }

    for(int i=1;i<=10;i++){
        printf("%d x %d = %d\n",num,i,num*i);
    }

    return 0;
}