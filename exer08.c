#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "portuguese");

int i, n;

    printf("informe um numero para tabuada\n");
    scanf(" %d", &n);
    printf("\ndobro");
    printf("\n=============");

    for(i = 2;i <= 2;i++){
        printf("\n %d x %d = %d", n, i, (n * i));
    }
   
   
    printf("\n=============\n\n\n");

    system("pause");
}
