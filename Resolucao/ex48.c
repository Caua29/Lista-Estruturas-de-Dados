#include <stdio.h>

int main(){

    float H,R;

    int N;

    printf("Altura: ");
    scanf("%f",&H);

    printf("Coeficiente: ");
    scanf("%f",&R);

    printf("Numero de saltos: ");
    scanf("%d",&N);

    float distancia=H;
    float altura=H;

    for(int i=1;i<=N;i++){

        altura*=R;

        distancia+=2*altura;

    }

    printf("Distancia = %.2f\n",distancia);
    printf("Altura do ultimo salto = %.2f",altura);

    return 0;
}