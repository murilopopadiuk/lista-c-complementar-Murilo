#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(){
setlocale(LC_ALL, "portuguese");

int altura, base, res;

fflush(stdin);
printf("informe a altura do triangulo: \n");
scanf("%d", &altura);
    printf("informe a base do triangulo: \n");
    scanf("%d", &base);

    res = (base * altura)/2;

    printf("a area do retangulo é = %d m. \n", res);
    system("pause");
    return 0;
}