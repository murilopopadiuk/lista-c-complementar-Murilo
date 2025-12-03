#include<stdio.h>
#include<stdlib.h>
int main(){
   
    int num1, resp;

    printf("digite o numero de km/h: ");
    scanf(" %d" , &num1);

    resp = num1 * 3.6;

    printf(" a quantidade de m/s é: %d", resp);

    system("pause");
    return 0;
}