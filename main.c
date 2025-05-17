#include <stdio.h>

double raiz(double x){ //Função do metodo de newton-raphson.
    double y = x;
    double z;
    do{
        z = y;
        y = 0.5 * (y + 2/y); //Calculo para achar a raiz de 2
        if (z != y){
            printf("%.60lf\n", y);
        }
    }while (z != y); //Ele aplica o calculo do metodo de newton para x enquanto y for diferente de z.
}

int main(){
    double x;
    printf("Escolha um número\n");
    scanf("%lf", &x); //Permitir ao usuario escolher um valor inicial para x.
    if(x <= 0){ //Não se pode usar números negativos na equação posso se não da a raiz de -2 que não existe nos números reais e quando se põe 0 ele da infinito.
        printf("Não pode numeros menores ou igual a zero");
    } else{
        raiz (x);
    }
    return 0;
}