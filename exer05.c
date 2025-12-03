#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(){
setlocale(LC_ALL, "portuguese");

    float altura1,altura2,altura3,media;

    
    printf("Digite o altura da primeira pessoa: ");
    scanf(" %f", &altura1);

    printf("digite altura da segunda pessoa: ");
    scanf(" %f", &altura2);

    printf("digite altura da segunda pessoa: ");
    scanf(" %f", &altura3);

    media = (altura1 + altura2 + altura3)/3;

    printf("sua media é: %2f\n",media);

    system("pause");
    return 0;
}