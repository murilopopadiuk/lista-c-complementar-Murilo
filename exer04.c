#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(){
setlocale(LC_ALL, "portuguese");

    float valor,desconto,res;

    
    printf("Digite o seu valor: ");
    scanf(" %f", &valor);

    desconto = valor * 1.15;

    printf("seu valor é: %f\n", desconto);

    res = valor - desconto;

    printf("seu resultado é: %f",res);

    system("pause");
    return 0;
}