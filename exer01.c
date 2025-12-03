#include<stdio.h>
#include<stdlib.h>
int main(){
   
    int num1, resp;

    printf("digite o numero de horas: ");
    scanf(" %d" , &num1);

    resp = num1 * 60;

    printf(" a quantidade de minutos é: %d", resp);

    system("pause");
    return 0;
}