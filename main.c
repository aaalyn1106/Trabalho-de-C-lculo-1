#include <stdio.h>

double raiz(double n, double x){ //Função do metodo de newton-raphson.
    if (n <= 0){ //Se n for igual a zero o valor da equaçao da 0, pois a raiz de 0 é 0.
        return 0;
    }
    double y = x;
    double z;
    do{
        z = y;
        y = 0.5 * (y + n/y); //Calculo para achar a raiz de um numero n
        if (z != y){
            printf("%.60lf\n", y);
        }
    }while (z != y); //Ele aplica o calculo do metodo de newton para x enquanto y for diferente de z.
}

int main(){
    double x; //Numero inicial para os calculos
    double n; //Numero da raiz que voce quer calcular
    printf("Escolha um número para ser calculado a raiz\n");
    scanf("%lf", &n); //Permitir ao usuario escolher um valor inicial para x.
    printf("Escolha um valor inicial para chegar na raiz que voce escolheu.\n");
    scanf("%lf", &x);
    if(x <= 0){ //Não se pode usar números negativos ou igual a zero para o valor inicial de x pois se nâo da errado a equação.
        printf("Não pode numeros iniciais menores ou igual a zero");
    } else{
        double resultado = raiz(n, x);
        printf("O valor da raiz escolhida é:\n%.60lf\n", resultado);
    }
    return 0;
}
